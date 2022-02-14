
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sub_if_data {int vif; struct ieee80211_local* local; } ;
struct ieee80211_mgmt {int bssid; int da; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_channel {int band; int center_freq; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_local*,int ,int ,scalar_t__ const*,size_t,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int *,int *,scalar_t__ const*,size_t,int) ;
 int FUNC_4 (int ,scalar_t__*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

struct sk_buff *FUNC_8(struct ieee80211_sub_if_data *VAR_2,
       u8 *VAR_3, u32 VAR_4,
       struct ieee80211_channel *VAR_5,
       const u8 *VAR_6, size_t VAR_7,
       const u8 *VAR_8, size_t VAR_9,
       bool VAR_10)
{
 struct ieee80211_local *VAR_11 = VAR_2->local;
 struct sk_buff *VAR_12;
 struct ieee80211_mgmt *VAR_13;
 u8 VAR_14;
 int VAR_15;






 if (VAR_10)
  VAR_14 = 0;
 else
  VAR_14 = FUNC_2(VAR_5->center_freq);

 VAR_12 = FUNC_3(&VAR_11->hw, &VAR_2->vif,
         VAR_6, VAR_7, 100 + VAR_9);
 if (!VAR_12)
  return ((void*)0);

 VAR_15 = FUNC_1(VAR_11, FUNC_6(VAR_12),
        FUNC_7(VAR_12),
        VAR_8, VAR_9, VAR_5->band,
        VAR_4, VAR_14);
 FUNC_5(VAR_12, VAR_15);

 if (VAR_3) {
  VAR_13 = (struct ieee80211_mgmt *) VAR_12->data;
  FUNC_4(VAR_13->da, VAR_3, VAR_0);
  FUNC_4(VAR_13->bssid, VAR_3, VAR_0);
 }

 FUNC_0(VAR_12)->flags |= VAR_1;

 return VAR_12;
}
