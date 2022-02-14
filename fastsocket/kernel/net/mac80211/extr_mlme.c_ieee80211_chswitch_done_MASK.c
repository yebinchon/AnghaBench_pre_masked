
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct ieee80211_if_managed {int chswitch_work; int csa_connection_drop_work; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; TYPE_1__ u; } ;
struct TYPE_4__ {int hw; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 struct ieee80211_sub_if_data* FUNC_3 (struct ieee80211_vif*) ;

void FUNC_4(struct ieee80211_vif *VAR_0, bool VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = FUNC_3(VAR_0);
 struct ieee80211_if_managed *VAR_3 = &VAR_2->u.mgd;

 FUNC_2(VAR_2, VAR_1);
 if (!VAR_1) {
  FUNC_1(VAR_2,
      "driver channel switch failed, disconnecting\n");
  FUNC_0(&VAR_2->local->hw,
         &VAR_3->csa_connection_drop_work);
 } else {
  FUNC_0(&VAR_2->local->hw, &VAR_3->chswitch_work);
 }
}
