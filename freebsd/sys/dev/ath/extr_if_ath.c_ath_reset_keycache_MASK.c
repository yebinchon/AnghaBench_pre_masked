
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ath_softc {int sc_keymax; struct ath_hal* sc_ah; struct ieee80211com sc_ic; } ;
struct ath_hal {int dummy; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_hal*,int) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*,int ) ;
 int FUNC_5 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_6(struct ath_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;
 struct ath_hal *VAR_3 = VAR_1->sc_ah;
 int VAR_4;

 FUNC_0(VAR_1);
 FUNC_4(VAR_1, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_1->sc_keymax; VAR_4++)
  FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_5(VAR_2);
}
