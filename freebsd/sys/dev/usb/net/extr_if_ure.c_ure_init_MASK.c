
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ure_softc {int * sc_xfer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ure_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ifnet* FUNC_2 (struct usb_ether*) ;
 struct ure_softc* FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ure_softc*,int ,int) ;
 int FUNC_6 (struct ure_softc*,int ,int) ;
 int FUNC_7 (struct ure_softc*) ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (struct usb_ether*) ;
 int FUNC_10 (struct ure_softc*,int ,int,int) ;
 int FUNC_11 (struct ure_softc*,int ,int,int) ;
 int FUNC_12 (struct ure_softc*,int ,int,int ,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(struct usb_ether *VAR_16)
{
 struct ure_softc *VAR_17 = FUNC_3(VAR_16);
 struct ifnet *VAR_18 = FUNC_2(VAR_16);

 FUNC_1(VAR_17, VAR_1);

 if ((VAR_18->if_drv_flags & VAR_0) != 0)
  return;


 FUNC_9(VAR_16);

 FUNC_7(VAR_17);


 FUNC_10(VAR_17, VAR_11, VAR_9, VAR_4);
 FUNC_12(VAR_17, VAR_13, VAR_9 | VAR_3,
     FUNC_0(VAR_18), 8);
 FUNC_10(VAR_17, VAR_11, VAR_9, VAR_5);


 FUNC_11(VAR_17, VAR_12, VAR_9,
     FUNC_6(VAR_17, VAR_12, VAR_9) &
     ~VAR_8);
 FUNC_11(VAR_17, VAR_12, VAR_9,
     FUNC_6(VAR_17, VAR_12, VAR_9) |
     VAR_8);


 FUNC_10(VAR_17, VAR_10, VAR_9,
     FUNC_5(VAR_17, VAR_10, VAR_9) | VAR_6 |
     VAR_7);

 FUNC_11(VAR_17, VAR_14, VAR_9,
     FUNC_6(VAR_17, VAR_14, VAR_9) &
     ~VAR_15);


 FUNC_8(VAR_16);

 FUNC_13(VAR_17->sc_xfer[VAR_2]);


 VAR_18->if_drv_flags |= VAR_0;


 FUNC_4(VAR_18);
}
