
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_query_qp_out_params {int sqd_async; int max_dest_rd_atomic; int max_rd_atomic; scalar_t__ pkey_index; int min_rnr_nak_timer; int retry_cnt; int rnr_retry; int timeout; int traffic_class_tos; int hop_limit_ttl; int flow_label; int dgid; int incoming_rdma_write_en; int incoming_rdma_read_en; int e2e_flow_control_en; int incoming_atomic_en; int dest_qp; int mtu; } ;
struct ecore_rdma_qp {int icid; int sqd_async; int max_rd_atomic_resp; int max_rd_atomic_req; int min_rnr_nak_timer; int retry_cnt; int rnr_retry_cnt; int ack_timeout; int traffic_class_tos; int hop_limit_ttl; int flow_label; int dgid; int incoming_rdma_write_en; int incoming_rdma_read_en; int e2e_flow_control_en; int incoming_atomic_en; int dest_qp; int mtu; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_rdma_qp*,struct ecore_rdma_query_qp_out_params*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_rdma_qp*,struct ecore_rdma_query_qp_out_params*) ;

enum _ecore_status_t FUNC_4(void *VAR_2,
   struct ecore_rdma_qp *VAR_3,
   struct ecore_rdma_query_qp_out_params *VAR_4)

{
 struct ecore_hwfn *VAR_5 = (struct ecore_hwfn *)VAR_2;
 enum _ecore_status_t VAR_6 = VAR_1;

 FUNC_0(VAR_5, VAR_0, "icid = %08x\n", VAR_3->icid);




 VAR_4->mtu = VAR_3->mtu;
 VAR_4->dest_qp = VAR_3->dest_qp;
 VAR_4->incoming_atomic_en = VAR_3->incoming_atomic_en;
 VAR_4->e2e_flow_control_en = VAR_3->e2e_flow_control_en;
 VAR_4->incoming_rdma_read_en = VAR_3->incoming_rdma_read_en;
 VAR_4->incoming_rdma_write_en = VAR_3->incoming_rdma_write_en;
 VAR_4->dgid = VAR_3->dgid;
 VAR_4->flow_label = VAR_3->flow_label;
 VAR_4->hop_limit_ttl = VAR_3->hop_limit_ttl;
 VAR_4->traffic_class_tos = VAR_3->traffic_class_tos;
 VAR_4->timeout = VAR_3->ack_timeout;
 VAR_4->rnr_retry = VAR_3->rnr_retry_cnt;
 VAR_4->retry_cnt = VAR_3->retry_cnt;
 VAR_4->min_rnr_nak_timer = VAR_3->min_rnr_nak_timer;
 VAR_4->pkey_index = 0;
 VAR_4->max_rd_atomic = VAR_3->max_rd_atomic_req;
 VAR_4->max_dest_rd_atomic = VAR_3->max_rd_atomic_resp;
 VAR_4->sqd_async = VAR_3->sqd_async;

 if (FUNC_1(VAR_5))
  VAR_6 = FUNC_2(VAR_3, VAR_4);
 else
  VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4);

 FUNC_0(VAR_5, VAR_0, "Query QP, rc = %d\n", VAR_6);
 return VAR_6;
}
