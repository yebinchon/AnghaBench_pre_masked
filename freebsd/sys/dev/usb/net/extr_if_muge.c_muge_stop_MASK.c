
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct muge_softc {int * sc_xfer; int sc_flags; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 struct ifnet* FUNC_1 (struct usb_ether*) ;
 struct muge_softc* FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_6)
{
 struct muge_softc *VAR_7 = FUNC_2(VAR_6);
 struct ifnet *VAR_8 = FUNC_1(VAR_6);

 FUNC_0(VAR_7, VAR_2);

 VAR_8->if_drv_flags &= ~(VAR_1 | VAR_0);
 VAR_7->sc_flags &= ~VAR_5;




 FUNC_3(VAR_7->sc_xfer[VAR_4]);
 FUNC_3(VAR_7->sc_xfer[VAR_3]);
}
