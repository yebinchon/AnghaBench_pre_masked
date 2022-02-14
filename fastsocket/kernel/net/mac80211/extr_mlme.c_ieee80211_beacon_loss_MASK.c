
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct TYPE_5__ {int connection_loss; int beacon_connection_loss_work; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__* local; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {struct ieee80211_hw hw; } ;


 int FUNC_0 (struct ieee80211_hw*,int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_vif*) ;

void FUNC_3(struct ieee80211_vif *VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 = FUNC_2(VAR_0);
 struct ieee80211_hw *VAR_2 = &VAR_1->local->hw;

 FUNC_1(VAR_1);

 VAR_1->u.mgd.connection_loss = 0;
 FUNC_0(VAR_2, &VAR_1->u.mgd.beacon_connection_loss_work);
}
