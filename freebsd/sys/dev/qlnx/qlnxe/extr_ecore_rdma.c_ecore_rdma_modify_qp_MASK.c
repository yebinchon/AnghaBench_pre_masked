
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ecore_rdma_qp {int cur_state; scalar_t__ qp_type; int has_req; int has_resp; int sqd_async; int min_rnr_nak_timer; int rnr_retry_cnt; int retry_cnt; int ack_timeout; int max_rd_atomic_resp; int max_rd_atomic_req; int sq_psn; int rq_psn; int * local_mac_addr; int * remote_mac_addr; int mtu; int traffic_class_tos; int vlan_id; int udp_src_port; int dgid; int sgid; int hop_limit_ttl; int flow_label; int dest_qp; int e2e_flow_control_en; int pkey; int roce_mode; int incoming_atomic_en; int incoming_rdma_write_en; int incoming_rdma_read_en; } ;
struct ecore_rdma_modify_qp_in_params {int new_state; int modify_flags; int sqd_async; int min_rnr_nak_timer; int rnr_retry_cnt; int retry_cnt; int ack_timeout; int max_rd_atomic_resp; int max_rd_atomic_req; int sq_psn; int rq_psn; int * local_mac_addr; scalar_t__ use_local_mac; int * remote_mac_addr; int mtu; int traffic_class_tos; int vlan_id; int udp_src_port; int dgid; int sgid; int hop_limit_ttl; int flow_label; int dest_qp; int e2e_flow_control_en; int pkey; int roce_mode; int incoming_atomic_en; int incoming_rdma_write_en; int incoming_rdma_read_en; } ;
struct TYPE_6__ {int hw_mac_addr; } ;
struct ecore_hwfn {TYPE_3__ hw_info; TYPE_2__* p_rdma_info; } ;
typedef enum ecore_roce_qp_state { ____Placeholder_ecore_roce_qp_state } ecore_roce_qp_state ;
typedef enum ecore_iwarp_qp_state { ____Placeholder_ecore_iwarp_qp_state } ecore_iwarp_qp_state ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int dscp; scalar_t__ dscp_en; int ecn; scalar_t__ ecn_en; int vlan_pri; scalar_t__ vlan_pri_en; } ;
struct TYPE_5__ {TYPE_1__ glob_cfg; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_rdma_qp*,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_rdma_qp*,int,struct ecore_rdma_modify_qp_in_params*) ;

enum _ecore_status_t FUNC_8(
 void *VAR_23,
 struct ecore_rdma_qp *VAR_24,
 struct ecore_rdma_modify_qp_in_params *VAR_25)
{
 struct ecore_hwfn *VAR_26 = (struct ecore_hwfn *)VAR_23;
 enum ecore_roce_qp_state VAR_27;
 enum _ecore_status_t VAR_28 = VAR_21;

 if (FUNC_1(VAR_25->modify_flags,
        VAR_6))
 {
  VAR_24->incoming_rdma_read_en = VAR_25->incoming_rdma_read_en;
  VAR_24->incoming_rdma_write_en = VAR_25->incoming_rdma_write_en;
  VAR_24->incoming_atomic_en = VAR_25->incoming_atomic_en;
 }


 if (FUNC_1(VAR_25->modify_flags,
        VAR_18))
 {
  VAR_24->roce_mode = VAR_25->roce_mode;
 }
 if (FUNC_1(VAR_25->modify_flags, VAR_15))
 {
  VAR_24->pkey = VAR_25->pkey;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_13))
 {
  VAR_24->e2e_flow_control_en = VAR_25->e2e_flow_control_en;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_12))
 {
  VAR_24->dest_qp = VAR_25->dest_qp;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_11))
 {




  VAR_24->flow_label = VAR_25->flow_label;
  VAR_24->hop_limit_ttl = VAR_25->hop_limit_ttl;

  VAR_24->sgid = VAR_25->sgid;
  VAR_24->dgid = VAR_25->dgid;
  VAR_24->udp_src_port = VAR_25->udp_src_port;
  VAR_24->vlan_id = VAR_25->vlan_id;
  VAR_24->traffic_class_tos = VAR_25->traffic_class_tos;


  if (VAR_26->p_rdma_info->glob_cfg.vlan_pri_en)
   FUNC_4(VAR_24->vlan_id, VAR_9,
      VAR_26->p_rdma_info->glob_cfg.vlan_pri);

  if (VAR_26->p_rdma_info->glob_cfg.ecn_en)
   FUNC_4(VAR_24->traffic_class_tos, VAR_2,
      VAR_26->p_rdma_info->glob_cfg.ecn);

  if (VAR_26->p_rdma_info->glob_cfg.dscp_en)
   FUNC_4(VAR_24->traffic_class_tos, VAR_1,
      VAR_26->p_rdma_info->glob_cfg.dscp);

  VAR_24->mtu = VAR_25->mtu;

  FUNC_3((u8 *)&VAR_24->remote_mac_addr[0],
       (u8 *)&VAR_25->remote_mac_addr[0], VAR_22);
  if (VAR_25->use_local_mac) {
   FUNC_3((u8 *)&VAR_24->local_mac_addr[0],
        (u8 *)&VAR_25->local_mac_addr[0],
        VAR_22);
  } else {
   FUNC_3((u8 *)&VAR_24->local_mac_addr[0],
        (u8 *)&VAR_26->hw_info.hw_mac_addr,
        VAR_22);
  }
 }
 if (FUNC_1(VAR_25->modify_flags, VAR_19))
 {
  VAR_24->rq_psn = VAR_25->rq_psn;
 }
 if (FUNC_1(VAR_25->modify_flags, VAR_20))
 {
  VAR_24->sq_psn = VAR_25->sq_psn;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_3))
 {
  VAR_24->max_rd_atomic_req = VAR_25->max_rd_atomic_req;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_4))
 {
  VAR_24->max_rd_atomic_resp = VAR_25->max_rd_atomic_resp;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_10))
 {
  VAR_24->ack_timeout = VAR_25->ack_timeout;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_16))
 {
  VAR_24->retry_cnt = VAR_25->retry_cnt;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_17))
 {
  VAR_24->rnr_retry_cnt = VAR_25->rnr_retry_cnt;
 }
 if (FUNC_1(VAR_25->modify_flags,
        VAR_14))
 {
  VAR_24->min_rnr_nak_timer = VAR_25->min_rnr_nak_timer;
 }

 VAR_24->sqd_async = VAR_25->sqd_async;

 VAR_27 = VAR_24->cur_state;
 if (FUNC_1(VAR_25->modify_flags,
        VAR_5))
 {
  VAR_24->cur_state = VAR_25->new_state;
  FUNC_0(VAR_26, VAR_0, "qp->cur_state=%d\n",
      VAR_24->cur_state);
 }

 if (VAR_24->qp_type == VAR_7) {
  VAR_24->has_req = 1;
 } else if (VAR_24->qp_type == VAR_8)
 {
  VAR_24->has_resp = 1;
 } else {
  VAR_24->has_req = 1;
  VAR_24->has_resp = 1;
 }

 if (FUNC_2(VAR_26)) {
  enum ecore_iwarp_qp_state VAR_29 =
   FUNC_6(VAR_24->cur_state);

  VAR_28 = FUNC_5(VAR_26, VAR_24, VAR_29, 0);
 } else {
  VAR_28 = FUNC_7(VAR_26, VAR_24, VAR_27, VAR_25);
 }

 FUNC_0(VAR_26, VAR_0, "Modify QP, rc = %d\n", VAR_28);
 return VAR_28;
}
