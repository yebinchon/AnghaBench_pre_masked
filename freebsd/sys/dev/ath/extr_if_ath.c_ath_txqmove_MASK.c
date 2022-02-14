
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {scalar_t__ axq_aggr_depth; scalar_t__ axq_depth; int * axq_link; int axq_q; } ;


 int FUNC_0 (struct ath_txq*) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

void
FUNC_2(struct ath_txq *VAR_1, struct ath_txq *VAR_2)
{

 FUNC_0(VAR_2);
 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->axq_q, &VAR_2->axq_q, VAR_0);
 VAR_1->axq_link = VAR_2->axq_link;
 VAR_2->axq_link = ((void*)0);
 VAR_1->axq_depth += VAR_2->axq_depth;
 VAR_1->axq_aggr_depth += VAR_2->axq_aggr_depth;
 VAR_2->axq_depth = 0;
 VAR_2->axq_aggr_depth = 0;
}
