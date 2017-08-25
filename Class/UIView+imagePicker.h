//
//  UIView+imagePicker.h
//  reSearchDemo
//
//  Created by 周波 on 17/6/30.
//  Copyright © 2017年 Kiwaro. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (imagePicker)<UIAlertViewDelegate>

- (void)takePhotoDelegate:(id)delegate SourceType:(UIImagePickerControllerSourceType)sourceType;
@end
