
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_rxtask; int sc_tq; } ;
typedef int HAL_RX_QUEUE ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_softc*,int ,int) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct ath_softc *VAR_1, HAL_RX_QUEUE VAR_2,
    int VAR_3)
{

 FUNC_0(VAR_1);
 FUNC_4(VAR_1, VAR_0);
 FUNC_1(VAR_1);

 FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);

 FUNC_5(VAR_1->sc_tq, &VAR_1->sc_rxtask);
}
