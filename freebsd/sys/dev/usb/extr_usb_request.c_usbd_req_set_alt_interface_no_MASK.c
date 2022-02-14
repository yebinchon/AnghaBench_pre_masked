
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_interface {TYPE_1__* idesc; } ;
struct usb_device_request {int wLength; scalar_t__* wIndex; scalar_t__* wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;
struct TYPE_2__ {scalar_t__ bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_device*,struct mtx*,struct usb_device_request*,int ) ;
 struct usb_interface* FUNC_2 (struct usb_device*,scalar_t__) ;

usb_error_t
FUNC_3(struct usb_device *VAR_3, struct mtx *VAR_4,
    uint8_t VAR_5, uint8_t VAR_6)
{
 struct usb_interface *VAR_7 = FUNC_2(VAR_3, VAR_5);
 struct usb_device_request VAR_8;

 if ((VAR_7 == ((void*)0)) || (VAR_7->idesc == ((void*)0)))
  return (VAR_1);

 VAR_8.bmRequestType = VAR_2;
 VAR_8.bRequest = VAR_0;
 VAR_8.wValue[0] = VAR_6;
 VAR_8.wValue[1] = 0;
 VAR_8.wIndex[0] = VAR_7->idesc->bInterfaceNumber;
 VAR_8.wIndex[1] = 0;
 FUNC_0(VAR_8.wLength, 0);
 return (FUNC_1(VAR_3, VAR_4, &VAR_8, 0));
}
