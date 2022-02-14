
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


typedef int u8 ;
typedef void* u32 ;
struct TYPE_10__ {void** supp_rates; } ;
struct sta_info {TYPE_3__ sta; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_13__ {int sync_dtim_count; int sync_device_ts; int sync_tsf; int beacon_int; void* basic_rates; } ;
struct TYPE_14__ {TYPE_6__ bss_conf; } ;
struct ieee80211_if_managed {int bssid; int assoc_data; int auth_data; } ;
struct TYPE_8__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_7__ vif; int flags; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_12__ {int flags; TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_5__ hw; } ;
struct ieee80211_bss {int device_ts_presp; int device_ts_beacon; int supp_rates_len; int supp_rates; } ;
struct cfg80211_bss_ies {int tsf; int len; int data; } ;
struct cfg80211_bss {int bssid; int proberesp_ies; int beacon_ies; int beacon_interval; TYPE_4__* channel; scalar_t__ priv; } ;
struct TYPE_11__ {size_t band; } ;
struct TYPE_9__ {struct ieee80211_supported_band** bands; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 int* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_6 (struct ieee80211_supported_band*,int ,int ,void**,void**,int*,int*,int*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct cfg80211_bss*) ;
 int FUNC_8 (int ,int ,int ) ;
 struct cfg80211_bss_ies* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct ieee80211_sub_if_data*,char*,...) ;
 struct sta_info* FUNC_13 (struct ieee80211_sub_if_data*,int ,int ) ;
 int FUNC_14 (struct ieee80211_local*,struct sta_info*) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_16 (struct sta_info*) ;
 int FUNC_17 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_18(struct ieee80211_sub_if_data *VAR_13,
         struct cfg80211_bss *VAR_14, bool VAR_15)
{
 struct ieee80211_local *VAR_16 = VAR_13->local;
 struct ieee80211_if_managed *VAR_17 = &VAR_13->u.mgd;
 struct ieee80211_bss *VAR_18 = (void *)VAR_14->priv;
 struct sta_info *VAR_19 = ((void*)0);
 bool VAR_20 = 0;
 int VAR_21;

 if (FUNC_1(!VAR_17->auth_data && !VAR_17->assoc_data))
  return -VAR_3;

 if (VAR_15) {
  FUNC_10();
  VAR_20 = FUNC_15(VAR_13, VAR_14->bssid);
  FUNC_11();
 }

 if (!VAR_20) {
  VAR_19 = FUNC_13(VAR_13, VAR_14->bssid, VAR_6);
  if (!VAR_19)
   return -VAR_4;
 }

 if (VAR_19) {
  u32 VAR_22 = 0, VAR_23 = 0;
  bool VAR_24;
  int VAR_25 = VAR_11, VAR_26 = -1;
  struct ieee80211_supported_band *VAR_27;
  const struct cfg80211_bss_ies *VAR_28;

  VAR_27 = VAR_16->hw.wiphy->bands[VAR_14->channel->band];

  VAR_21 = FUNC_7(VAR_13, VAR_14);
  if (VAR_21) {
   FUNC_14(VAR_16, VAR_19);
   return VAR_21;
  }

  FUNC_6(VAR_27, VAR_18->supp_rates,
        VAR_18->supp_rates_len,
        &VAR_22, &VAR_23,
        &VAR_24,
        &VAR_25, &VAR_26);
  if (!VAR_23 && VAR_26 >= 0) {
   FUNC_12(VAR_13,
       "No basic rates, using min rate instead\n");
   VAR_23 = FUNC_0(VAR_26);
  }

  VAR_19->sta.supp_rates[VAR_14->channel->band] = VAR_22;
  VAR_13->vif.bss_conf.basic_rates = VAR_23;


  if (VAR_14->channel->band == VAR_7 &&
      VAR_24)
   VAR_13->flags |= VAR_9;
  else
   VAR_13->flags &= ~VAR_9;

  FUNC_8(VAR_17->bssid, VAR_14->bssid, VAR_5);


  VAR_13->vif.bss_conf.beacon_int = VAR_14->beacon_interval;
  FUNC_10();
  VAR_28 = FUNC_9(VAR_14->beacon_ies);
  if (VAR_28) {
   const u8 *VAR_29;

   VAR_13->vif.bss_conf.sync_tsf = VAR_28->tsf;
   VAR_13->vif.bss_conf.sync_device_ts =
    VAR_18->device_ts_beacon;
   VAR_29 = FUNC_3(VAR_12,
        VAR_28->data, VAR_28->len);
   if (VAR_29 && VAR_29[1] >= 2)
    VAR_13->vif.bss_conf.sync_dtim_count = VAR_29[2];
   else
    VAR_13->vif.bss_conf.sync_dtim_count = 0;
  } else if (!(VAR_16->hw.flags &
     VAR_8)) {
   VAR_28 = FUNC_9(VAR_14->proberesp_ies);

   VAR_13->vif.bss_conf.sync_tsf = VAR_28->tsf;
   VAR_13->vif.bss_conf.sync_device_ts =
    VAR_18->device_ts_presp;
   VAR_13->vif.bss_conf.sync_dtim_count = 0;
  } else {
   VAR_13->vif.bss_conf.sync_tsf = 0;
   VAR_13->vif.bss_conf.sync_device_ts = 0;
   VAR_13->vif.bss_conf.sync_dtim_count = 0;
  }
  FUNC_11();


  FUNC_5(VAR_13,
   VAR_2 | VAR_0 |
   VAR_1);

  if (VAR_15)
   FUNC_17(VAR_19, VAR_10);

  VAR_21 = FUNC_16(VAR_19);
  VAR_19 = ((void*)0);
  if (VAR_21) {
   FUNC_12(VAR_13,
       "failed to insert STA entry for the AP (error %d)\n",
       VAR_21);
   return VAR_21;
  }
 } else
  FUNC_2(!FUNC_4(VAR_17->bssid, VAR_14->bssid));

 return 0;
}
