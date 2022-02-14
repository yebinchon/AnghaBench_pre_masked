
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_managed {int monitor_work; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_1__ u; } ;
struct ieee80211_local {int hw; scalar_t__ quiescing; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 =
  (struct ieee80211_sub_if_data *) VAR_0;
 struct ieee80211_if_managed *VAR_2 = &VAR_1->u.mgd;
 struct ieee80211_local *VAR_3 = VAR_1->local;

 if (VAR_3->quiescing)
  return;

 FUNC_0(&VAR_3->hw, &VAR_2->monitor_work);
}
