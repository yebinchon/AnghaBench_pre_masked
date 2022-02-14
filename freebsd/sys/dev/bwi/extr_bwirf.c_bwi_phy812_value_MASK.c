
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_softc {int sc_card_flags; } ;
struct bwi_rf {int rf_lo_gain; int rf_rev; } ;
struct bwi_phy {int phy_flags; int phy_rev; } ;
struct bwi_mac {struct bwi_rf mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static __inline uint16_t
FUNC_1(struct bwi_mac *VAR_2, uint16_t VAR_3)
{
 struct bwi_softc *VAR_4 = VAR_2->mac_sc;
 struct bwi_phy *VAR_5 = &VAR_2->mac_phy;
 struct bwi_rf *VAR_6 = &VAR_2->mac_rf;
 uint16_t VAR_7, VAR_8, VAR_9;

 if ((VAR_5->phy_flags & VAR_1) == 0)
  return 0;

 VAR_7 = VAR_6->rf_lo_gain;
 if (VAR_6->rf_rev == 8)
  VAR_7 += 0x3e;
 else
  VAR_7 += 0x26;

 if (VAR_7 >= 0x46) {
  VAR_7 -= 0x46;
  VAR_8 = 0x3000;
 } else if (VAR_7 >= 0x3a) {
  VAR_7 -= 0x3a;
  VAR_8 = 0x1000;
 } else if (VAR_7 >= 0x2e) {
  VAR_7 -= 0x2e;
  VAR_8 = 0x2000;
 } else {
  VAR_7 -= 0x10;
  VAR_8 = 0;
 }

 for (VAR_9 = 0; VAR_9 < 16; ++VAR_9) {
  VAR_7 -= (6 * VAR_9);
  if (VAR_7 < 6)
   break;
 }

 if (VAR_5->phy_rev >= 7 && (VAR_4->sc_card_flags & VAR_0)) {
  if (VAR_8)
   VAR_8 |= 0x8000;
  VAR_8 |= (VAR_9 << 8);
  switch (VAR_3) {
  case 0x011:
   return 0x8f92;
  case 0x001:
   return (0x8092 | VAR_8);
  case 0x101:
   return (0x2092 | VAR_8);
  case 0x100:
   return (0x2093 | VAR_8);
  default:
   FUNC_0("unsupported lpd\n");
  }
 } else {
  VAR_8 |= (VAR_9 << 8);
  switch (VAR_3) {
  case 0x011:
   return 0xf92;
  case 0x001:
  case 0x101:
   return (0x92 | VAR_8);
  case 0x100:
   return (0x93 | VAR_8);
  default:
   FUNC_0("unsupported lpd\n");
  }
 }

 FUNC_0("never reached\n");
 return 0;
}
