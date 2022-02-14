
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int axq_q; } ;
struct ath_txq {int axq_qnum; TYPE_1__ fifo; int axq_tidq; int axq_q; struct ath_softc* axq_softc; int * axq_link; scalar_t__ axq_intrcnt; scalar_t__ axq_aggr_depth; scalar_t__ axq_depth; scalar_t__ axq_ac; } ;
struct ath_softc {int dummy; } ;


 int FUNC_0 (struct ath_softc*,struct ath_txq*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ath_softc *VAR_0, struct ath_txq *VAR_1, int VAR_2)
{
 VAR_1->axq_qnum = VAR_2;
 VAR_1->axq_ac = 0;
 VAR_1->axq_depth = 0;
 VAR_1->axq_aggr_depth = 0;
 VAR_1->axq_intrcnt = 0;
 VAR_1->axq_link = ((void*)0);
 VAR_1->axq_softc = VAR_0;
 FUNC_1(&VAR_1->axq_q);
 FUNC_1(&VAR_1->axq_tidq);
 FUNC_1(&VAR_1->fifo.axq_q);
 FUNC_0(VAR_0, VAR_1);
}
