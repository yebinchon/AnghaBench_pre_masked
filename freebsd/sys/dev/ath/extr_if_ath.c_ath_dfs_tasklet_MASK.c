
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ath_softc {int sc_curchan; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 scalar_t__ FUNC_2 (struct ath_softc*,int ) ;
 int FUNC_3 (struct ieee80211com*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, int VAR_1)
{
 struct ath_softc *VAR_2 = (struct ath_softc *) VAR_0;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;






 if (FUNC_2(VAR_2, VAR_2->sc_curchan)) {
  FUNC_0(VAR_3);
  FUNC_3(VAR_3, VAR_2->sc_curchan);
  FUNC_1(VAR_3);
 }
}
