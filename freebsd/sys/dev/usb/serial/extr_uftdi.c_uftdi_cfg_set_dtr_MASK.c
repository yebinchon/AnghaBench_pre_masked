
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uftdi_softc {int sc_ucom; int sc_udev; } ;
struct ucom_softc {int sc_portno; struct uftdi_softc* sc_parent; } ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_4, uint8_t VAR_5)
{
 struct uftdi_softc *VAR_6 = VAR_4->sc_parent;
 uint16_t VAR_7 = VAR_4->sc_portno;
 uint16_t VAR_8;
 struct usb_device_request VAR_9;

 FUNC_0(2, "DTR=%u\n", VAR_5);

 VAR_8 = VAR_5 ? VAR_1 : VAR_2;

 VAR_9.bmRequestType = VAR_3;
 VAR_9.bRequest = VAR_0;
 FUNC_1(VAR_9.wValue, VAR_8);
 FUNC_1(VAR_9.wIndex, VAR_7);
 FUNC_1(VAR_9.wLength, 0);
 FUNC_2(VAR_6->sc_udev, &VAR_6->sc_ucom,
     &VAR_9, ((void*)0), 0, 1000);
}
