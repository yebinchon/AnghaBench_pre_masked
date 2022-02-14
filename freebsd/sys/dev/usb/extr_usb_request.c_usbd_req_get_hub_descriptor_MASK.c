
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_hub_descriptor {int dummy; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct usb_device*,struct mtx*,struct usb_device_request*,struct usb_hub_descriptor*) ;

usb_error_t
FUNC_3(struct usb_device *VAR_3, struct mtx *VAR_4,
    struct usb_hub_descriptor *VAR_5, uint8_t VAR_6)
{
 struct usb_device_request VAR_7;
 uint16_t VAR_8 = (VAR_6 + 7 + (8 * 8)) / 8;

 VAR_7.bmRequestType = VAR_2;
 VAR_7.bRequest = VAR_1;
 FUNC_1(VAR_7.wValue, VAR_0, 0);
 FUNC_0(VAR_7.wIndex, 0);
 FUNC_0(VAR_7.wLength, VAR_8);
 return (FUNC_2(VAR_3, VAR_4, &VAR_7, VAR_5));
}
