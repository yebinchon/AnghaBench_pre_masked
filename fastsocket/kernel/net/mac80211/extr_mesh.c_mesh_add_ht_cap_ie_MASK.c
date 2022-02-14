
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


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_12__ {int cap; int ht_supported; } ;
struct ieee80211_supported_band {TYPE_6__ ht_cap; } ;
struct TYPE_9__ {scalar_t__ width; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_11__ {TYPE_4__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; struct ieee80211_local* local; } ;
struct TYPE_8__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct ieee80211_ht_cap {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,TYPE_6__*,int ) ;
 int * FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct ieee80211_sub_if_data *VAR_2,
         struct sk_buff *VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_2->local;
 enum ieee80211_band VAR_5 = FUNC_0(VAR_2);
 struct ieee80211_supported_band *VAR_6;
 u8 *VAR_7;

 VAR_6 = VAR_4->hw.wiphy->bands[VAR_5];
 if (!VAR_6->ht_cap.ht_supported ||
     VAR_2->vif.bss_conf.chandef.width == VAR_1)
  return 0;

 if (FUNC_3(VAR_3) < 2 + sizeof(struct ieee80211_ht_cap))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, 2 + sizeof(struct ieee80211_ht_cap));
 FUNC_1(VAR_7, &VAR_6->ht_cap, VAR_6->ht_cap.cap);

 return 0;
}
