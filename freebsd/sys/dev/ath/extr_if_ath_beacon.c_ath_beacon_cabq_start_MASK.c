
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {int axq_q; } ;
struct ath_softc {scalar_t__ sc_isedma; struct ath_txq* sc_cabq; } ;


 int FUNC_0 (struct ath_txq*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;

void
FUNC_4(struct ath_softc *VAR_0)
{
 struct ath_txq *VAR_1 = VAR_0->sc_cabq;

 FUNC_0(VAR_1);

 if (FUNC_1(&VAR_1->axq_q))
  return;

 if (VAR_0->sc_isedma)
  FUNC_2(VAR_0);
 else
  FUNC_3(VAR_0);
}
