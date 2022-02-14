
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct uslcom_softc {int sc_ucom; int sc_udev; int sc_iface_no; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ucom_softc {struct uslcom_softc* sc_parent; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_4, uint8_t VAR_5)
{
 struct uslcom_softc *VAR_6 = VAR_4->sc_parent;
 struct usb_device_request VAR_7;
 uint16_t VAR_8;

 FUNC_0("onoff = %d\n", VAR_5);

 VAR_8 = VAR_5 ? VAR_0 : 0;
 VAR_8 |= VAR_1;

 VAR_7.bmRequestType = VAR_3;
 VAR_7.bRequest = VAR_2;
 FUNC_1(VAR_7.wValue, VAR_8);
 FUNC_1(VAR_7.wIndex, VAR_6->sc_iface_no);
 FUNC_1(VAR_7.wLength, 0);

 if (FUNC_2(VAR_6->sc_udev, &VAR_6->sc_ucom,
     &VAR_7, ((void*)0), 0, 1000)) {
  FUNC_0("Setting DTR failed (ignored)\n");
 }
}
