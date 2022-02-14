
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct kue_softc {int * sc_xfer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct kue_softc*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct kue_softc*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct kue_softc*,int ,int) ;
 int FUNC_5 (struct usb_ether*) ;
 struct ifnet* FUNC_6 (struct usb_ether*) ;
 struct kue_softc* FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct usb_ether *VAR_8)
{
 struct kue_softc *VAR_9 = FUNC_7(VAR_8);
 struct ifnet *VAR_10 = FUNC_6(VAR_8);

 FUNC_1(VAR_9, VAR_7);


 FUNC_2(VAR_9, VAR_6, VAR_3,
     0, FUNC_0(VAR_10), VAR_0);
 FUNC_4(VAR_9, VAR_5, 64);


 FUNC_3(VAR_8);

 FUNC_8(VAR_9->sc_xfer[VAR_2]);

 VAR_10->if_drv_flags |= VAR_1;
 FUNC_5(VAR_8);
}
