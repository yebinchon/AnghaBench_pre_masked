
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int sc_rx_stopped; TYPE_1__* sc_rxedma; struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int * m_rxpending; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ath_softc *VAR_3, int VAR_4)
{
 struct ath_hal *VAR_5 = VAR_3->sc_ah;

 FUNC_0(VAR_3);

 FUNC_5(VAR_5);
 FUNC_3(VAR_5, 0);




 if (FUNC_4(VAR_5) == VAR_0)
  VAR_3->sc_rx_stopped = 1;





 FUNC_2(3000);



 if (VAR_3->sc_rxedma[VAR_1].m_rxpending) {
  FUNC_6(VAR_3->sc_rxedma[VAR_1].m_rxpending);
  VAR_3->sc_rxedma[VAR_1].m_rxpending = ((void*)0);
 }

 if (VAR_3->sc_rxedma[VAR_2].m_rxpending) {
  FUNC_6(VAR_3->sc_rxedma[VAR_2].m_rxpending);
  VAR_3->sc_rxedma[VAR_2].m_rxpending = ((void*)0);
 }
 FUNC_1(VAR_3);
}
