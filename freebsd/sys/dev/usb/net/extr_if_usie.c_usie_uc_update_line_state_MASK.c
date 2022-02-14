
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usie_softc {int * sc_uc_ifnum; int *** sc_uc_xfer; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ucom_softc {size_t sc_subunit; struct usie_softc* sc_parent; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct usie_softc*,struct usb_device_request*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_3, uint8_t VAR_4)
{
 struct usie_softc *VAR_5 = VAR_3->sc_parent;
 struct usb_device_request VAR_6;

 if (VAR_5->sc_uc_xfer[VAR_3->sc_subunit][VAR_1] == ((void*)0))
  return;

 VAR_6.bmRequestType = VAR_2;
 VAR_6.bRequest = VAR_0;
 FUNC_1(VAR_6.wValue, VAR_4);
 FUNC_1(VAR_6.wIndex, VAR_5->sc_uc_ifnum[VAR_3->sc_subunit]);
 FUNC_1(VAR_6.wLength, 0);

 FUNC_0("sc_uc_ifnum=%d\n", VAR_5->sc_uc_ifnum[VAR_3->sc_subunit]);

 FUNC_2(VAR_5, &VAR_6, ((void*)0));
}
