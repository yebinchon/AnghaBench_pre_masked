
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_softc {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; } ;
struct ieee80211com {int ic_vaps; struct rt2860_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 struct ieee80211vap* FUNC_0 (int *) ;
 int FUNC_1 (struct rt2860_softc*) ;
 int FUNC_2 (struct rt2860_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_1)
{
 struct rt2860_softc *VAR_2 = VAR_1->ic_softc;
 struct ieee80211vap *VAR_3 = FUNC_0(&VAR_1->ic_vaps);

 if (VAR_3->iv_state == VAR_0) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_2, 500);
 }
}
