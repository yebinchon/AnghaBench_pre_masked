
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct cdce_softc {int * sc_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct cdce_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ifnet* FUNC_1 (struct usb_ether*) ;
 struct cdce_softc* FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_6)
{
 struct cdce_softc *VAR_7 = FUNC_2(VAR_6);
 struct ifnet *VAR_8 = FUNC_1(VAR_6);

 FUNC_0(VAR_7, VAR_5);

 VAR_8->if_drv_flags &= ~VAR_4;




 FUNC_3(VAR_7->sc_xfer[VAR_0]);
 FUNC_3(VAR_7->sc_xfer[VAR_1]);
 FUNC_3(VAR_7->sc_xfer[VAR_2]);
 FUNC_3(VAR_7->sc_xfer[VAR_3]);
}
