
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_device_request {int bRequest; int wLength; scalar_t__* wIndex; int wValue; int bmRequestType; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct usb_device*,int *,struct usb_device_request*,scalar_t__*) ;

__attribute__((used)) static uint8_t
FUNC_2(struct usb_device *VAR_1, uint8_t VAR_2)
{
 struct usb_device_request VAR_3;
 usb_error_t VAR_4;
 uint8_t VAR_5 = 0;



 VAR_3.bmRequestType = VAR_0;
 VAR_3.bRequest = 0xFE;
 FUNC_0(VAR_3.wValue, 0);
 VAR_3.wIndex[0] = VAR_2;
 VAR_3.wIndex[1] = 0;
 FUNC_0(VAR_3.wLength, 1);

 VAR_4 = FUNC_1(VAR_1, ((void*)0), &VAR_3, &VAR_5);
 if (VAR_4)
  VAR_5 = 0;

 return (VAR_5);
}
