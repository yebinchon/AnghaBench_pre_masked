
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct ieee80211_local {int workqueue; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (int ,struct work_struct*) ;

void FUNC_3(struct ieee80211_hw *VAR_0, struct work_struct *VAR_1)
{
 struct ieee80211_local *VAR_2 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_2))
  return;

 FUNC_2(VAR_2->workqueue, VAR_1);
}
