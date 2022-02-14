
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {scalar_t__ ic_nrunning; struct ath_softc* ic_softc; } ;
struct ath_softc {TYPE_1__* sc_tx99; int sc_invalid; scalar_t__ sc_running; } ;
struct TYPE_2__ {int (* start ) (TYPE_1__*) ;} ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*,int ) ;
 int FUNC_6 (struct ath_softc*,int ,int) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ieee80211com*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_10(struct ieee80211com *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_3->ic_softc;
 int VAR_5 = VAR_0;

 FUNC_0(VAR_4);
 if (VAR_3->ic_nrunning > 0) {





  if (VAR_4->sc_running) {
   FUNC_5(VAR_4, VAR_1);
   FUNC_3(VAR_4);
   FUNC_4(VAR_4);
  } else if (!VAR_4->sc_invalid) {
   VAR_5 = FUNC_2(VAR_4);
  }
 } else {
  FUNC_7(VAR_4);
  if (!VAR_4->sc_invalid)
   FUNC_6(VAR_4, VAR_2, 1);
 }
 FUNC_1(VAR_4);

 if (VAR_5 == 0) {





  FUNC_8(VAR_3);
 }
}
