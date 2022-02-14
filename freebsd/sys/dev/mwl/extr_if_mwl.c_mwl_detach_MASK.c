
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct mwl_softc {int sc_snd; int sc_mh; int sc_watchdog; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct mwl_softc*) ;
 int FUNC_1 (struct mwl_softc*) ;
 int FUNC_2 (struct mwl_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211com*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mwl_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mwl_softc*) ;
 int FUNC_9 (struct mwl_softc*) ;

int
FUNC_10(struct mwl_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;

 FUNC_0(VAR_0);
 FUNC_8(VAR_0);
 FUNC_2(VAR_0);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_0->sc_watchdog);
 FUNC_6(VAR_0);
 FUNC_1(VAR_0);
 FUNC_9(VAR_0);
 FUNC_7(VAR_0->sc_mh);
 FUNC_5(&VAR_0->sc_snd);

 return 0;
}
