
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {TYPE_1__* sc_rxedma; } ;
struct TYPE_2__ {int * m_rxpending; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_2)
{



 if (VAR_2->sc_rxedma[VAR_1].m_rxpending != ((void*)0)) {
  FUNC_0(VAR_2->sc_rxedma[VAR_1].m_rxpending);
  VAR_2->sc_rxedma[VAR_1].m_rxpending = ((void*)0);
 }
 if (VAR_2->sc_rxedma[VAR_0].m_rxpending != ((void*)0)) {
  FUNC_0(VAR_2->sc_rxedma[VAR_0].m_rxpending);
  VAR_2->sc_rxedma[VAR_0].m_rxpending = ((void*)0);
 }
}
