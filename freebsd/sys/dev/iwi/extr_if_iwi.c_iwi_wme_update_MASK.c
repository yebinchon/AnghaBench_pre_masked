
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; } ;
struct ieee80211com {int ic_vaps; struct iwi_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwi_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct iwi_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (struct iwi_softc*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211com *VAR_2)
{
 struct iwi_softc *VAR_3 = VAR_2->ic_softc;
 struct ieee80211vap *VAR_4 = FUNC_2(&VAR_2->ic_vaps);
 VAR_1;
 if (VAR_4->iv_state == VAR_0) {
  FUNC_0(VAR_3);
  FUNC_3(VAR_3);
  FUNC_1(VAR_3);
 }
 return (0);
}
