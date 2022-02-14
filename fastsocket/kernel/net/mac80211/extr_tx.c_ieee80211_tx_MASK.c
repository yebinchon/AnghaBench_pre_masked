
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ieee80211_tx_info {int band; int flags; int hw_queue; } ;
struct ieee80211_tx_data {int sta; int skbs; } ;
struct TYPE_3__ {int * hw_queue; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_4__ {int flags; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef scalar_t__ ieee80211_tx_result ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ieee80211_local*,int *,int,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_2__*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_tx_data*,struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_tx_data*) ;
 size_t FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_sub_if_data *VAR_4,
    struct sk_buff *VAR_5, bool VAR_6,
    enum ieee80211_band VAR_7)
{
 struct ieee80211_local *VAR_8 = VAR_4->local;
 struct ieee80211_tx_data VAR_9;
 ieee80211_tx_result VAR_10;
 struct ieee80211_tx_info *VAR_11 = FUNC_0(VAR_5);
 bool VAR_12 = 1;
 int VAR_13;

 if (FUNC_7(VAR_5->len < 10)) {
  FUNC_2(VAR_5);
  return 1;
 }


 VAR_13 = VAR_5->len;
 VAR_10 = FUNC_4(VAR_4, &VAR_9, VAR_5);

 if (FUNC_7(VAR_10 == VAR_2)) {
  FUNC_3(&VAR_8->hw, VAR_5);
  return 1;
 } else if (FUNC_7(VAR_10 == VAR_3)) {
  return 1;
 }

 VAR_11->band = VAR_7;


 if (!(VAR_11->flags & VAR_1) ||
     !(VAR_8->hw.flags & VAR_0))
  VAR_11->hw_queue =
   VAR_4->vif.hw_queue[FUNC_6(VAR_5)];

 if (!FUNC_5(&VAR_9))
  VAR_12 = FUNC_1(VAR_8, &VAR_9.skbs, VAR_13,
     VAR_9.sta, VAR_6);

 return VAR_12;
}
