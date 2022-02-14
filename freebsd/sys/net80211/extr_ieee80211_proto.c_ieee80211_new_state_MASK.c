
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int dummy; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211vap*,int,int) ;

int
FUNC_3(struct ieee80211vap *VAR_0,
 enum ieee80211_state VAR_1, int VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_0->iv_ic;
 int VAR_4;

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_3);
 return VAR_4;
}
