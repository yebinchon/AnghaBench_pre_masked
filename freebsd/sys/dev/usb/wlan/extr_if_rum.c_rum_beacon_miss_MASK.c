
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_vap {int (* bmiss ) (struct ieee80211vap*) ;} ;
struct rum_softc {int sc_sleeping; scalar_t__ sc_sleep_end; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct rum_softc* ic_softc; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct rum_softc*) ;
 struct rum_vap* FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ieee80211vap*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct ieee80211vap *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->iv_ic;
 struct rum_softc *VAR_3 = VAR_2->ic_softc;
 struct rum_vap *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_1(VAR_3);
 if (VAR_3->sc_sleeping && VAR_3->sc_sleep_end < VAR_0) {
  FUNC_0(12, "dropping 'sleeping' bit, "
      "device must be awake now\n");

  VAR_3->sc_sleeping = 0;
 }

 VAR_5 = VAR_3->sc_sleeping;
 FUNC_2(VAR_3);

 if (!VAR_5)
  VAR_4->bmiss(VAR_1);




}
