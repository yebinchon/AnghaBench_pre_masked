
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_vaps; } ;
struct rt2860_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {scalar_t__ iv_state; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 struct ieee80211vap* FUNC_1 (int *) ;
 int FUNC_2 (struct rt2860_softc*) ;

__attribute__((used)) static void
FUNC_3(struct rt2860_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;
 struct ieee80211vap *VAR_3 = FUNC_1(&VAR_2->ic_vaps);

 FUNC_0(2, ("GP timeout state=%d\n", VAR_3->iv_state));

 if (VAR_3->iv_state == VAR_0)
  FUNC_2(VAR_1);
}
