
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct rt2560_softc {int sc_mtx; int rxq; int bcnq; int prioq; int atimq; int txq; int sc_snd; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2560_softc*,int *) ;
 int FUNC_4 (struct rt2560_softc*,int *) ;
 int FUNC_5 (struct rt2560_softc*) ;

int
FUNC_6(void *VAR_0)
{
 struct rt2560_softc *VAR_1 = VAR_0;
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;

 FUNC_5(VAR_1);

 FUNC_0(VAR_2);
 FUNC_1(&VAR_1->sc_snd);

 FUNC_4(VAR_1, &VAR_1->txq);
 FUNC_4(VAR_1, &VAR_1->atimq);
 FUNC_4(VAR_1, &VAR_1->prioq);
 FUNC_4(VAR_1, &VAR_1->bcnq);
 FUNC_3(VAR_1, &VAR_1->rxq);

 FUNC_2(&VAR_1->sc_mtx);

 return 0;
}
