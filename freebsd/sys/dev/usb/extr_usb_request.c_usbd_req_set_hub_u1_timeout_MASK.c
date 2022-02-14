
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef void* uint8_t ;
struct usb_device_request {int wLength; void** wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_device*,struct mtx*,struct usb_device_request*,int ) ;

usb_error_t
FUNC_2(struct usb_device *VAR_3, struct mtx *VAR_4,
    uint8_t VAR_5, uint8_t VAR_6)
{
 struct usb_device_request VAR_7;

 VAR_7.bmRequestType = VAR_2;
 VAR_7.bRequest = VAR_1;
 FUNC_0(VAR_7.wValue, VAR_0);
 VAR_7.wIndex[0] = VAR_5;
 VAR_7.wIndex[1] = VAR_6;
 FUNC_0(VAR_7.wLength, 0);
 return (FUNC_1(VAR_3, VAR_4, &VAR_7, 0));
}
