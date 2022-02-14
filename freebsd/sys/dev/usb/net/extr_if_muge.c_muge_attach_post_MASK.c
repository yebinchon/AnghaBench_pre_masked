
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct muge_softc {int sc_phyno; } ;


 int FUNC_0 (struct muge_softc*) ;
 int FUNC_1 (struct muge_softc*,char*) ;
 int FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (struct usb_ether*) ;
 struct muge_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_0)
{
 struct muge_softc *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(VAR_1, "Calling muge_attach_post.\n");


 VAR_1->sc_phyno = 1;

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);


 FUNC_0(VAR_1);
}
