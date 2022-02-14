
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibv_qp_init_attr_1_0 {int cap; int qp_type; TYPE_3__* srq; TYPE_2__* recv_cq; TYPE_1__* send_cq; int qp_context; int sq_sig_all; } ;
struct ibv_qp_init_attr {int cap; int sq_sig_all; int qp_type; int * srq; int recv_cq; int send_cq; int qp_context; } ;
struct ibv_qp_1_0 {struct ibv_qp* real_qp; int qp_num; int qp_type; TYPE_3__* srq; TYPE_2__* recv_cq; TYPE_1__* send_cq; struct ibv_pd_1_0* pd; int qp_context; int context; } ;
struct ibv_qp {struct ibv_qp_1_0* qp_context; int qp_num; } ;
struct ibv_pd_1_0 {int context; int real_pd; } ;
struct TYPE_6__ {int * real_srq; } ;
struct TYPE_5__ {int real_cq; } ;
struct TYPE_4__ {int real_cq; } ;


 int FUNC_0 (struct ibv_qp_1_0*) ;
 struct ibv_qp* FUNC_1 (int ,struct ibv_qp_init_attr*) ;
 struct ibv_qp_1_0* FUNC_2 (int) ;

struct ibv_qp_1_0 *FUNC_3(struct ibv_pd_1_0 *VAR_0,
           struct ibv_qp_init_attr_1_0 *VAR_1)
{
 struct ibv_qp *VAR_2;
 struct ibv_qp_1_0 *VAR_3;
 struct ibv_qp_init_attr VAR_4;

 VAR_3 = FUNC_2(sizeof *VAR_3);
 if (!VAR_3)
  return ((void*)0);

 VAR_4.qp_context = VAR_1->qp_context;
 VAR_4.send_cq = VAR_1->send_cq->real_cq;
 VAR_4.recv_cq = VAR_1->recv_cq->real_cq;
 VAR_4.srq = VAR_1->srq ?
  VAR_1->srq->real_srq : ((void*)0);
 VAR_4.cap = VAR_1->cap;
 VAR_4.qp_type = VAR_1->qp_type;
 VAR_4.sq_sig_all = VAR_1->sq_sig_all;

 VAR_2 = FUNC_1(VAR_0->real_pd, &VAR_4);
 if (!VAR_2) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->context = VAR_0->context;
 VAR_3->qp_context = VAR_1->qp_context;
 VAR_3->pd = VAR_0;
 VAR_3->send_cq = VAR_1->send_cq;
 VAR_3->recv_cq = VAR_1->recv_cq;
 VAR_3->srq = VAR_1->srq;
 VAR_3->qp_type = VAR_1->qp_type;
 VAR_3->qp_num = VAR_2->qp_num;
 VAR_3->real_qp = VAR_2;

 VAR_1->cap = VAR_4.cap;

 VAR_2->qp_context = VAR_3;

 return VAR_3;
}
