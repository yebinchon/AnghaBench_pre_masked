
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_ctxt_used; } ;
struct svc_rdma_op_ctxt {int count; int * pages; struct svcxprt_rdma* xprt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct svc_rdma_op_ctxt*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

void FUNC_4(struct svc_rdma_op_ctxt *VAR_1, int VAR_2)
{
 struct svcxprt_rdma *VAR_3;
 int VAR_4;

 FUNC_0(!VAR_1);
 VAR_3 = VAR_1->xprt;
 if (VAR_2)
  for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++)
   FUNC_3(VAR_1->pages[VAR_4]);

 FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_3->sc_ctxt_used);
}
