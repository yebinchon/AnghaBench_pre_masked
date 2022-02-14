
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uftdi_softc {int sc_ucom; int sc_udev; int sc_last_lcr; } ;
struct ucom_softc {int sc_portno; struct uftdi_softc* sc_parent; } ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_3, uint8_t VAR_4)
{
 struct uftdi_softc *VAR_5 = VAR_3->sc_parent;
 uint16_t VAR_6 = VAR_3->sc_portno;
 uint16_t VAR_7;
 struct usb_device_request VAR_8;

 FUNC_0(2, "BREAK=%u\n", VAR_4);

 if (VAR_4) {
  VAR_5->sc_last_lcr |= VAR_0;
 } else {
  VAR_5->sc_last_lcr &= ~VAR_0;
 }

 VAR_7 = VAR_5->sc_last_lcr;

 VAR_8.bmRequestType = VAR_2;
 VAR_8.bRequest = VAR_1;
 FUNC_1(VAR_8.wValue, VAR_7);
 FUNC_1(VAR_8.wIndex, VAR_6);
 FUNC_1(VAR_8.wLength, 0);
 FUNC_2(VAR_5->sc_udev, &VAR_5->sc_ucom,
     &VAR_8, ((void*)0), 0, 1000);
}
