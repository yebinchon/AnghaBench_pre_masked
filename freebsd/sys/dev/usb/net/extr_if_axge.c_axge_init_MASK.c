
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct axge_softc {int * sc_xfer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct axge_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct axge_softc*,int ,int ) ;
 int FUNC_5 (struct axge_softc*) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (struct axge_softc*,int ,int ,int) ;
 int FUNC_9 (struct axge_softc*,int ,int,int ,int) ;
 int FUNC_10 (struct axge_softc*,int ,int ,int ,int ,int ) ;
 struct ifnet* FUNC_11 (struct usb_ether*) ;
 struct axge_softc* FUNC_12 (struct usb_ether*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(struct usb_ether *VAR_15)
{
 struct axge_softc *VAR_16;
 struct ifnet *VAR_17;

 VAR_16 = FUNC_12(VAR_15);
 VAR_17 = FUNC_11(VAR_15);
 FUNC_0(VAR_16, VAR_9);

 if ((VAR_17->if_drv_flags & VAR_8) != 0)
  return;




 FUNC_7(VAR_15);

 FUNC_5(VAR_16);


 FUNC_10(VAR_16, VAR_0, VAR_7, VAR_4,
     FUNC_1(VAR_17), VAR_7);

 FUNC_8(VAR_16, VAR_0, VAR_6, 0x34);
 FUNC_8(VAR_16, VAR_0, VAR_5, 0x52);


 FUNC_2(VAR_15);


 FUNC_6(VAR_15);
 FUNC_8(VAR_16, VAR_0, VAR_2, 0);
 (void)FUNC_4(VAR_16, VAR_0, VAR_2);


 FUNC_9(VAR_16, VAR_0, 2, VAR_3, VAR_11 | VAR_10 |
     VAR_13 | VAR_14 | VAR_12);

 FUNC_13(VAR_16->sc_xfer[VAR_1]);

 VAR_17->if_drv_flags |= VAR_8;

 FUNC_3(VAR_17);
}
