
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_flags; int sc_es_task; } ;
struct ieee80211vap {scalar_t__ iv_state; } ;
struct ieee80211com {int ic_tq; struct iwm_softc* ic_softc; int ic_vaps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (struct iwm_softc*) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*) ;
 int FUNC_6 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211com *VAR_2)
{
 struct ieee80211vap *VAR_3 = FUNC_2(&VAR_2->ic_vaps);
 struct iwm_softc *VAR_4 = VAR_2->ic_softc;

 FUNC_0(VAR_4);
 FUNC_3(VAR_4);
 if (VAR_3->iv_state == VAR_0)
  FUNC_4(VAR_4);
 if (VAR_4->sc_flags & VAR_1) {





  VAR_4->sc_flags &= ~VAR_1;
  FUNC_5(VAR_4);
 }
 FUNC_1(VAR_4);






 FUNC_6(VAR_2->ic_tq, &VAR_4->sc_es_task, ((void*)0));
}
