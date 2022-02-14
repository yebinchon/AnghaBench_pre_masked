
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_port_status {int dummy; } ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_device*,struct mtx*,struct usb_device_request*,struct usb_port_status*,int ,int *,int) ;

usb_error_t
FUNC_2(struct usb_device *VAR_2, struct mtx *VAR_3,
    struct usb_port_status *VAR_4, uint8_t VAR_5)
{
 struct usb_device_request VAR_6;

 VAR_6.bmRequestType = VAR_1;
 VAR_6.bRequest = VAR_0;
 FUNC_0(VAR_6.wValue, 0);
 VAR_6.wIndex[0] = VAR_5;
 VAR_6.wIndex[1] = 0;
 FUNC_0(VAR_6.wLength, sizeof(*VAR_4));

 return (FUNC_1(VAR_2, VAR_3, &VAR_6, VAR_4, 0, ((void*)0), 1000));
}
