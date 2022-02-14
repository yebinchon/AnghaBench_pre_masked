
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection_loss; int beacon_connection_loss_work; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; scalar_t__ quiescing; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 =
  (struct ieee80211_sub_if_data *) VAR_0;
 struct ieee80211_local *VAR_2 = VAR_1->local;

 if (VAR_2->quiescing)
  return;

 VAR_1->u.mgd.connection_loss = 0;
 FUNC_0(&VAR_1->local->hw,
        &VAR_1->u.mgd.beacon_connection_loss_work);
}
