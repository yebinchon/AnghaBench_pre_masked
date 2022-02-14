
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct usb_device_request {int bRequest; int wLength; int wIndex; int wValue; int bmRequestType; } ;
struct uhso_softc {int sc_dev; int sc_udev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct uhso_softc *VAR_1, int VAR_2)
{
 struct usb_device_request VAR_3;
 usb_error_t VAR_4;

 VAR_3.bmRequestType = VAR_0;
 VAR_3.bRequest = VAR_2 ? 0x82 : 0x81;
 FUNC_0(VAR_3.wValue, 0);
 FUNC_0(VAR_3.wIndex, 0);
 FUNC_0(VAR_3.wLength, 0);

 VAR_4 = FUNC_2(VAR_1->sc_udev, ((void*)0), &VAR_3, ((void*)0));
 if (VAR_4 != 0) {
  FUNC_1(VAR_1->sc_dev, "usbd_do_request_flags failed: %s\n",
      FUNC_3(VAR_4));
  return (-1);
 }
 return (VAR_2);
}
