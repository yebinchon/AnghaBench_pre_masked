
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucma_abi_conn_param {int qp_num; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; scalar_t__ private_data_len; int private_data; } ;
struct rdma_conn_param {int qp_num; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; int * private_data; scalar_t__ private_data_len; } ;
struct TYPE_3__ {struct rdma_conn_param conn; } ;
struct TYPE_4__ {TYPE_1__ param; } ;
struct cma_event {int private_data; TYPE_2__ event; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cma_event *VAR_0,
     struct ucma_abi_conn_param *VAR_1)
{
 struct rdma_conn_param *VAR_2 = &VAR_0->event.param.conn;

 VAR_2->private_data_len = VAR_1->private_data_len;
 if (VAR_1->private_data_len) {
  VAR_2->private_data = &VAR_0->private_data;
  FUNC_0(&VAR_0->private_data, VAR_1->private_data,
         VAR_1->private_data_len);
 }

 VAR_2->responder_resources = VAR_1->responder_resources;
 VAR_2->initiator_depth = VAR_1->initiator_depth;
 VAR_2->flow_control = VAR_1->flow_control;
 VAR_2->retry_count = VAR_1->retry_count;
 VAR_2->rnr_retry_count = VAR_1->rnr_retry_count;
 VAR_2->srq = VAR_1->srq;
 VAR_2->qp_num = VAR_1->qp_num;
}
