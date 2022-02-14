
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct ifnet {struct ieee80211vap* if_softc; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_nrunning; struct iwm_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct iwm_softc*) ;
 int FUNC_4 (struct iwm_softc*) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1->if_softc;
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;
 struct iwm_softc *VAR_4 = VAR_3->ic_softc;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 != VAR_0)
  return VAR_5;

 FUNC_0(VAR_4);
 if (VAR_3->ic_nrunning > 0) {
  FUNC_4(VAR_4);
  FUNC_3(VAR_4);
 }
 FUNC_1(VAR_4);
 return VAR_5;
}
