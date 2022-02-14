
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct urndis_softc {int * sc_xfer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct urndis_softc*,int ) ;
 struct ifnet* FUNC_1 (struct usb_ether*) ;
 struct urndis_softc* FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_3)
{
 struct urndis_softc *VAR_4 = FUNC_2(VAR_3);
 struct ifnet *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, VAR_1);

 VAR_5->if_drv_flags |= VAR_0;


 FUNC_4(VAR_4->sc_xfer[VAR_2]);


 FUNC_3(VAR_3);
}
