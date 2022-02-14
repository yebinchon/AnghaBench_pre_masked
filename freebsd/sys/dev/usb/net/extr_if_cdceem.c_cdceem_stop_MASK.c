
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct cdceem_softc {int * sc_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct ifnet* FUNC_0 (struct usb_ether*) ;
 struct cdceem_softc* FUNC_1 (struct usb_ether*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct usb_ether *VAR_3)
{
 struct cdceem_softc *VAR_4;
 struct ifnet *VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_0(VAR_3);

 VAR_5->if_drv_flags &= ~VAR_2;

 FUNC_2(VAR_4->sc_xfer[VAR_0]);
 FUNC_2(VAR_4->sc_xfer[VAR_1]);
}
