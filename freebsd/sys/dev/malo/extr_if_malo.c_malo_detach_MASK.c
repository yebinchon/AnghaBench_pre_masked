
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct malo_softc {int malo_snd; int malo_mh; int malo_watchdog_timer; int * malo_tq; int malo_txtask; int malo_rxtask; struct ieee80211com malo_ic; } ;


 int FUNC_0 (struct malo_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct malo_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct malo_softc*) ;
 int FUNC_6 (struct malo_softc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct malo_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->malo_ic;

 FUNC_5(VAR_0);

 if (VAR_0->malo_tq != ((void*)0)) {
  FUNC_8(VAR_0->malo_tq, &VAR_0->malo_rxtask);
  FUNC_8(VAR_0->malo_tq, &VAR_0->malo_txtask);
  FUNC_9(VAR_0->malo_tq);
  VAR_0->malo_tq = ((void*)0);
 }
 FUNC_2(VAR_1);
 FUNC_1(&VAR_0->malo_watchdog_timer);
 FUNC_3(VAR_0);
 FUNC_6(VAR_0);
 FUNC_4(VAR_0->malo_mh);
 FUNC_7(&VAR_0->malo_snd);
 FUNC_0(VAR_0);

 return 0;
}
