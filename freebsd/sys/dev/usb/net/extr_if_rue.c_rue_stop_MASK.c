
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct rue_softc {int * sc_xfer; int sc_flags; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct rue_softc*,int ) ;
 int FUNC_1 (struct rue_softc*,int ,int) ;
 int FUNC_2 (struct rue_softc*) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct rue_softc* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_7)
{
 struct rue_softc *VAR_8 = FUNC_4(VAR_7);
 struct ifnet *VAR_9 = FUNC_3(VAR_7);

 FUNC_0(VAR_8, VAR_1);

 VAR_9->if_drv_flags &= ~VAR_0;
 VAR_8->sc_flags &= ~VAR_5;




 FUNC_5(VAR_8->sc_xfer[VAR_3]);
 FUNC_5(VAR_8->sc_xfer[VAR_2]);
 FUNC_5(VAR_8->sc_xfer[VAR_6]);

 FUNC_1(VAR_8, VAR_4, 0x00);

 FUNC_2(VAR_8);
}
