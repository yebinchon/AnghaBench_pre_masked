
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; } ;
struct svcxprt_rdma {TYPE_1__ sc_xprt; int sc_send_wait; int sc_sq_count; struct ib_cq* sc_sq_cq; int sc_flags; } ;
struct svc_rdma_op_ctxt {int dummy; } ;
struct ib_wc {scalar_t__ status; scalar_t__ wr_id; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_cq*,int,struct ib_wc*) ;
 int FUNC_3 (struct ib_cq*,int ) ;
 int FUNC_4 (struct svcxprt_rdma*,struct svc_rdma_op_ctxt*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct svcxprt_rdma *VAR_6)
{
 struct svc_rdma_op_ctxt *VAR_7 = ((void*)0);
 struct ib_wc VAR_8;
 struct ib_cq *VAR_9 = VAR_6->sc_sq_cq;
 int VAR_10;

 if (!FUNC_7(VAR_2, &VAR_6->sc_flags))
  return;

 FUNC_3(VAR_6->sc_sq_cq, VAR_0);
 FUNC_1(&VAR_4);
 while ((VAR_10 = FUNC_2(VAR_9, 1, &VAR_8)) > 0) {
  if (VAR_8.status != VAR_1)

   FUNC_5(VAR_3, &VAR_6->sc_xprt.xpt_flags);


  FUNC_0(&VAR_6->sc_sq_count);
  FUNC_8(&VAR_6->sc_send_wait);

  VAR_7 = (struct svc_rdma_op_ctxt *)(unsigned long)VAR_8.wr_id;
  if (VAR_7)
   FUNC_4(VAR_6, VAR_7);

  FUNC_6(&VAR_6->sc_xprt);
 }

 if (VAR_7)
  FUNC_1(&VAR_5);
}
