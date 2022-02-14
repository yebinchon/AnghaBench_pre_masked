
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct net_device {int dummy; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_3__* bitrates; } ;
struct TYPE_10__ {int oppps_ctwindow; } ;
struct TYPE_11__ {scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int use_short_slot; TYPE_4__ p2p_noa_attr; scalar_t__ ht_operation_mode; int basic_rates; } ;
struct TYPE_12__ {TYPE_5__ bss_conf; } ;
struct TYPE_7__ {int beacon; } ;
struct TYPE_8__ {TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_6__ vif; int flags; TYPE_2__ u; } ;
struct bss_parameters {scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int use_short_slot_time; int* basic_rates; int basic_rates_len; scalar_t__ ap_isolate; scalar_t__ ht_opmode; int p2p_ctwindow; scalar_t__ p2p_opp_ps; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_9__ {int bitrate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_sub_if_data* FUNC_1 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_11,
    struct net_device *VAR_12,
    struct bss_parameters *VAR_13)
{
 struct ieee80211_sub_if_data *VAR_14 = FUNC_1(VAR_12);
 enum ieee80211_band VAR_15;
 u32 VAR_16 = 0;

 if (!FUNC_4(VAR_14->u.ap.beacon))
  return -VAR_6;

 VAR_15 = FUNC_3(VAR_14);

 if (VAR_13->use_cts_prot >= 0) {
  VAR_14->vif.bss_conf.use_cts_prot = VAR_13->use_cts_prot;
  VAR_16 |= VAR_1;
 }
 if (VAR_13->use_short_preamble >= 0) {
  VAR_14->vif.bss_conf.use_short_preamble =
   VAR_13->use_short_preamble;
  VAR_16 |= VAR_2;
 }

 if (!VAR_14->vif.bss_conf.use_short_slot &&
     VAR_15 == VAR_7) {
  VAR_14->vif.bss_conf.use_short_slot = 1;
  VAR_16 |= VAR_3;
 }

 if (VAR_13->use_short_slot_time >= 0) {
  VAR_14->vif.bss_conf.use_short_slot =
   VAR_13->use_short_slot_time;
  VAR_16 |= VAR_3;
 }

 if (VAR_13->basic_rates) {
  int VAR_17, VAR_18;
  u32 VAR_19 = 0;
  struct ieee80211_supported_band *VAR_20 = VAR_11->bands[VAR_15];

  for (VAR_17 = 0; VAR_17 < VAR_13->basic_rates_len; VAR_17++) {
   int VAR_21 = (VAR_13->basic_rates[VAR_17] & 0x7f) * 5;
   for (VAR_18 = 0; VAR_18 < VAR_20->n_bitrates; VAR_18++) {
    if (VAR_20->bitrates[VAR_18].bitrate == VAR_21)
     VAR_19 |= FUNC_0(VAR_18);
   }
  }
  VAR_14->vif.bss_conf.basic_rates = VAR_19;
  VAR_16 |= VAR_0;
 }

 if (VAR_13->ap_isolate >= 0) {
  if (VAR_13->ap_isolate)
   VAR_14->flags |= VAR_10;
  else
   VAR_14->flags &= ~VAR_10;
 }

 if (VAR_13->ht_opmode >= 0) {
  VAR_14->vif.bss_conf.ht_operation_mode =
   (u16) VAR_13->ht_opmode;
  VAR_16 |= VAR_4;
 }

 if (VAR_13->p2p_ctwindow >= 0) {
  VAR_14->vif.bss_conf.p2p_noa_attr.oppps_ctwindow &=
     ~VAR_8;
  VAR_14->vif.bss_conf.p2p_noa_attr.oppps_ctwindow |=
   VAR_13->p2p_ctwindow & VAR_8;
  VAR_16 |= VAR_5;
 }

 if (VAR_13->p2p_opp_ps > 0) {
  VAR_14->vif.bss_conf.p2p_noa_attr.oppps_ctwindow |=
     VAR_9;
  VAR_16 |= VAR_5;
 } else if (VAR_13->p2p_opp_ps == 0) {
  VAR_14->vif.bss_conf.p2p_noa_attr.oppps_ctwindow &=
     ~VAR_9;
  VAR_16 |= VAR_5;
 }

 FUNC_2(VAR_14, VAR_16);

 return 0;
}
