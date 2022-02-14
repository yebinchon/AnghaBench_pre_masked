
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int dummy; } ;
struct mos_softc {int* mos_ipgs; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mos_softc*,int ) ;
 void* FUNC_2 (struct mos_softc*,int ) ;
 int FUNC_3 (struct mos_softc*,int ,int) ;
 int FUNC_4 (struct mos_softc*) ;
 int FUNC_5 (struct usb_ether*) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (struct mos_softc*,int ) ;
 struct ifnet* FUNC_9 (struct usb_ether*) ;
 struct mos_softc* FUNC_10 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_11(struct usb_ether *VAR_9)
{
 struct mos_softc *VAR_10 = FUNC_10(VAR_9);
 struct ifnet *VAR_11 = FUNC_9(VAR_9);
 uint8_t VAR_12;

 FUNC_1(VAR_10, VAR_1);


 FUNC_4(VAR_10);


 FUNC_8(VAR_10, FUNC_0(VAR_11));


 VAR_10->mos_ipgs[0] = FUNC_2(VAR_10, VAR_7);
 VAR_10->mos_ipgs[1] = FUNC_2(VAR_10, VAR_8);
 FUNC_3(VAR_10, VAR_7, VAR_10->mos_ipgs[0]);
 FUNC_3(VAR_10, VAR_8, VAR_10->mos_ipgs[1]);





 VAR_12 = FUNC_2(VAR_10, VAR_2);
 VAR_12 |= VAR_4 | VAR_6 | VAR_3;
 VAR_12 &= ~(VAR_5);

 FUNC_6(VAR_9);


 FUNC_3(VAR_10, VAR_2, VAR_12);


 FUNC_5(VAR_9);

 VAR_11->if_drv_flags |= VAR_0;
 FUNC_7(VAR_9);
}
