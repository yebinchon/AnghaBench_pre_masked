
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211vap*) ;

void
FUNC_3(struct ieee80211vap *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->iv_ic;

 if (VAR_2->ic_caps & VAR_0) {
  FUNC_0(VAR_2);
  FUNC_2(VAR_1);
  FUNC_1(VAR_2);
 }
}
