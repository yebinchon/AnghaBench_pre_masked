
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct smsc_softc {int * sc_xfer; } ;
struct ifnet {int if_drv_flags; int if_capabilities; int if_capenable; scalar_t__ if_hwassist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct smsc_softc*,int ) ;
 int FUNC_2 (struct smsc_softc*,char*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct smsc_softc*) ;
 int FUNC_5 (struct smsc_softc*) ;
 scalar_t__ FUNC_6 (struct smsc_softc*,int ) ;
 int FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (struct usb_ether*) ;
 struct ifnet* FUNC_10 (struct usb_ether*) ;
 struct smsc_softc* FUNC_11 (struct usb_ether*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct usb_ether *VAR_4)
{
 struct smsc_softc *VAR_5 = FUNC_11(VAR_4);
 struct ifnet *VAR_6 = FUNC_10(VAR_4);

 FUNC_1(VAR_5, VAR_2);

 if (FUNC_6(VAR_5, FUNC_0(VAR_6)))
  FUNC_2(VAR_5, "setting MAC address failed\n");

 if ((VAR_6->if_drv_flags & VAR_1) != 0)
  return;


 FUNC_9(VAR_4);






 if (!(VAR_6->if_capabilities & VAR_0)) {
  VAR_6->if_capabilities |= VAR_0;
  VAR_6->if_capenable |= VAR_0;
  VAR_6->if_hwassist = 0;
 }
 FUNC_4(VAR_5);


 FUNC_7(VAR_4);


 FUNC_5(VAR_5);

 FUNC_12(VAR_5->sc_xfer[VAR_3]);


 VAR_6->if_drv_flags |= VAR_1;


 FUNC_3(VAR_6);
 FUNC_8(VAR_4);
}
