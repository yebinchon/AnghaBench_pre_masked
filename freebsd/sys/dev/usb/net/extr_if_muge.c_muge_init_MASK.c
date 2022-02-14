
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct muge_softc {int * sc_xfer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct muge_softc*,int ) ;
 scalar_t__ FUNC_2 (struct muge_softc*,int ) ;
 int FUNC_3 (struct muge_softc*,char*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct muge_softc*) ;
 int FUNC_6 (struct muge_softc*) ;
 int FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (struct usb_ether*) ;
 struct ifnet* FUNC_10 (struct usb_ether*) ;
 struct muge_softc* FUNC_11 (struct usb_ether*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct usb_ether *VAR_3)
{
 struct muge_softc *VAR_4 = FUNC_11(VAR_3);
 FUNC_3(VAR_4, "Calling muge_init.\n");
 struct ifnet *VAR_5 = FUNC_10(VAR_3);
 FUNC_1(VAR_4, VAR_1);

 if (FUNC_2(VAR_4, FUNC_0(VAR_5)))
  FUNC_3(VAR_4, "setting MAC address failed\n");

 if ((VAR_5->if_drv_flags & VAR_0) != 0)
  return;


 FUNC_9(VAR_3);


 FUNC_5(VAR_4);


 FUNC_7(VAR_3);


 FUNC_6(VAR_4);

 FUNC_12(VAR_4->sc_xfer[VAR_2]);


 VAR_5->if_drv_flags |= VAR_0;


 FUNC_4(VAR_5);
 FUNC_8(VAR_3);
}
