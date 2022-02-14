
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_interface {TYPE_1__* idesc; } ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;
struct TYPE_2__ {scalar_t__ bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct usb_device*,struct mtx*,struct usb_device_request*,void*) ;
 struct usb_interface* FUNC_3 (struct usb_device*,int ) ;

usb_error_t
FUNC_4(struct usb_device *VAR_4, struct mtx *VAR_5,
    void *VAR_6, uint16_t VAR_7, uint8_t VAR_8)
{
 struct usb_interface *VAR_9 = FUNC_3(VAR_4, VAR_8);
 struct usb_device_request VAR_10;

 if ((VAR_9 == ((void*)0)) || (VAR_9->idesc == ((void*)0))) {
  return (VAR_2);
 }
 VAR_10.bmRequestType = VAR_3;
 VAR_10.bRequest = VAR_1;
 FUNC_1(VAR_10.wValue, VAR_0, 0);
 VAR_10.wIndex[0] = VAR_9->idesc->bInterfaceNumber;
 VAR_10.wIndex[1] = 0;
 FUNC_0(VAR_10.wLength, VAR_7);
 return (FUNC_2(VAR_4, VAR_5, &VAR_10, VAR_6));
}
