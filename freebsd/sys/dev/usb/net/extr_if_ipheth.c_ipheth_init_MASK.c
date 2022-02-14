
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ipheth_softc {int * sc_xfer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ipheth_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_ether*) ;
 struct ifnet* FUNC_2 (struct usb_ether*) ;
 struct ipheth_softc* FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_3)
{
 struct ipheth_softc *VAR_4 = FUNC_3(VAR_3);
 struct ifnet *VAR_5 = FUNC_2(VAR_3);

 FUNC_0(VAR_4, VAR_2);

 VAR_5->if_drv_flags |= VAR_0;


 FUNC_4(VAR_4->sc_xfer[VAR_1]);


 FUNC_1(VAR_3);
}
