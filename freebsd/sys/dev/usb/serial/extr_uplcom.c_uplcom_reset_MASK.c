
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct uplcom_softc {scalar_t__ sc_data_iface_no; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_device*,int *,struct usb_device_request*,int *) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct uplcom_softc *VAR_2, struct usb_device *VAR_3)
{
 struct usb_device_request VAR_4;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_0(VAR_4.wValue, 0);
 VAR_4.wIndex[0] = VAR_2->sc_data_iface_no;
 VAR_4.wIndex[1] = 0;
 FUNC_0(VAR_4.wLength, 0);

 return (FUNC_1(VAR_3, ((void*)0), &VAR_4, ((void*)0)));
}
