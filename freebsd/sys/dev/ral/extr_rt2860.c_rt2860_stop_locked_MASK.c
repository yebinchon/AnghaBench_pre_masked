
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2860_softc {int sc_flags; int rxq; int * txq; scalar_t__ qfullmsk; scalar_t__ sc_tx_timer; int watchdog_ch; } ;


 int FUNC_0 (struct rt2860_softc*) ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int FUNC_2 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rt2860_softc*,int *) ;
 int FUNC_5 (struct rt2860_softc*,int *) ;
 int FUNC_6 (struct rt2860_softc*,int ) ;
 int FUNC_7 (struct rt2860_softc*,int ) ;

__attribute__((used)) static void
FUNC_8(struct rt2860_softc *VAR_7)
{
 uint32_t VAR_8;
 int VAR_9;

 if (VAR_7->sc_flags & VAR_6)
  FUNC_7(VAR_7, 0);

 FUNC_3(&VAR_7->watchdog_ch);
 VAR_7->sc_tx_timer = 0;
 VAR_7->sc_flags &= ~VAR_6;


 FUNC_2(VAR_7, VAR_1, 0);


 FUNC_6(VAR_7, 0);


 VAR_8 = FUNC_1(VAR_7, VAR_4);
 VAR_8 &= ~(VAR_2 | VAR_5);
 FUNC_2(VAR_7, VAR_4, VAR_8);


 FUNC_2(VAR_7, VAR_4, VAR_0 | VAR_3);
 FUNC_0(VAR_7);
 FUNC_2(VAR_7, VAR_4, 0);


 VAR_7->qfullmsk = 0;
 for (VAR_9 = 0; VAR_9 < 6; VAR_9++)
  FUNC_5(VAR_7, &VAR_7->txq[VAR_9]);
 FUNC_4(VAR_7, &VAR_7->rxq);
}
