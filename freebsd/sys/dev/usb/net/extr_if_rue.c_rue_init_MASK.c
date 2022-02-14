
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct rue_softc {int * sc_xfer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rue_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct rue_softc*,int ,int) ;
 int FUNC_3 (struct rue_softc*,int ,int) ;
 int FUNC_4 (struct rue_softc*) ;
 int FUNC_5 (struct usb_ether*) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (struct rue_softc*,int ,int ,int ) ;
 struct ifnet* FUNC_10 (struct usb_ether*) ;
 struct rue_softc* FUNC_11 (struct usb_ether*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct usb_ether *VAR_14)
{
 struct rue_softc *VAR_15 = FUNC_11(VAR_14);
 struct ifnet *VAR_16 = FUNC_10(VAR_14);

 FUNC_1(VAR_15, VAR_2);




 FUNC_4(VAR_15);


 FUNC_9(VAR_15, VAR_8, FUNC_0(VAR_16), VAR_0);

 FUNC_8(VAR_14);




 FUNC_2(VAR_15, VAR_12, VAR_13);
 FUNC_3(VAR_15, VAR_9, VAR_11|VAR_10);


 FUNC_6(VAR_14);

 FUNC_5(VAR_14);


 FUNC_2(VAR_15, VAR_4, (VAR_7 | VAR_6 | VAR_5));

 FUNC_12(VAR_15->sc_xfer[VAR_3]);

 VAR_16->if_drv_flags |= VAR_1;
 FUNC_7(VAR_14);
}
