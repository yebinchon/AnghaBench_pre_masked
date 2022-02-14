
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_eaddr; } ;
struct mos_softc {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mos_softc*) ;
 int FUNC_3 (struct mos_softc*,int ) ;
 struct mos_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_0)
{
 struct mos_softc *VAR_1 = FUNC_4(VAR_0);
        int VAR_2;


 VAR_2 = FUNC_3(VAR_1, VAR_0->ue_eaddr);

 if (VAR_2)
   FUNC_0("couldn't get MAC address");

 FUNC_0("address: %s", FUNC_1(VAR_0->ue_eaddr));

 FUNC_2(VAR_1);
}
