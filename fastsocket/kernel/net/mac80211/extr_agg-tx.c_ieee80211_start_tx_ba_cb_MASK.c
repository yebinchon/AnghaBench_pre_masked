
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tid_ampdu_tx {int state; } ;
struct TYPE_2__ {int mtx; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*,...) ;
 int FUNC_2 (struct ieee80211_local*,struct sta_info*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tid_ampdu_tx* FUNC_5 (struct sta_info*,int ) ;
 struct sta_info* FUNC_6 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,int *,int ) ;
 struct ieee80211_sub_if_data* FUNC_10 (struct ieee80211_vif*) ;

void FUNC_11(struct ieee80211_vif *VAR_3, u8 *VAR_4, u16 VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_10(VAR_3);
 struct ieee80211_local *VAR_7 = VAR_6->local;
 struct sta_info *VAR_8;
 struct tid_ampdu_tx *VAR_9;

 FUNC_9(VAR_6, VAR_4, VAR_5);

 if (VAR_5 >= VAR_2) {
  FUNC_1(VAR_6, "Bad TID value: tid = %d (>= %d)\n",
         VAR_5, VAR_2);
  return;
 }

 FUNC_3(&VAR_7->sta_mtx);
 VAR_8 = FUNC_6(VAR_6, VAR_4);
 if (!VAR_8) {
  FUNC_4(&VAR_7->sta_mtx);
  FUNC_1(VAR_6, "Could not find station: %pM\n", VAR_4);
  return;
 }

 FUNC_3(&VAR_8->ampdu_mlme.mtx);
 VAR_9 = FUNC_5(VAR_8, VAR_5);

 if (FUNC_0(!VAR_9)) {
  FUNC_1(VAR_6, "addBA was not requested!\n");
  goto unlock;
 }

 if (FUNC_0(FUNC_7(VAR_0, &VAR_9->state)))
  goto unlock;

 if (FUNC_8(VAR_1, &VAR_9->state))
  FUNC_2(VAR_7, VAR_8, VAR_5);

 unlock:
 FUNC_4(&VAR_8->ampdu_mlme.mtx);
 FUNC_4(&VAR_7->sta_mtx);
}
