
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int work; int tid_rx_stop_requested; } ;
struct sta_info {TYPE_2__ ampdu_mlme; TYPE_1__* local; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_3__ {int hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,int const*) ;
 struct ieee80211_sub_if_data* FUNC_6 (struct ieee80211_vif*) ;

void FUNC_7(struct ieee80211_vif *VAR_1, u16 VAR_2,
      const u8 *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_6(VAR_1);
 struct sta_info *VAR_5;
 int VAR_6;

 FUNC_2();
 VAR_5 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_5) {
  FUNC_3();
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_2 & FUNC_0(VAR_6))
   FUNC_4(VAR_6, VAR_5->ampdu_mlme.tid_rx_stop_requested);

 FUNC_1(&VAR_5->local->hw, &VAR_5->ampdu_mlme.work);
 FUNC_3();
}
