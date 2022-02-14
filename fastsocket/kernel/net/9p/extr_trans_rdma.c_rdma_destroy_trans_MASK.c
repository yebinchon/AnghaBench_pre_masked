
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_trans_rdma {scalar_t__ cm_id; scalar_t__ cq; scalar_t__ pd; scalar_t__ qp; scalar_t__ dma_mr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct p9_trans_rdma*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct p9_trans_rdma *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->dma_mr && !FUNC_0(VAR_0->dma_mr))
  FUNC_2(VAR_0->dma_mr);

 if (VAR_0->qp && !FUNC_0(VAR_0->qp))
  FUNC_4(VAR_0->qp);

 if (VAR_0->pd && !FUNC_0(VAR_0->pd))
  FUNC_1(VAR_0->pd);

 if (VAR_0->cq && !FUNC_0(VAR_0->cq))
  FUNC_3(VAR_0->cq);

 if (VAR_0->cm_id && !FUNC_0(VAR_0->cm_id))
  FUNC_6(VAR_0->cm_id);

 FUNC_5(VAR_0);
}
