
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_eaddr; } ;
struct aue_softc {int dummy; } ;


 int FUNC_0 (struct aue_softc*,int ) ;
 int FUNC_1 (struct aue_softc*) ;
 struct aue_softc* FUNC_2 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_3(struct usb_ether *VAR_0)
{
 struct aue_softc *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(VAR_1);


 FUNC_0(VAR_1, VAR_0->ue_eaddr);
}
