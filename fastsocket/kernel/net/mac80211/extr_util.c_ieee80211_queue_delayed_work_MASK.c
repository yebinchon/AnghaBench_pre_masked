
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int workqueue; } ;
struct ieee80211_hw {int dummy; } ;
struct delayed_work {int dummy; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (int ,struct delayed_work*,unsigned long) ;

void FUNC_3(struct ieee80211_hw *VAR_0,
      struct delayed_work *VAR_1,
      unsigned long VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_3))
  return;

 FUNC_2(VAR_3->workqueue, VAR_1, VAR_2);
}
