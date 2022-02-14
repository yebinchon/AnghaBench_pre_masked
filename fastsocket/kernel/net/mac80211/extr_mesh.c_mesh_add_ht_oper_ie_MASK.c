
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sta_ht_cap {int ht_supported; } ;
struct ieee80211_supported_band {struct ieee80211_sta_ht_cap ht_cap; } ;
struct TYPE_9__ {int ht_operation_mode; int chandef; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; struct ieee80211_local* local; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_channel {size_t band; } ;
struct TYPE_6__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_1__ def; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ieee80211_sta_ht_cap*,int *,int ) ;
 struct ieee80211_chanctx_conf* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

int FUNC_8(struct ieee80211_sub_if_data *VAR_3,
   struct sk_buff *VAR_4)
{
 struct ieee80211_local *VAR_5 = VAR_3->local;
 struct ieee80211_chanctx_conf *VAR_6;
 struct ieee80211_channel *VAR_7;
 enum nl80211_channel_type VAR_8 =
  FUNC_1(&VAR_3->vif.bss_conf.chandef);
 struct ieee80211_supported_band *VAR_9;
 struct ieee80211_sta_ht_cap *VAR_10;
 u8 *VAR_11;

 FUNC_4();
 VAR_6 = FUNC_3(VAR_3->vif.chanctx_conf);
 if (FUNC_0(!VAR_6)) {
  FUNC_5();
  return -VAR_0;
 }
 VAR_7 = VAR_6->def.chan;
 FUNC_5();

 VAR_9 = VAR_5->hw.wiphy->bands[VAR_7->band];
 VAR_10 = &VAR_9->ht_cap;

 if (!VAR_10->ht_supported || VAR_8 == VAR_2)
  return 0;

 if (FUNC_7(VAR_4) < 2 + sizeof(struct ieee80211_ht_operation))
  return -VAR_1;

 VAR_11 = FUNC_6(VAR_4, 2 + sizeof(struct ieee80211_ht_operation));
 FUNC_2(VAR_11, VAR_10, &VAR_3->vif.bss_conf.chandef,
       VAR_3->vif.bss_conf.ht_operation_mode);

 return 0;
}
