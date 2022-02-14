
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_opmode; struct ath_softc* ic_softc; } ;
struct ath_softc {int sc_updateslot; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_softc*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_3->ic_softc;
 if (VAR_3->ic_opmode == VAR_0 ||
     VAR_3->ic_opmode == VAR_1)
  VAR_4->sc_updateslot = VAR_2;
 else
  FUNC_0(VAR_4);
}
