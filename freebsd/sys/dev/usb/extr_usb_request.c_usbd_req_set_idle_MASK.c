
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_interface {TYPE_1__* idesc; } ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;
struct TYPE_2__ {scalar_t__ bInterfaceNumber; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_device*,struct mtx*,struct usb_device_request*,int ) ;
 struct usb_interface* FUNC_4 (struct usb_device*,int ) ;

usb_error_t
FUNC_5(struct usb_device *VAR_3, struct mtx *VAR_4,
    uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 struct usb_interface *VAR_8 = FUNC_4(VAR_3, VAR_5);
 struct usb_device_request VAR_9;

 if ((VAR_8 == ((void*)0)) || (VAR_8->idesc == ((void*)0))) {
  return (VAR_1);
 }
 FUNC_0(5, "%d %d\n", VAR_6, VAR_7);

 VAR_9.bmRequestType = VAR_2;
 VAR_9.bRequest = VAR_0;
 FUNC_2(VAR_9.wValue, VAR_6, VAR_7);
 VAR_9.wIndex[0] = VAR_8->idesc->bInterfaceNumber;
 VAR_9.wIndex[1] = 0;
 FUNC_1(VAR_9.wLength, 0);
 return (FUNC_3(VAR_3, VAR_4, &VAR_9, 0));
}
