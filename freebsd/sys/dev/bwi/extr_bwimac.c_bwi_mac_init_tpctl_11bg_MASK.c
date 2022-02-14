
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tpctl_orig ;
typedef int tpctl ;
struct bwi_tpctl {int bbp_atten; int rf_atten; scalar_t__ tp_ctrl1; } ;
struct bwi_softc {int sc_dev; } ;
struct bwi_rf {scalar_t__ rf_type; int rf_rev; scalar_t__ rf_idle_tssi; scalar_t__ rf_base_tssi; } ;
struct bwi_phy {scalar_t__ phy_mode; int phy_flags; int phy_rev; } ;
struct bwi_mac {int mac_flags; int mac_tpctl; struct bwi_rf mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bwi_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct bwi_softc*,int ,int) ;
 int FUNC_2 (struct bwi_softc*,int,char*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (struct bwi_mac*,int) ;
 int FUNC_5 (struct bwi_mac*,int,int) ;
 int FUNC_6 (struct bwi_mac*,int,int) ;
 int FUNC_7 (struct bwi_mac*,int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,struct bwi_tpctl*,int) ;
 int FUNC_10 (struct bwi_mac*) ;
 int FUNC_11 (struct bwi_mac*,struct bwi_tpctl*) ;
 int FUNC_12 (struct bwi_mac*) ;
 int FUNC_13 (int ,char*) ;

void
FUNC_14(struct bwi_mac *VAR_11)
{
 struct bwi_softc *VAR_12 = VAR_11->mac_sc;
 struct bwi_phy *VAR_13 = &VAR_11->mac_phy;
 struct bwi_rf *VAR_14 = &VAR_11->mac_rf;
 struct bwi_tpctl VAR_15;
 int VAR_16 = 0;

 FUNC_3(VAR_13->phy_mode != VAR_8,
     ("phy_mode %d", VAR_13->phy_mode));

 if (FUNC_0(VAR_12))
  return;

 FUNC_5(VAR_11, 0x28, 0x8018);
 FUNC_1(VAR_12, VAR_0, 0x20);

 if (VAR_13->phy_mode == VAR_10) {
  if ((VAR_13->phy_flags & VAR_6) == 0)
   return;
  FUNC_5(VAR_11, 0x47a, 0xc111);
 }
 if (VAR_11->mac_flags & VAR_5)
  return;

 if (VAR_13->phy_mode == VAR_9 && VAR_13->phy_rev >= 2 &&
     VAR_14->rf_type == VAR_7) {
  FUNC_7(VAR_11, 0x76, 0x84);
 } else {
  struct bwi_tpctl VAR_17;


  FUNC_9(&VAR_11->mac_tpctl, &VAR_15, sizeof(VAR_15));
  VAR_16 = 1;

  FUNC_9(&VAR_11->mac_tpctl, &VAR_17, sizeof(VAR_17));
  VAR_17.bbp_atten = 11;
  VAR_17.tp_ctrl1 = 0;





   VAR_17.rf_atten = 9;

  FUNC_11(VAR_11, &VAR_17);
 }

 FUNC_10(VAR_11);

 VAR_11->mac_flags |= VAR_5;
 VAR_14->rf_base_tssi = FUNC_4(VAR_11, 0x29);
 FUNC_2(VAR_12, VAR_2 | VAR_1 | VAR_3,
  "base tssi %d\n", VAR_14->rf_base_tssi);

 if (FUNC_8(VAR_14->rf_base_tssi - VAR_14->rf_idle_tssi) >= 20) {
  FUNC_13(VAR_12->sc_dev, "base tssi measure failed\n");
  VAR_11->mac_flags |= VAR_4;
 }

 if (VAR_16)
  FUNC_11(VAR_11, &VAR_15);
 else
  FUNC_6(VAR_11, 0x76, 0x84);

 FUNC_12(VAR_11);
}
