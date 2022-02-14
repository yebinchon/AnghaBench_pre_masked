
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct rt2661_softc {int sc_mtx; int rxq; int mgtq; int * txq; int sc_snd; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct rt2661_softc*) ;
 int FUNC_1 (struct rt2661_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rt2661_softc*,int *) ;
 int FUNC_6 (struct rt2661_softc*,int *) ;
 int FUNC_7 (struct rt2661_softc*) ;

int
FUNC_8(void *VAR_0)
{
 struct rt2661_softc *VAR_1 = VAR_0;
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;

 FUNC_0(VAR_1);
 FUNC_7(VAR_1);
 FUNC_1(VAR_1);

 FUNC_2(VAR_2);
 FUNC_3(&VAR_1->sc_snd);

 FUNC_6(VAR_1, &VAR_1->txq[0]);
 FUNC_6(VAR_1, &VAR_1->txq[1]);
 FUNC_6(VAR_1, &VAR_1->txq[2]);
 FUNC_6(VAR_1, &VAR_1->txq[3]);
 FUNC_6(VAR_1, &VAR_1->mgtq);
 FUNC_5(VAR_1, &VAR_1->rxq);

 FUNC_4(&VAR_1->sc_mtx);

 return 0;
}
