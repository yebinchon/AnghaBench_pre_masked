
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_eaddr; } ;
struct udav_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct udav_softc*,int ,int ,int ) ;
 int FUNC_1 (struct udav_softc*) ;
 struct udav_softc* FUNC_2 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_3(struct usb_ether *VAR_2)
{
 struct udav_softc *VAR_3 = FUNC_2(VAR_2);


 FUNC_1(VAR_3);


 FUNC_0(VAR_3, VAR_1, VAR_2->ue_eaddr, VAR_0);
}
