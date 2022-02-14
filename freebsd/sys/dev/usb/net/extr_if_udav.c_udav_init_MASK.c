
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {struct udav_softc* ue_sc; } ;
struct udav_softc {int * sc_xfer; int sc_ue; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct udav_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct udav_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct udav_softc*,int ,int) ;
 int FUNC_4 (struct udav_softc*,int ,int ,int ) ;
 int FUNC_5 (struct usb_ether*) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_ether*) ;
 struct ifnet* FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct usb_ether *VAR_16)
{
 struct udav_softc *VAR_17 = VAR_16->ue_sc;
 struct ifnet *VAR_18 = FUNC_8(&VAR_17->sc_ue);

 FUNC_2(VAR_17, VAR_2);




 FUNC_7(VAR_16);


 FUNC_4(VAR_17, VAR_11, FUNC_0(VAR_18), VAR_0);




 FUNC_1(VAR_17, VAR_8, VAR_9 | VAR_10);


 FUNC_3(VAR_17, VAR_12, VAR_14 | VAR_13);


 FUNC_5(VAR_16);


 FUNC_3(VAR_17, VAR_12, VAR_15);


 FUNC_3(VAR_17, VAR_4, VAR_5);
 FUNC_1(VAR_17, VAR_6, VAR_7);

 FUNC_9(VAR_17->sc_xfer[VAR_3]);

 VAR_18->if_drv_flags |= VAR_1;
 FUNC_6(VAR_16);
}
