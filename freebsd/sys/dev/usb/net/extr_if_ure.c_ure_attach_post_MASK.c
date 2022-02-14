
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {int ue_eaddr; } ;
struct TYPE_2__ {int* ue_eaddr; int ue_dev; } ;
struct ure_softc {int sc_flags; int sc_chip; TYPE_1__ sc_ue; scalar_t__ sc_phyno; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 struct ure_softc* FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct ure_softc*) ;
 int FUNC_5 (struct ure_softc*,int ,int ,int ,int) ;
 int FUNC_6 (struct ure_softc*) ;
 int FUNC_7 (struct ure_softc*) ;

__attribute__((used)) static void
FUNC_8(struct usb_ether *VAR_7)
{
 struct ure_softc *VAR_8 = FUNC_3(VAR_7);

 VAR_8->sc_phyno = 0;


 FUNC_4(VAR_8);


 if (VAR_8->sc_flags & VAR_3)
  FUNC_6(VAR_8);
 else
  FUNC_7(VAR_8);

 if ((VAR_8->sc_chip & VAR_1) ||
     (VAR_8->sc_chip & VAR_2))
  FUNC_5(VAR_8, VAR_6, VAR_4,
      VAR_7->ue_eaddr, 8);
 else
  FUNC_5(VAR_8, VAR_5, VAR_4,
      VAR_7->ue_eaddr, 8);

 if (FUNC_0(VAR_8->sc_ue.ue_eaddr)) {
  FUNC_2(VAR_8->sc_ue.ue_dev, "MAC assigned randomly\n");
  FUNC_1(VAR_8->sc_ue.ue_eaddr, VAR_0, 0);
  VAR_8->sc_ue.ue_eaddr[0] &= ~0x01;
  VAR_8->sc_ue.ue_eaddr[0] |= 0x02;
 }
}
