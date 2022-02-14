
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2661_softc {int sc_flags; int rxq; int mgtq; int * txq; scalar_t__ sc_tx_timer; int watchdog_ch; int sc_mtx; } ;


 int volatile VAR_0 ;
 int FUNC_0 (struct rt2661_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct rt2661_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int VAR_10 ;
 int FUNC_3 (struct rt2661_softc*,int *,int ,char*,int) ;
 int FUNC_4 (struct rt2661_softc*,int *) ;
 int FUNC_5 (struct rt2661_softc*,int *) ;

void
FUNC_6(struct rt2661_softc *VAR_11)
{
 volatile int *VAR_12 = &VAR_11->sc_flags;
 uint32_t VAR_13;

 while (*VAR_12 & VAR_0)
  FUNC_3(VAR_11, &VAR_11->sc_mtx, 0, "ralrunning", VAR_10/10);

 FUNC_2(&VAR_11->watchdog_ch);
 VAR_11->sc_tx_timer = 0;

 if (VAR_11->sc_flags & VAR_1) {
  VAR_11->sc_flags &= ~VAR_1;


  FUNC_1(VAR_11, VAR_9, 0x1f << 16);


  VAR_13 = FUNC_0(VAR_11, VAR_8);
  FUNC_1(VAR_11, VAR_8, VAR_13 | VAR_2);


  FUNC_1(VAR_11, VAR_5, 3);
  FUNC_1(VAR_11, VAR_5, 0);


  FUNC_1(VAR_11, VAR_3, 0xffffffff);
  FUNC_1(VAR_11, VAR_6, 0xffffffff);


  FUNC_1(VAR_11, VAR_4, 0xffffffff);
  FUNC_1(VAR_11, VAR_7, 0xffffffff);


  FUNC_5(VAR_11, &VAR_11->txq[0]);
  FUNC_5(VAR_11, &VAR_11->txq[1]);
  FUNC_5(VAR_11, &VAR_11->txq[2]);
  FUNC_5(VAR_11, &VAR_11->txq[3]);
  FUNC_5(VAR_11, &VAR_11->mgtq);
  FUNC_4(VAR_11, &VAR_11->rxq);
 }
}
