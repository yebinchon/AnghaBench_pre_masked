
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {int axq_qnum; int axq_flags; int axq_q; } ;
struct ath_softc {int sc_ah; struct ath_txq* sc_cabq; } ;
struct ath_buf {int bf_daddr; } ;


 int FUNC_0 (struct ath_txq*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 struct ath_buf* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ath_softc *VAR_1)
{
 struct ath_buf *VAR_2;
 struct ath_txq *VAR_3 = VAR_1->sc_cabq;

 FUNC_0(VAR_3);
 if (FUNC_1(&VAR_3->axq_q))
  return;
 VAR_2 = FUNC_2(&VAR_3->axq_q);


 FUNC_3(VAR_1->sc_ah, VAR_3->axq_qnum, VAR_2->bf_daddr);
 VAR_3->axq_flags |= VAR_0;


 FUNC_4(VAR_1->sc_ah, VAR_3->axq_qnum);
}
