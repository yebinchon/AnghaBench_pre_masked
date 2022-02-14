
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int ue_udev; } ;
struct cdce_softc {int * sc_xfer; TYPE_1__ sc_ue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct cdce_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct usb_ether*) ;
 struct ifnet* FUNC_2 (struct usb_ether*) ;
 struct cdce_softc* FUNC_3 (struct usb_ether*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_6)
{
 struct cdce_softc *VAR_7 = FUNC_3(VAR_6);
 struct ifnet *VAR_8 = FUNC_2(VAR_6);

 FUNC_0(VAR_7, VAR_4);

 VAR_8->if_drv_flags |= VAR_3;


 FUNC_5(VAR_7->sc_xfer[VAR_1]);
 FUNC_5(VAR_7->sc_xfer[VAR_2]);







 if (FUNC_4(VAR_7->sc_ue.ue_udev) == VAR_5)
  FUNC_6(VAR_7->sc_xfer[VAR_0]);


 FUNC_1(VAR_6);
}
