
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {scalar_t__ qp_type; int * recv_cq_channel; int * send_cq_channel; int * recv_cq; int * send_cq; scalar_t__ srq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rdma_cm_id *VAR_1)
{
 if (VAR_1->qp_type == VAR_0 && VAR_1->srq)
  return;

 if (VAR_1->recv_cq) {
  FUNC_1(VAR_1->recv_cq);
  if (VAR_1->send_cq && (VAR_1->send_cq != VAR_1->recv_cq)) {
   FUNC_1(VAR_1->send_cq);
   VAR_1->send_cq = ((void*)0);
  }
  VAR_1->recv_cq = ((void*)0);
 }

 if (VAR_1->recv_cq_channel) {
  FUNC_0(VAR_1->recv_cq_channel);
  if (VAR_1->send_cq_channel && (VAR_1->send_cq_channel != VAR_1->recv_cq_channel)) {
   FUNC_0(VAR_1->send_cq_channel);
   VAR_1->send_cq_channel = ((void*)0);
  }
  VAR_1->recv_cq_channel = ((void*)0);
 }
}
