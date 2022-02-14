
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy_g {int pg_pga_gain; } ;
struct bwn_phy {int rev; scalar_t__ type; int rf_ver; int rf_rev; struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
struct bwn_lo_g_value {int phy_pgactl; int phy_cck2; int phy_syncctl; int phy_dacctl; int rf2; int phy_cck0; int phy_cck1; int phy_analogover; int phy_analogoverval; int phy_classctl; int phy_rfover; int phy_rfoverval; int phy_cck3; int phy_crs0; int phy_lomask; int phy_extg; int phy_dacctl_hwpctl; int phy_cck4; int phy_hpwr_tssictl; int old_channel; int reg1; int rf1; int rf0; int reg0; } ;


 int FUNC_0 (struct bwn_phy*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int FUNC_4 (struct bwn_mac*,int,int,int) ;
 int FUNC_5 (struct bwn_mac*,int,int ) ;
 int FUNC_6 (struct bwn_mac*,int,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct bwn_mac *VAR_13, struct bwn_lo_g_value *VAR_14)
{
 struct bwn_phy *VAR_15 = &VAR_13->mac_phy;
 struct bwn_phy_g *VAR_16 = &VAR_15->phy_g;
 uint16_t VAR_17;

 if (VAR_15->rev >= 2) {
  FUNC_3(VAR_13, VAR_9, 0xe300);
  VAR_17 = (VAR_16->pg_pga_gain << 8);
  FUNC_3(VAR_13, VAR_11, VAR_17 | 0xa0);
  FUNC_7(5);
  FUNC_3(VAR_13, VAR_11, VAR_17 | 0xa2);
  FUNC_7(2);
  FUNC_3(VAR_13, VAR_11, VAR_17 | 0xa3);
 } else {
  VAR_17 = (VAR_16->pg_pga_gain | 0xefa0);
  FUNC_3(VAR_13, VAR_9, VAR_17);
 }
 if (VAR_15->type == VAR_1) {
  if (VAR_15->rev >= 3)
   FUNC_3(VAR_13, FUNC_1(0x2e), 0xc078);
  else
   FUNC_3(VAR_13, FUNC_1(0x2e), 0x8078);
  if (VAR_15->rev >= 2)
   FUNC_3(VAR_13, FUNC_1(0x2f), 0x0202);
  else
   FUNC_3(VAR_13, FUNC_1(0x2f), 0x0101);
 }
 FUNC_6(VAR_13, 0x3f4, VAR_14->reg0);
 FUNC_3(VAR_13, VAR_9, VAR_14->phy_pgactl);
 FUNC_3(VAR_13, FUNC_1(0x2a), VAR_14->phy_cck2);
 FUNC_3(VAR_13, VAR_12, VAR_14->phy_syncctl);
 FUNC_3(VAR_13, VAR_6, VAR_14->phy_dacctl);
 FUNC_5(VAR_13, 0x43, VAR_14->rf0);
 FUNC_5(VAR_13, 0x7a, VAR_14->rf1);
 if (!FUNC_0(VAR_15)) {
  VAR_17 = VAR_14->rf2;
  FUNC_4(VAR_13, 0x52, 0xff0f, VAR_17);
 }
 FUNC_6(VAR_13, 0x3e2, VAR_14->reg1);
 if (VAR_15->type == VAR_0 &&
     VAR_15->rf_ver == 0x2050 && VAR_15->rf_rev <= 5) {
  FUNC_3(VAR_13, FUNC_1(0x30), VAR_14->phy_cck0);
  FUNC_3(VAR_13, FUNC_1(0x06), VAR_14->phy_cck1);
 }
 if (VAR_15->rev >= 2) {
  FUNC_3(VAR_13, VAR_2, VAR_14->phy_analogover);
  FUNC_3(VAR_13, VAR_3,
         VAR_14->phy_analogoverval);
  FUNC_3(VAR_13, VAR_4, VAR_14->phy_classctl);
  FUNC_3(VAR_13, VAR_10, VAR_14->phy_rfover);
  FUNC_3(VAR_13, VAR_11, VAR_14->phy_rfoverval);
  FUNC_3(VAR_13, FUNC_1(0x3e), VAR_14->phy_cck3);
  FUNC_3(VAR_13, VAR_5, VAR_14->phy_crs0);
 }
 if (FUNC_8(VAR_13)) {
  VAR_17 = (VAR_14->phy_lomask & 0xbfff);
  FUNC_3(VAR_13, VAR_8, VAR_17);
  FUNC_3(VAR_13, FUNC_2(0x01), VAR_14->phy_extg);
  FUNC_3(VAR_13, VAR_6, VAR_14->phy_dacctl_hwpctl);
  FUNC_3(VAR_13, FUNC_1(0x14), VAR_14->phy_cck4);
  FUNC_3(VAR_13, VAR_7, VAR_14->phy_hpwr_tssictl);
 }
 FUNC_9(VAR_13, VAR_14->old_channel, 1);
}
