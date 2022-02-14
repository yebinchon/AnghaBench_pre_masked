
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uslcom_softc {int sc_ucom; int sc_udev; int sc_iface_no; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ucom_softc {struct uslcom_softc* sc_parent; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;
 int FUNC_3 (struct uslcom_softc*) ;

__attribute__((used)) static void
FUNC_4(struct ucom_softc *VAR_3)
{
 struct uslcom_softc *VAR_4 = VAR_3->sc_parent;
 struct usb_device_request VAR_5;

 VAR_5.bmRequestType = VAR_2;
 VAR_5.bRequest = VAR_0;
 FUNC_1(VAR_5.wValue, VAR_1);
 FUNC_1(VAR_5.wIndex, VAR_4->sc_iface_no);
 FUNC_1(VAR_5.wLength, 0);

        if (FUNC_2(VAR_4->sc_udev, &VAR_4->sc_ucom,
     &VAR_5, ((void*)0), 0, 1000)) {
  FUNC_0("UART enable failed (ignored)\n");
 }


 FUNC_3(VAR_4);
}
