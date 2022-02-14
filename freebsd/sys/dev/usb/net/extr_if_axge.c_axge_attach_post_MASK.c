
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_eaddr; } ;
struct axge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axge_softc*) ;
 int FUNC_1 (struct axge_softc*,int ,int ,int ,int ,int ) ;
 struct axge_softc* FUNC_2 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_3(struct usb_ether *VAR_3)
{
 struct axge_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);


 FUNC_0(VAR_4);
 FUNC_1(VAR_4, VAR_0, VAR_2, VAR_1,
     VAR_3->ue_eaddr, VAR_2);
}
