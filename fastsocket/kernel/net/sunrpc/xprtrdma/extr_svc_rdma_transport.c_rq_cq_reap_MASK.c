
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xpt_flags; } ;
struct svcxprt_rdma {TYPE_1__ sc_xprt; int sc_flags; int sc_rq_dto_lock; int sc_rq_dto_q; int sc_rq_cq; } ;
struct svc_rdma_op_ctxt {scalar_t__ wc_status; int dto_q; int byte_len; } ;
struct ib_wc {scalar_t__ status; int byte_len; scalar_t__ wr_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct svc_rdma_op_ctxt*) ;
 int FUNC_2 (int ,int,struct ib_wc*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct svc_rdma_op_ctxt*,int) ;
 int FUNC_9 (struct svc_rdma_op_ctxt*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct svcxprt_rdma *VAR_8)
{
 int VAR_9;
 struct ib_wc VAR_10;
 struct svc_rdma_op_ctxt *VAR_11 = ((void*)0);

 if (!FUNC_12(VAR_3, &VAR_8->sc_flags))
  return;

 FUNC_3(VAR_8->sc_rq_cq, VAR_0);
 FUNC_0(&VAR_6);

 while ((VAR_9 = FUNC_2(VAR_8->sc_rq_cq, 1, &VAR_10)) > 0) {
  VAR_11 = (struct svc_rdma_op_ctxt *)(unsigned long)VAR_10.wr_id;
  VAR_11->wc_status = VAR_10.status;
  VAR_11->byte_len = VAR_10.byte_len;
  FUNC_9(VAR_11);
  if (VAR_10.status != VAR_1) {

   FUNC_1("svcrdma: transport closing putting ctxt %p\n", VAR_11);
   FUNC_5(VAR_4, &VAR_8->sc_xprt.xpt_flags);
   FUNC_8(VAR_11, 1);
   FUNC_11(&VAR_8->sc_xprt);
   continue;
  }
  FUNC_6(&VAR_8->sc_rq_dto_lock);
  FUNC_4(&VAR_11->dto_q, &VAR_8->sc_rq_dto_q);
  FUNC_7(&VAR_8->sc_rq_dto_lock);
  FUNC_11(&VAR_8->sc_xprt);
 }

 if (VAR_11)
  FUNC_0(&VAR_7);

 FUNC_5(VAR_5, &VAR_8->sc_xprt.xpt_flags);





 if (!FUNC_13(VAR_2, &VAR_8->sc_flags))
  FUNC_10(&VAR_8->sc_xprt);
}
