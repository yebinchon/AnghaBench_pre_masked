
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct ieee80211vap* if_softc; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int (* ic_vap_delete ) (struct ieee80211vap*) ;} ;


 int FUNC_0 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_0)
{
 struct ieee80211vap *VAR_1 = VAR_0->if_softc;
 struct ieee80211com *VAR_2 = VAR_1->iv_ic;

 VAR_2->ic_vap_delete(VAR_1);
}
