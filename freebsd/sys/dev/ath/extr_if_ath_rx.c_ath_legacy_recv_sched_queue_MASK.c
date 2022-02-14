
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_rxtask; int sc_tq; } ;
typedef int HAL_RX_QUEUE ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_0, HAL_RX_QUEUE VAR_1,
    int VAR_2)
{

 FUNC_0(VAR_0->sc_tq, &VAR_0->sc_rxtask);
}
