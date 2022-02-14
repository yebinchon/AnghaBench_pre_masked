
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ucma_abi_conn_param {int valid; int retry_count; int rnr_retry_count; scalar_t__ private_data_len; scalar_t__ private_data; int flow_control; int initiator_depth; int responder_resources; int srq; int qp_num; } ;
struct rdma_conn_param {int retry_count; int rnr_retry_count; scalar_t__ private_data_len; scalar_t__ private_data; int flow_control; } ;
struct cma_id_private {scalar_t__ connect_len; scalar_t__ connect; int initiator_depth; int responder_resources; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cma_id_private *VAR_0,
      struct ucma_abi_conn_param *VAR_1,
      struct rdma_conn_param *VAR_2,
      uint32_t VAR_3, uint8_t VAR_4)
{
 VAR_1->qp_num = VAR_3;
 VAR_1->srq = VAR_4;
 VAR_1->responder_resources = VAR_0->responder_resources;
 VAR_1->initiator_depth = VAR_0->initiator_depth;
 VAR_1->valid = 1;

 if (VAR_0->connect_len) {
  FUNC_0(VAR_1->private_data, VAR_0->connect, VAR_0->connect_len);
  VAR_1->private_data_len = VAR_0->connect_len;
 }

 if (VAR_2) {
  VAR_1->flow_control = VAR_2->flow_control;
  VAR_1->retry_count = VAR_2->retry_count;
  VAR_1->rnr_retry_count = VAR_2->rnr_retry_count;

  if (VAR_2->private_data && VAR_2->private_data_len) {
   FUNC_0(VAR_1->private_data + VAR_1->private_data_len,
          VAR_2->private_data, VAR_2->private_data_len);
   VAR_1->private_data_len += VAR_2->private_data_len;
  }
 } else {
  VAR_1->retry_count = 7;
  VAR_1->rnr_retry_count = 7;
 }
}
