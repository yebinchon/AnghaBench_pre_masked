
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intrs_and_queues {int nirq; int nrxq; int nofldrxq; int num_vis; int nofldrxq_vi; int nnmrxq_vi; int nrxq_vi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct intrs_and_queues *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0;

 VAR_1->nirq = VAR_3;
 VAR_1->nirq += VAR_2 * (VAR_1->nrxq + VAR_1->nofldrxq);
 VAR_1->nirq += VAR_2 * (VAR_1->num_vis - 1) *
     FUNC_0(VAR_1->nrxq_vi, VAR_1->nnmrxq_vi);
 VAR_1->nirq += VAR_2 * (VAR_1->num_vis - 1) * VAR_1->nofldrxq_vi;
}
