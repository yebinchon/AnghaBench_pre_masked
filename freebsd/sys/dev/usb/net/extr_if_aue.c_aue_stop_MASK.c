
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct aue_softc {int * sc_xfer; int sc_flags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct aue_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct aue_softc*,int ,int ) ;
 int FUNC_2 (struct aue_softc*) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct aue_softc* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_8)
{
 struct aue_softc *VAR_9 = FUNC_4(VAR_8);
 struct ifnet *VAR_10 = FUNC_3(VAR_8);

 FUNC_0(VAR_9, VAR_7);

 VAR_10->if_drv_flags &= ~VAR_6;
 VAR_9->sc_flags &= ~VAR_4;




 FUNC_5(VAR_9->sc_xfer[VAR_1]);
 FUNC_5(VAR_9->sc_xfer[VAR_0]);
 FUNC_5(VAR_9->sc_xfer[VAR_5]);

 FUNC_1(VAR_9, VAR_2, 0);
 FUNC_1(VAR_9, VAR_3, 0);
 FUNC_2(VAR_9);
}
