
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2560_softc {int sc_flags; int rxq; int bcnq; int prioq; int atimq; int txq; scalar_t__ sc_tx_timer; int watchdog_ch; int sc_mtx; } ;


 int FUNC_0 (struct rt2560_softc*) ;
 int FUNC_1 (struct rt2560_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int volatile VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 (struct rt2560_softc*,int *,int ,char*,int) ;
 int FUNC_4 (struct rt2560_softc*,int *) ;
 int FUNC_5 (struct rt2560_softc*,int *) ;

__attribute__((used)) static void
FUNC_6(struct rt2560_softc *VAR_10)
{
 volatile int *VAR_11 = &VAR_10->sc_flags;

 FUNC_0(VAR_10);

 while (*VAR_11 & VAR_4)
  FUNC_3(VAR_10, &VAR_10->sc_mtx, 0, "ralrunning", VAR_9/10);

 FUNC_2(&VAR_10->watchdog_ch);
 VAR_10->sc_tx_timer = 0;

 if (VAR_10->sc_flags & VAR_5) {
  VAR_10->sc_flags &= ~VAR_5;


  FUNC_1(VAR_10, VAR_8, VAR_0);


  FUNC_1(VAR_10, VAR_7, VAR_3);


  FUNC_1(VAR_10, VAR_1, VAR_6);
  FUNC_1(VAR_10, VAR_1, 0);


  FUNC_1(VAR_10, VAR_2, 0xffffffff);


  FUNC_5(VAR_10, &VAR_10->txq);
  FUNC_5(VAR_10, &VAR_10->atimq);
  FUNC_5(VAR_10, &VAR_10->prioq);
  FUNC_5(VAR_10, &VAR_10->bcnq);
  FUNC_4(VAR_10, &VAR_10->rxq);
 }
}
