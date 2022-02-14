
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tid_ampdu_tx {scalar_t__ stop_initiator; scalar_t__ tx_stop; int state; } ;
struct TYPE_4__ {int mtx; } ;
struct TYPE_3__ {scalar_t__* addr; } ;
struct sta_info {TYPE_2__ ampdu_mlme; int lock; int sdata; TYPE_1__ sta; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,char*,scalar_t__*,...) ;
 int FUNC_1 (struct sta_info*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tid_ampdu_tx* FUNC_5 (struct sta_info*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sta_info* FUNC_8 (struct ieee80211_sub_if_data*,scalar_t__*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct ieee80211_sub_if_data*,scalar_t__*,scalar_t__) ;
 struct ieee80211_sub_if_data* FUNC_11 (struct ieee80211_vif*) ;

void FUNC_12(struct ieee80211_vif *VAR_4, u8 *VAR_5, u8 VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_11(VAR_4);
 struct ieee80211_local *VAR_8 = VAR_7->local;
 struct sta_info *VAR_9;
 struct tid_ampdu_tx *VAR_10;

 FUNC_10(VAR_7, VAR_5, VAR_6);

 if (VAR_6 >= VAR_1) {
  FUNC_0(VAR_7, "Bad TID value: tid = %d (>= %d)\n",
         &VAR_6, VAR_1);
  return;
 }

 FUNC_0(VAR_7, "Stopping Tx BA session for %pM tid %d\n", VAR_5, VAR_6);

 FUNC_3(&VAR_8->sta_mtx);

 VAR_9 = FUNC_8(VAR_7, VAR_5);
 if (!VAR_9) {
  FUNC_0(VAR_7, "Could not find station: %pM\n", VAR_5);
  goto unlock;
 }

 FUNC_3(&VAR_9->ampdu_mlme.mtx);
 FUNC_6(&VAR_9->lock);
 VAR_10 = FUNC_5(VAR_9, VAR_6);

 if (!VAR_10 || !FUNC_9(VAR_0, &VAR_10->state)) {
  FUNC_0(VAR_7,
         "unexpected callback to A-MPDU stop for %pM tid %d\n",
         VAR_9->sta.addr, VAR_6);
  goto unlock_sta;
 }

 if (VAR_10->stop_initiator == VAR_2 && VAR_10->tx_stop)
  FUNC_2(VAR_9->sdata, VAR_5, VAR_6,
   VAR_2, VAR_3);

 FUNC_1(VAR_9, VAR_6);

 unlock_sta:
 FUNC_7(&VAR_9->lock);
 FUNC_4(&VAR_9->ampdu_mlme.mtx);
 unlock:
 FUNC_4(&VAR_8->sta_mtx);
}
