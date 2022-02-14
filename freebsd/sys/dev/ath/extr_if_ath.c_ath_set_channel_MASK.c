
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_curchan; scalar_t__ ic_bsschan; struct ath_softc* ic_softc; } ;
struct ath_softc {int sc_syncbeacon; int sc_scanning; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_softc*,scalar_t__) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_1->ic_softc;

 FUNC_0(VAR_2);
 FUNC_4(VAR_2, VAR_0);
 FUNC_1(VAR_2);

 (void) FUNC_2(VAR_2, VAR_1->ic_curchan);






 FUNC_0(VAR_2);
 if (!VAR_2->sc_scanning && VAR_1->ic_curchan == VAR_1->ic_bsschan)
  VAR_2->sc_syncbeacon = 1;
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
}
