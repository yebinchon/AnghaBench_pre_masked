
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


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_device*,struct mtx*,struct usb_device_request*,void*) ;
 struct usb_interface* FUNC_4 (struct usb_device*,int ) ;

usb_error_t
FUNC_5(struct usb_device *VAR_3, struct mtx *VAR_4, void *VAR_5,
    uint16_t VAR_6, uint8_t VAR_7, uint8_t VAR_8, uint8_t VAR_9)
{
 struct usb_interface *VAR_10 = FUNC_4(VAR_3, VAR_7);
 struct usb_device_request VAR_11;

 if ((VAR_10 == ((void*)0)) || (VAR_10->idesc == ((void*)0))) {
  return (VAR_1);
 }
 FUNC_0(5, "len=%d\n", VAR_6);

 VAR_11.bmRequestType = VAR_2;
 VAR_11.bRequest = VAR_0;
 FUNC_2(VAR_11.wValue, VAR_8, VAR_9);
 VAR_11.wIndex[0] = VAR_10->idesc->bInterfaceNumber;
 VAR_11.wIndex[1] = 0;
 FUNC_1(VAR_11.wLength, VAR_6);
 return (FUNC_3(VAR_3, VAR_4, &VAR_11, VAR_5));
}
