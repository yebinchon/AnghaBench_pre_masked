
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {int axq_qnum; } ;
struct ath_softc {int sc_txqsetup; int sc_ah; } ;


 int FUNC_0 (struct ath_txq*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ath_softc *VAR_0, struct ath_txq *VAR_1)
{

 FUNC_1(VAR_0->sc_ah, VAR_1->axq_qnum);
 VAR_0->sc_txqsetup &= ~(1<<VAR_1->axq_qnum);
 FUNC_0(VAR_1);
}
