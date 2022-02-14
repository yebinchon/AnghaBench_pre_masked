
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct mos_softc {scalar_t__ mos_link; int * sc_xfer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct mos_softc*,int ) ;
 int FUNC_1 (struct mos_softc*) ;
 struct ifnet* FUNC_2 (struct usb_ether*) ;
 struct mos_softc* FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_5)
{
 struct mos_softc *VAR_6 = FUNC_3(VAR_5);
 struct ifnet *VAR_7 = FUNC_2(VAR_5);

 FUNC_1(VAR_6);

 FUNC_0(VAR_6, VAR_1);
 VAR_7->if_drv_flags &= ~VAR_0;


 FUNC_4(VAR_6->sc_xfer[VAR_4]);
 FUNC_4(VAR_6->sc_xfer[VAR_3]);
 FUNC_4(VAR_6->sc_xfer[VAR_2]);

 VAR_6->mos_link = 0;
}
