
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int (* iv_update_deftxkey ) (struct ieee80211vap*,int ) ;} ;
typedef int ieee80211_keyix ;


 int FUNC_0 (struct ieee80211vap*,int ) ;

void
FUNC_1(struct ieee80211vap *VAR_0, ieee80211_keyix VAR_1)
{



 VAR_0->iv_update_deftxkey(VAR_0, VAR_1);
}
