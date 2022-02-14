
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct ifnet {struct ieee80211vap* if_softc; } ;
struct ifmediareq {int dummy; } ;
struct ieee80211vap {int iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct iwi_softc* ic_softc; } ;
struct ieee80211_node {int ni_txrate; } ;


 int FUNC_0 (struct iwi_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ifnet*,struct ifmediareq*) ;
 struct ieee80211_node* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_1, struct ifmediareq *VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_1->if_softc;
 struct ieee80211com *VAR_4 = VAR_3->iv_ic;
 struct iwi_softc *VAR_5 = VAR_4->ic_softc;
 struct ieee80211_node *VAR_6;


 VAR_6 = FUNC_3(VAR_3->iv_bss);
 VAR_6->ni_txrate =
     FUNC_4(FUNC_0(VAR_5, VAR_0));
 FUNC_1(VAR_6);
 FUNC_2(VAR_1, VAR_2);
}
