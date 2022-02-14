
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_device*,struct mtx*,struct usb_device_request*,int *) ;

usb_error_t
FUNC_2(struct usb_device *VAR_2, struct mtx *VAR_3, uint8_t *VAR_4)
{
 struct usb_device_request VAR_5;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_0(VAR_5.wValue, 0);
 FUNC_0(VAR_5.wIndex, 0);
 FUNC_0(VAR_5.wLength, 1);
 return (FUNC_1(VAR_2, VAR_3, &VAR_5, VAR_4));
}
