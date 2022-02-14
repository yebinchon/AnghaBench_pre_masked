
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int hw_roc_start; int hw_roc_start_time; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct ieee80211_local*) ;

void FUNC_3(struct ieee80211_hw *VAR_1)
{
 struct ieee80211_local *VAR_2 = FUNC_0(VAR_1);

 VAR_2->hw_roc_start_time = VAR_0;

 FUNC_2(VAR_2);

 FUNC_1(VAR_1, &VAR_2->hw_roc_start);
}
