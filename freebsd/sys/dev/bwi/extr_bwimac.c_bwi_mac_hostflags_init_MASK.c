
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bwi_softc {int sc_card_flags; } ;
struct bwi_rf {scalar_t__ rf_type; } ;
struct bwi_phy {scalar_t__ phy_mode; int phy_rev; } ;
struct bwi_mac {struct bwi_rf mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bwi_mac*) ;
 int FUNC_1 (struct bwi_mac*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bwi_mac *VAR_8)
{
 struct bwi_softc *VAR_9 = VAR_8->mac_sc;
 struct bwi_phy *VAR_10 = &VAR_8->mac_phy;
 struct bwi_rf *VAR_11 = &VAR_8->mac_rf;
 uint64_t VAR_12;

 if (VAR_10->phy_mode == VAR_5)
  return;

 VAR_12 = FUNC_0(VAR_8);
 VAR_12 |= VAR_3;

 if (VAR_10->phy_mode == VAR_7) {
  if (VAR_10->phy_rev == 1)
   VAR_12 |= VAR_1;
  if (VAR_9->sc_card_flags & VAR_0)
   VAR_12 |= VAR_2;
 } else if (VAR_10->phy_mode == VAR_6) {
  if (VAR_10->phy_rev >= 2 && VAR_11->rf_type == VAR_4)
   VAR_12 &= ~VAR_1;
 } else {
  FUNC_2("unknown PHY mode %u\n", VAR_10->phy_mode);
 }

 FUNC_1(VAR_8, VAR_12);
}
