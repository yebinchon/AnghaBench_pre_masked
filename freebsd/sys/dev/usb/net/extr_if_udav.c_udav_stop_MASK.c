
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {struct udav_softc* ue_sc; } ;
struct udav_softc {int sc_flags; int * sc_xfer; int sc_ue; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct udav_softc*,int ) ;
 int FUNC_1 (struct udav_softc*) ;
 struct ifnet* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_7)
{
 struct udav_softc *VAR_8 = VAR_7->ue_sc;
 struct ifnet *VAR_9 = FUNC_2(&VAR_8->sc_ue);

 FUNC_0(VAR_8, VAR_1);

 VAR_9->if_drv_flags &= ~VAR_0;
 if (!(VAR_8->sc_flags & VAR_5))
  VAR_8->sc_flags &= ~VAR_4;




 FUNC_3(VAR_8->sc_xfer[VAR_3]);
 FUNC_3(VAR_8->sc_xfer[VAR_2]);
 FUNC_3(VAR_8->sc_xfer[VAR_6]);

 FUNC_1(VAR_8);
}
