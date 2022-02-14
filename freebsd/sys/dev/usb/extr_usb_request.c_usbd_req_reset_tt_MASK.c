
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_device_request {int* wIndex; int wLength; int wValue; int bRequest; int bmRequestType; } ;
struct TYPE_2__ {scalar_t__ bDeviceClass; scalar_t__ bDeviceProtocol; } ;
struct usb_device {TYPE_1__ ddesc; } ;
struct mtx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct usb_device*,struct mtx*,struct usb_device_request*,int ) ;

usb_error_t
FUNC_2(struct usb_device *VAR_4, struct mtx *VAR_5,
    uint8_t VAR_6)
{
 struct usb_device_request VAR_7;



 if (VAR_4->ddesc.bDeviceClass == VAR_0 &&
     VAR_4->ddesc.bDeviceProtocol == VAR_1)
  VAR_6 = 1;

 VAR_7.bmRequestType = VAR_3;
 VAR_7.bRequest = VAR_2;
 FUNC_0(VAR_7.wValue, 0);
 VAR_7.wIndex[0] = VAR_6;
 VAR_7.wIndex[1] = 0;
 FUNC_0(VAR_7.wLength, 0);
 return (FUNC_1(VAR_4, VAR_5, &VAR_7, 0));
}
