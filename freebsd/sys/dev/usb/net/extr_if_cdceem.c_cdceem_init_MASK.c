
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int ue_udev; } ;
struct cdceem_softc {int * sc_xfer; TYPE_1__ sc_ue; scalar_t__ sc_flags; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct usb_ether*) ;
 struct ifnet* FUNC_1 (struct usb_ether*) ;
 struct cdceem_softc* FUNC_2 (struct usb_ether*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_5)
{
 struct cdceem_softc *VAR_6;
 struct ifnet *VAR_7;

 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = FUNC_1(VAR_5);

 VAR_7->if_drv_flags |= VAR_2;

 if (VAR_4)
  VAR_6->sc_flags = VAR_1;
 else
  VAR_6->sc_flags = 0;







 if (FUNC_3(VAR_6->sc_ue.ue_udev) == VAR_3)
  FUNC_4(VAR_6->sc_xfer[VAR_0]);

 FUNC_0(VAR_5);
}
