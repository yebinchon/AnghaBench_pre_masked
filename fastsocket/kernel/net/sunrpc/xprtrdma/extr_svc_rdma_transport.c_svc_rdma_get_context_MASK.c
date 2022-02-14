
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_ctxt_used; } ;
struct svc_rdma_op_ctxt {int * frmr; scalar_t__ count; int dto_q; struct svcxprt_rdma* xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct svc_rdma_op_ctxt* FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

struct svc_rdma_op_ctxt *FUNC_5(struct svcxprt_rdma *VAR_2)
{
 struct svc_rdma_op_ctxt *VAR_3;

 while (1) {
  VAR_3 = FUNC_2(VAR_1, VAR_0);
  if (VAR_3)
   break;
  FUNC_4(FUNC_3(500));
 }
 VAR_3->xprt = VAR_2;
 FUNC_0(&VAR_3->dto_q);
 VAR_3->count = 0;
 VAR_3->frmr = ((void*)0);
 FUNC_1(&VAR_2->sc_ctxt_used);
 return VAR_3;
}
