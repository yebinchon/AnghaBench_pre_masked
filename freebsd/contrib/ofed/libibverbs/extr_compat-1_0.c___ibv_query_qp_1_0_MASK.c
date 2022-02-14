
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibv_qp_init_attr_1_0 {int sq_sig_all; int cap; int qp_type; int srq; int recv_cq; int send_cq; int qp_context; } ;
struct ibv_qp_init_attr {int sq_sig_all; int cap; int qp_type; TYPE_3__* srq; TYPE_2__* recv_cq; TYPE_1__* send_cq; } ;
struct ibv_qp_attr {int dummy; } ;
struct ibv_qp_1_0 {int qp_context; int real_qp; } ;
struct TYPE_6__ {int srq_context; } ;
struct TYPE_5__ {int cq_context; } ;
struct TYPE_4__ {int cq_context; } ;


 int FUNC_0 (int ,struct ibv_qp_attr*,int,struct ibv_qp_init_attr*) ;

int FUNC_1(struct ibv_qp_1_0 *VAR_0, struct ibv_qp_attr *VAR_1,
         int VAR_2,
         struct ibv_qp_init_attr_1_0 *VAR_3)
{
 struct ibv_qp_init_attr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0->real_qp, VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->qp_context = VAR_0->qp_context;
 VAR_3->send_cq = VAR_4.send_cq->cq_context;
 VAR_3->recv_cq = VAR_4.recv_cq->cq_context;
 VAR_3->srq = VAR_4.srq->srq_context;
 VAR_3->qp_type = VAR_4.qp_type;
 VAR_3->cap = VAR_4.cap;
 VAR_3->sq_sig_all = VAR_4.sq_sig_all;

 return 0;
}
