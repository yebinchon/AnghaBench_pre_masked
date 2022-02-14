
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_local*,struct sk_buff*,int) ;

void FUNC_3(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1)
{
 struct ieee80211_local *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_2, VAR_1, 1);
 FUNC_0(VAR_1);
}
