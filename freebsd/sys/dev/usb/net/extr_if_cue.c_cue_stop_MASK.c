
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct cue_softc {int * sc_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cue_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cue_softc*,int ,int ) ;
 int FUNC_2 (struct cue_softc*) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct cue_softc* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_5)
{
 struct cue_softc *VAR_6 = FUNC_4(VAR_5);
 struct ifnet *VAR_7 = FUNC_3(VAR_5);

 FUNC_0(VAR_6, VAR_4);

 VAR_7->if_drv_flags &= ~VAR_3;




 FUNC_5(VAR_6->sc_xfer[VAR_1]);
 FUNC_5(VAR_6->sc_xfer[VAR_0]);

 FUNC_1(VAR_6, VAR_2, 0);
 FUNC_2(VAR_6);
}
