
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct bwi_softc {scalar_t__ sc_bbp_id; int sc_bbp_rev; int sc_dev; } ;
struct bwi_rf {int rf_ctrl_adj; int rf_rev; int rf_ant_mode; int rf_curchan; void* rf_manu; void* rf_type; void* rf_lo_update; void* rf_calc_noise; void* rf_calc_rssi; int rf_set_nrssi_thr; int rf_calc_nrssi_slope; void* rf_off; void* rf_on; void* rf_ctrl_rd; } ;
struct bwi_phy {int phy_mode; int phy_rev; } ;
struct bwi_mac {int mac_rev; struct bwi_rf mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;



 void* FUNC_2 (int,int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_3 (int ,char*,...) ;

int
FUNC_4(struct bwi_mac *VAR_34)
{
 struct bwi_softc *VAR_35 = VAR_34->mac_sc;
 struct bwi_phy *VAR_36 = &VAR_34->mac_phy;
 struct bwi_rf *VAR_37 = &VAR_34->mac_rf;
 uint16_t VAR_38, VAR_39;
 uint8_t VAR_40;




 if (VAR_35->sc_bbp_id == VAR_1) {



  VAR_39 = VAR_11;
  VAR_38 = VAR_12;
  if (VAR_35->sc_bbp_rev == 0)
   VAR_40 = 3;
  else if (VAR_35->sc_bbp_rev == 1)
   VAR_40 = 4;
  else
   VAR_40 = 5;
 } else {
  uint32_t VAR_41;

  FUNC_1(VAR_35, VAR_5, VAR_8);
  VAR_41 = FUNC_0(VAR_35, VAR_9);
  VAR_41 <<= 16;

  FUNC_1(VAR_35, VAR_5, VAR_8);
  VAR_41 |= FUNC_0(VAR_35, VAR_10);

  VAR_39 = FUNC_2(VAR_41, VAR_2);
  VAR_38 = FUNC_2(VAR_41, VAR_4);
  VAR_40 = FUNC_2(VAR_41, VAR_3);
 }
 FUNC_3(VAR_35->sc_dev, "RF: manu 0x%03x, type 0x%04x, rev %u\n",
        VAR_39, VAR_38, VAR_40);




 VAR_37->rf_ctrl_rd = 0;
 VAR_37->rf_ctrl_adj = 0;
 switch (VAR_36->phy_mode) {
 case 130:
  if (VAR_39 != VAR_11 ||
      VAR_38 != VAR_14 ||
      VAR_40 != 1) {
   FUNC_3(VAR_35->sc_dev, "only BCM2060 rev 1 RF "
          "is supported for 11A PHY\n");
   return VAR_15;
  }
  VAR_37->rf_ctrl_rd = VAR_6;
  VAR_37->rf_on = VAR_30;
  VAR_37->rf_off = VAR_27;
  VAR_37->rf_calc_rssi = VAR_24;
  VAR_37->rf_calc_noise = VAR_19;
  break;
 case 129:
  if (VAR_38 == VAR_12) {
   VAR_37->rf_ctrl_rd = VAR_7;
   VAR_37->rf_calc_rssi = VAR_22;
   VAR_37->rf_calc_noise = VAR_17;
  } else if (VAR_38 == VAR_13) {
   VAR_37->rf_ctrl_adj = 1;
   VAR_37->rf_calc_rssi = VAR_23;
   VAR_37->rf_calc_noise = VAR_18;
  } else {
   FUNC_3(VAR_35->sc_dev, "only BCM2050/BCM2053 RF "
          "is supported for 11B PHY\n");
   return VAR_15;
  }
  VAR_37->rf_on = VAR_31;
  VAR_37->rf_off = VAR_28;
  VAR_37->rf_calc_nrssi_slope = VAR_20;
  VAR_37->rf_set_nrssi_thr = VAR_32;
  if (VAR_36->phy_rev == 6)
   VAR_37->rf_lo_update = VAR_26;
  else
   VAR_37->rf_lo_update = VAR_25;
  break;
 case 128:
  if (VAR_38 != VAR_12) {
   FUNC_3(VAR_35->sc_dev, "only BCM2050 RF "
          "is supported for 11G PHY\n");
   return VAR_15;
  }
  VAR_37->rf_ctrl_rd = VAR_7;
  VAR_37->rf_on = VAR_31;
  if (VAR_34->mac_rev >= 5)
   VAR_37->rf_off = VAR_29;
  else
   VAR_37->rf_off = VAR_28;
  VAR_37->rf_calc_nrssi_slope = VAR_21;
  VAR_37->rf_set_nrssi_thr = VAR_33;
  VAR_37->rf_calc_rssi = VAR_22;
  VAR_37->rf_calc_noise = VAR_17;
  VAR_37->rf_lo_update = VAR_26;
  break;
 default:
  FUNC_3(VAR_35->sc_dev, "unsupported PHY mode\n");
  return VAR_15;
 }

 VAR_37->rf_type = VAR_38;
 VAR_37->rf_rev = VAR_40;
 VAR_37->rf_manu = VAR_39;
 VAR_37->rf_curchan = VAR_16;
 VAR_37->rf_ant_mode = VAR_0;
 return 0;
}
