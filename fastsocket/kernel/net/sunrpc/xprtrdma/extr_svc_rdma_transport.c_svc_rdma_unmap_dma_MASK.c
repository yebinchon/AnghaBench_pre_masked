
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {scalar_t__ sc_dma_lkey; TYPE_1__* sc_cm_id; int sc_dma_used; } ;
struct svc_rdma_op_ctxt {int count; int direction; TYPE_2__* sge; struct svcxprt_rdma* xprt; } ;
struct TYPE_4__ {scalar_t__ lkey; scalar_t__ length; int addr; } ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;

void FUNC_2(struct svc_rdma_op_ctxt *VAR_0)
{
 struct svcxprt_rdma *VAR_1 = VAR_0->xprt;
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->count && VAR_0->sge[VAR_2].length; VAR_2++) {






  if (VAR_0->sge[VAR_2].lkey == VAR_1->sc_dma_lkey) {
   FUNC_0(&VAR_1->sc_dma_used);
   FUNC_1(VAR_1->sc_cm_id->device,
         VAR_0->sge[VAR_2].addr,
         VAR_0->sge[VAR_2].length,
         VAR_0->direction);
  }
 }
}
