
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {int* ue_eaddr; } ;
struct TYPE_2__ {int ue_dev; } ;
struct axe_softc {int* sc_phyaddrs; int sc_phyno; int sc_flags; int* sc_ipgs; TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct axe_softc*) ;
 int FUNC_1 (struct axe_softc*) ;
 int FUNC_2 (struct axe_softc*) ;
 int FUNC_3 (struct axe_softc*) ;
 int FUNC_4 (struct axe_softc*,int ,int ,int ,int*) ;
 void* FUNC_5 (struct axe_softc*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ,char*,...) ;
 struct axe_softc* FUNC_7 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_8(struct usb_ether *VAR_11)
{
 struct axe_softc *VAR_12 = FUNC_7(VAR_11);




 FUNC_4(VAR_12, VAR_3, 0, 0, VAR_12->sc_phyaddrs);
 if (VAR_10)
  FUNC_6(VAR_12->sc_ue.ue_dev, "PHYADDR 0x%02x:0x%02x\n",
      VAR_12->sc_phyaddrs[0], VAR_12->sc_phyaddrs[1]);
 VAR_12->sc_phyno = FUNC_5(VAR_12, VAR_8);
 if (VAR_12->sc_phyno == -1)
  VAR_12->sc_phyno = FUNC_5(VAR_12, VAR_9);
 if (VAR_12->sc_phyno == -1) {
  FUNC_6(VAR_12->sc_ue.ue_dev,
      "no valid PHY address found, assuming PHY address 0\n");
  VAR_12->sc_phyno = 0;
 }


 if (VAR_12->sc_flags & VAR_4) {
  FUNC_0(VAR_12);
  FUNC_4(VAR_12, VAR_1, 0, 0, VAR_11->ue_eaddr);
 } else if (VAR_12->sc_flags & VAR_5) {
  FUNC_1(VAR_12);
  FUNC_4(VAR_12, VAR_1, 0, 0, VAR_11->ue_eaddr);
 } else if (VAR_12->sc_flags & VAR_6) {
  FUNC_2(VAR_12);
  FUNC_4(VAR_12, VAR_1, 0, 0, VAR_11->ue_eaddr);
 } else if (VAR_12->sc_flags & VAR_7) {
  FUNC_3(VAR_12);
 } else
  FUNC_4(VAR_12, VAR_0, 0, 0, VAR_11->ue_eaddr);




 if (VAR_12->sc_flags & (VAR_6 | VAR_7)) {

  VAR_12->sc_ipgs[0] = 0x15;
  VAR_12->sc_ipgs[1] = 0x16;
  VAR_12->sc_ipgs[2] = 0x1A;
 } else
  FUNC_4(VAR_12, VAR_2, 0, 0, VAR_12->sc_ipgs);
}
