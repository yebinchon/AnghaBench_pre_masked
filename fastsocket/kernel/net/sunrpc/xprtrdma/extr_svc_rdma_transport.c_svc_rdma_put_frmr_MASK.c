
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_frmr_q_lock; int sc_frmr_q; } ;
struct svc_rdma_fastreg_mr {int frmr_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct svcxprt_rdma*,struct svc_rdma_fastreg_mr*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct svcxprt_rdma *VAR_0,
         struct svc_rdma_fastreg_mr *VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_4(&VAR_0->sc_frmr_q_lock);
  FUNC_0(!FUNC_3(&VAR_1->frmr_list));
  FUNC_2(&VAR_1->frmr_list, &VAR_0->sc_frmr_q);
  FUNC_5(&VAR_0->sc_frmr_q_lock);
 }
}
