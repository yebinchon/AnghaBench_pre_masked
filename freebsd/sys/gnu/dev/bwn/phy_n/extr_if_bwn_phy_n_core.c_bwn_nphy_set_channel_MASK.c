
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ieee80211_channel {int ic_ieee; } ;
struct bwn_phy_n_sfo_cfg {int dummy; } ;
struct bwn_phy {int rev; scalar_t__ channel_type; int rf_rev; int channel; } ;
struct bwn_nphy_chantabent_rev7_2g {struct bwn_phy_n_sfo_cfg phy_regs; } ;
struct bwn_nphy_chantabent_rev7 {struct bwn_phy_n_sfo_cfg phy_regs; } ;
struct bwn_nphy_channeltab_entry_rev3 {struct bwn_phy_n_sfo_cfg const phy_regs; } ;
struct bwn_nphy_channeltab_entry_rev2 {struct bwn_phy_n_sfo_cfg const phy_regs; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
typedef scalar_t__ bwn_chan_type_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bwn_mac*,int,int) ;
 int FUNC_1 (struct bwn_mac*,int,int) ;
 int FUNC_2 (struct bwn_mac*,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct bwn_mac*,struct ieee80211_channel*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct bwn_mac*,struct ieee80211_channel*) ;
 int FUNC_6 (struct bwn_mac*,struct bwn_phy_n_sfo_cfg const*,struct ieee80211_channel*) ;
 struct bwn_nphy_channeltab_entry_rev2* FUNC_7 (struct bwn_mac*,int ) ;
 struct bwn_nphy_channeltab_entry_rev3* FUNC_8 (struct bwn_mac*,int ) ;
 int FUNC_9 (struct bwn_mac*,struct bwn_nphy_channeltab_entry_rev2 const*) ;
 int FUNC_10 (struct bwn_mac*,struct bwn_nphy_channeltab_entry_rev3 const*) ;
 int FUNC_11 (struct bwn_mac*,struct bwn_nphy_chantabent_rev7 const*,struct bwn_nphy_chantabent_rev7_2g const*) ;
 int FUNC_12 (struct bwn_mac*,int ,struct bwn_nphy_chantabent_rev7 const**,struct bwn_nphy_chantabent_rev7_2g const**) ;

__attribute__((used)) static int FUNC_13(struct bwn_mac *VAR_10,
    struct ieee80211_channel *VAR_11,
    bwn_chan_type_t VAR_12)
{
 struct bwn_phy *VAR_13 = &VAR_10->mac_phy;

 const struct bwn_nphy_channeltab_entry_rev2 *VAR_14 = ((void*)0);
 const struct bwn_nphy_channeltab_entry_rev3 *VAR_15 = ((void*)0);
 const struct bwn_nphy_chantabent_rev7 *VAR_16 = ((void*)0);
 const struct bwn_nphy_chantabent_rev7_2g *VAR_17 = ((void*)0);

 int VAR_18;
 uint8_t VAR_19;

 if (VAR_13->rev >= 19) {
  return -VAR_7;

 } else if (VAR_13->rev >= 7) {
  FUNC_12(VAR_10, FUNC_5(VAR_10, VAR_11),
       &VAR_16, &VAR_17);
  if (!VAR_16 && !VAR_17)
   return -VAR_7;
 } else if (VAR_13->rev >= 3) {
  VAR_15 = FUNC_8(VAR_10,
      FUNC_5(VAR_10, VAR_11));
  if (!VAR_15)
   return -VAR_7;
 } else {
  VAR_14 = FUNC_7(VAR_10,
      VAR_11->ic_ieee);
  if (!VAR_14)
   return -VAR_7;
 }
 if (VAR_12 == VAR_3) {
  FUNC_1(VAR_10, VAR_4, VAR_5);
  if (VAR_13->rev >= 7)
   FUNC_1(VAR_10, 0x310, 0x8000);
 } else if (VAR_12 == VAR_2) {
  FUNC_0(VAR_10, VAR_4, ~VAR_5);
  if (VAR_13->rev >= 7)
   FUNC_0(VAR_10, 0x310, (uint16_t)~0x8000);
 }

 if (VAR_13->rev >= 19) {

  VAR_18 = VAR_6;
 } else if (VAR_13->rev >= 7) {
  const struct bwn_phy_n_sfo_cfg *VAR_20 = VAR_16 ?
   &(VAR_16->phy_regs) : &(VAR_17->phy_regs);

  if (VAR_13->rf_rev <= 4 || VAR_13->rf_rev == 6) {
   VAR_19 = (FUNC_3(VAR_10, VAR_11) == VAR_1) ? 2 : 0;
   FUNC_2(VAR_10, VAR_8, ~2, VAR_19);
   FUNC_2(VAR_10, VAR_9, ~2, VAR_19);
  }

  FUNC_11(VAR_10, VAR_16, VAR_17);
  VAR_18 = FUNC_6(VAR_10, VAR_20, VAR_11);
 } else if (VAR_13->rev >= 3) {
  VAR_19 = (FUNC_3(VAR_10, VAR_11) == VAR_1) ? 4 : 0;
  FUNC_2(VAR_10, 0x08, 0xFFFB, VAR_19);
  FUNC_10(VAR_10, VAR_15);
  VAR_18 = FUNC_6(VAR_10, &(VAR_15->phy_regs),
      VAR_11);
 } else {
  VAR_19 = (FUNC_3(VAR_10, VAR_11) == VAR_1) ? 0x0020 : 0x0050;
  FUNC_2(VAR_10, VAR_0, 0xFF8F, VAR_19);
  FUNC_9(VAR_10, VAR_14);
  VAR_18 = FUNC_6(VAR_10, &(VAR_14->phy_regs),
      VAR_11);
 }

 return (VAR_18);
}
