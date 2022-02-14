
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct station_parameters {int sta_flags_mask; int sta_flags_set; int sta_modify_mask; scalar_t__ listen_interval; int* supported_rates; int supported_rates_len; int plink_state; int plink_action; scalar_t__ local_pm; int vht_capa; int ht_capa; scalar_t__ aid; int max_sp; int uapsd_queues; } ;
struct TYPE_11__ {int wme; int* supp_rates; scalar_t__ aid; int max_sp; int uapsd_queues; } ;
struct sta_info {scalar_t__ listen_interval; int const plink_state; TYPE_4__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_3__* bitrates; } ;
struct TYPE_12__ {scalar_t__ power_mode; } ;
struct TYPE_13__ {TYPE_5__ mshcfg; } ;
struct TYPE_14__ {TYPE_6__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_7__ u; int vif; } ;
struct TYPE_9__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_10__ {int bitrate; } ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct sta_info*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,struct sta_info*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct sta_info*,scalar_t__) ;
 int FUNC_7 (struct sta_info*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,struct sta_info*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct sta_info*) ;
 int FUNC_11 (struct ieee80211_sub_if_data*) ;
 int FUNC_12 (struct ieee80211_sub_if_data*) ;
 int FUNC_13 (struct sta_info*) ;
 int FUNC_14 (struct sta_info*,int ) ;
 int FUNC_15 (struct ieee80211_local*,struct sta_info*,int,int) ;
 scalar_t__ FUNC_16 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_17(struct ieee80211_local *VAR_13,
    struct sta_info *VAR_14,
    struct station_parameters *VAR_15)
{
 int VAR_16 = 0;
 u32 VAR_17;
 int VAR_18, VAR_19;
 struct ieee80211_supported_band *VAR_20;
 struct ieee80211_sub_if_data *VAR_21 = VAR_14->sdata;
 enum ieee80211_band VAR_22 = FUNC_3(VAR_21);
 u32 VAR_23, VAR_24;

 VAR_20 = VAR_13->hw.wiphy->bands[VAR_22];

 VAR_23 = VAR_15->sta_flags_mask;
 VAR_24 = VAR_15->sta_flags_set;

 if (FUNC_9(&VAR_21->vif)) {




  if (VAR_23 & FUNC_0(VAR_1))
   VAR_23 |= FUNC_0(VAR_0);
  if (VAR_24 & FUNC_0(VAR_1))
   VAR_24 |= FUNC_0(VAR_0);
 } else if (FUNC_16(VAR_14, VAR_11)) {





  if (VAR_24 & FUNC_0(VAR_2)) {
   VAR_24 |= FUNC_0(VAR_1) |
          FUNC_0(VAR_0);
   VAR_23 |= FUNC_0(VAR_1) |
    FUNC_0(VAR_0);
  }
 }

 VAR_16 = FUNC_15(VAR_13, VAR_14, VAR_23, VAR_24);
 if (VAR_16)
  return VAR_16;

 if (VAR_23 & FUNC_0(VAR_4)) {
  if (VAR_24 & FUNC_0(VAR_4))
   FUNC_14(VAR_14, VAR_10);
  else
   FUNC_1(VAR_14, VAR_10);
 }

 if (VAR_23 & FUNC_0(VAR_6)) {
  if (VAR_24 & FUNC_0(VAR_6)) {
   FUNC_14(VAR_14, VAR_12);
   VAR_14->sta.wme = 1;
  } else {
   FUNC_1(VAR_14, VAR_12);
   VAR_14->sta.wme = 0;
  }
 }

 if (VAR_23 & FUNC_0(VAR_3)) {
  if (VAR_24 & FUNC_0(VAR_3))
   FUNC_14(VAR_14, VAR_9);
  else
   FUNC_1(VAR_14, VAR_9);
 }

 if (VAR_23 & FUNC_0(VAR_5)) {
  if (VAR_24 & FUNC_0(VAR_5))
   FUNC_14(VAR_14, VAR_11);
  else
   FUNC_1(VAR_14, VAR_11);
 }

 if (VAR_15->sta_modify_mask & VAR_8) {
  VAR_14->sta.uapsd_queues = VAR_15->uapsd_queues;
  VAR_14->sta.max_sp = VAR_15->max_sp;
 }





 if (VAR_15->aid)
  VAR_14->sta.aid = VAR_15->aid;
 if (VAR_15->listen_interval >= 0)
  VAR_14->listen_interval = VAR_15->listen_interval;

 if (VAR_15->supported_rates) {
  VAR_17 = 0;

  for (VAR_18 = 0; VAR_18 < VAR_15->supported_rates_len; VAR_18++) {
   int VAR_25 = (VAR_15->supported_rates[VAR_18] & 0x7f) * 5;
   for (VAR_19 = 0; VAR_19 < VAR_20->n_bitrates; VAR_19++) {
    if (VAR_20->bitrates[VAR_19].bitrate == VAR_25)
     VAR_17 |= FUNC_0(VAR_19);
   }
  }
  VAR_14->sta.supp_rates[VAR_22] = VAR_17;
 }

 if (VAR_15->ht_capa)
  FUNC_4(VAR_21, VAR_20,
        VAR_15->ht_capa, VAR_14);

 if (VAR_15->vht_capa)
  FUNC_8(VAR_21, VAR_20,
          VAR_15->vht_capa, VAR_14);

 if (FUNC_9(&VAR_21->vif)) {
 }

 return 0;
}
