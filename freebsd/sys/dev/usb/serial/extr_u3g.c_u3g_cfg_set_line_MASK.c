
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ucom_softc {size_t sc_subunit; struct u3g_softc* sc_parent; } ;
struct u3g_softc {int sc_udev; scalar_t__* sc_iface; int * sc_line; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ucom_softc*,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_2)
{
 struct u3g_softc *VAR_3 = VAR_2->sc_parent;
 struct usb_device_request VAR_4;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_0(VAR_4.wValue, VAR_3->sc_line[VAR_2->sc_subunit]);
 VAR_4.wIndex[0] = VAR_3->sc_iface[VAR_2->sc_subunit];
 VAR_4.wIndex[1] = 0;
 FUNC_0(VAR_4.wLength, 0);

 FUNC_1(VAR_3->sc_udev, VAR_2,
     &VAR_4, ((void*)0), 0, 1000);
}
