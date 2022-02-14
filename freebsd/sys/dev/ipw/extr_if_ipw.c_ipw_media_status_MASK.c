
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_softc {int dummy; } ;
struct ifnet {struct ieee80211vap* if_softc; } ;
struct ifmediareq {int dummy; } ;
struct ieee80211vap {TYPE_1__* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct ipw_softc* ic_softc; } ;
struct TYPE_2__ {int ni_txrate; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,struct ifmediareq*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ipw_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_1, struct ifmediareq *VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_1->if_softc;
 struct ieee80211com *VAR_4 = VAR_3->iv_ic;
 struct ipw_softc *VAR_5 = VAR_4->ic_softc;


 VAR_3->iv_bss->ni_txrate = FUNC_1(
     FUNC_2(VAR_5, VAR_0) & 0xf);
 FUNC_0(VAR_1, VAR_2);
}
