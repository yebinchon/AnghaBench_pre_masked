
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int dummy; } ;
struct ieee80211_hw {int wiphy; } ;


 int FUNC_0 (int ) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_local*) ;

void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct ieee80211_local *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);

 FUNC_0(VAR_0->wiphy);
}
