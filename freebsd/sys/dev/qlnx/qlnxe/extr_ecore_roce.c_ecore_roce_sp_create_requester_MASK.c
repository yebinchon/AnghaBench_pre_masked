
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_14__ {void* lo; void* hi; } ;
struct TYPE_12__ {void* lo; void* hi; } ;
struct roce_create_qp_req_ramrod_data {int orq_num_pages; scalar_t__ stats_counter_id; void* vlan_id; int udp_src_port; int local_mac_addr; int remote_mac_addr; void* dpi; void* low_latency_phy_queue; void* regular_latency_phy_queue; void* cq_cid; TYPE_5__ qp_handle_for_cqe; TYPE_3__ qp_handle_for_async; int dst_gid; int src_gid; int orq_pbl_addr; int sq_pbl_addr; void* sq_num_pages; void* pd; void* initial_psn; void* mtu; void* ack_timeout_val; void* dst_qp_id; void* flow_label; void* p_key; int hop_limit; int traffic_class; int max_ord; scalar_t__ flags; } ;
struct TYPE_11__ {struct roce_create_qp_req_ramrod_data roce_create_qp_req; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int cid; int opaque_fid; int comp_mode; } ;
struct TYPE_10__ {scalar_t__ req; } ;
struct TYPE_15__ {int hi; int lo; } ;
struct TYPE_13__ {int hi; int lo; } ;
struct ecore_rdma_qp {int icid; int orq_num_pages; int fmr_and_reserved_lkey; int signal_all; int retry_cnt; int rnr_retry_cnt; int flow_label; int dest_qp; int ack_timeout; int sq_psn; int sq_cq_id; int req_offloaded; int orq_phys_addr; int orq; TYPE_1__ cq_prod; scalar_t__ stats_queue; int vlan_id; int udp_src_port; int local_mac_addr; int remote_mac_addr; int dpi; TYPE_6__ qp_handle; TYPE_4__ qp_handle_async; int sq_pbl_ptr; int sq_num_pages; int pd; int mtu; int pkey; int hop_limit_ttl; int traffic_class_tos; int max_rd_atomic_req; int roce_mode; int has_req; } ;
struct TYPE_16__ {int opaque_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_9__* p_rdma_info; TYPE_7__ hw_info; } ;
typedef int init_data ;
typedef enum roce_flavor { ____Placeholder_roce_flavor } roce_flavor ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_17__ {scalar_t__ dcqcn_enabled; } ;
struct TYPE_18__ {int proto; TYPE_8__ roce; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (struct ecore_hwfn*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_10 (struct ecore_hwfn*,int ) ;
 int FUNC_11 (struct ecore_hwfn*,int ) ;
 int FUNC_12 (struct ecore_hwfn*,int) ;
 int FUNC_13 (struct ecore_rdma_qp*,int ,int ) ;
 int FUNC_14 (struct ecore_rdma_qp*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_18 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_19 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_20(
 struct ecore_hwfn *VAR_18,
 struct ecore_rdma_qp *VAR_19)
{
 struct roce_create_qp_req_ramrod_data *VAR_20;
 u16 VAR_21, VAR_22;
 struct ecore_sp_init_data VAR_23;
 enum roce_flavor VAR_24;
 struct ecore_spq_entry *VAR_25;
 enum _ecore_status_t VAR_26;
 u32 VAR_27;

 if (!VAR_19->has_req)
  return VAR_4;

 FUNC_2(VAR_18, VAR_0, "icid = %08x\n", VAR_19->icid);


 VAR_19->orq_num_pages = 1;
 VAR_19->orq = FUNC_5(VAR_18->p_dev,
       &VAR_19->orq_phys_addr,
       VAR_9);
 if (!VAR_19->orq)
 {
  VAR_26 = VAR_1;
  FUNC_1(VAR_18, 0,
     "ecore create requester failed: cannot allocate memory (orq). rc = %d\n",
     VAR_26);
  return VAR_26;
 }


 FUNC_7(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.cid = VAR_19->icid + 1;
 VAR_23.opaque_fid = VAR_18->hw_info.opaque_fid;
 VAR_23.comp_mode = VAR_3;

 VAR_26 = FUNC_18(VAR_18, &VAR_25,
       VAR_17,
       VAR_8, &VAR_23);
 if (VAR_26 != VAR_4)
  goto err;

 VAR_20 = &VAR_25->ramrod.roce_create_qp_req;

 VAR_20->flags = 0;

 VAR_24 = FUNC_16(VAR_19->roce_mode);
 FUNC_9(VAR_20->flags,
    VAR_13,
    VAR_24);

 FUNC_9(VAR_20->flags,
    VAR_11,
    VAR_19->fmr_and_reserved_lkey);

 FUNC_9(VAR_20->flags,
    VAR_14,
    VAR_19->signal_all);






 FUNC_9(VAR_20->flags,
    VAR_10,
    VAR_19->retry_cnt);

 FUNC_9(VAR_20->flags,
    VAR_12,
    VAR_19->rnr_retry_cnt);

 FUNC_9(VAR_20->flags,
    VAR_15,
    FUNC_14(VAR_19));

 VAR_20->max_ord = VAR_19->max_rd_atomic_req;
 VAR_20->traffic_class = VAR_19->traffic_class_tos;
 VAR_20->hop_limit = VAR_19->hop_limit_ttl;
 VAR_20->orq_num_pages = VAR_19->orq_num_pages;
 VAR_20->p_key = FUNC_3(VAR_19->pkey);
 VAR_20->flow_label = FUNC_4(VAR_19->flow_label);
 VAR_20->dst_qp_id = FUNC_4(VAR_19->dest_qp);
 VAR_20->ack_timeout_val = FUNC_4(VAR_19->ack_timeout);
 VAR_20->mtu = FUNC_3(VAR_19->mtu);
 VAR_20->initial_psn = FUNC_4(VAR_19->sq_psn);
 VAR_20->pd = FUNC_3(VAR_19->pd);
 VAR_20->sq_num_pages = FUNC_3(VAR_19->sq_num_pages);
 FUNC_0(VAR_20->sq_pbl_addr, VAR_19->sq_pbl_ptr);
 FUNC_0(VAR_20->orq_pbl_addr, VAR_19->orq_phys_addr);
 FUNC_13(VAR_19, VAR_20->src_gid, VAR_20->dst_gid);
 VAR_20->qp_handle_for_async.hi =
   FUNC_4(VAR_19->qp_handle_async.hi);
 VAR_20->qp_handle_for_async.lo =
   FUNC_4(VAR_19->qp_handle_async.lo);
 VAR_20->qp_handle_for_cqe.hi = FUNC_4(VAR_19->qp_handle.hi);
 VAR_20->qp_handle_for_cqe.lo = FUNC_4(VAR_19->qp_handle.lo);
 VAR_20->cq_cid = FUNC_4((VAR_18->hw_info.opaque_fid << 16) |
           VAR_19->sq_cq_id);
  VAR_21 = FUNC_11(VAR_18, VAR_7);
 VAR_22 = FUNC_11(VAR_18, VAR_6);

 VAR_20->regular_latency_phy_queue = FUNC_3(VAR_21);
 VAR_20->low_latency_phy_queue = FUNC_3(VAR_22);
 VAR_20->dpi = FUNC_3(VAR_19->dpi);

 FUNC_15(VAR_20->remote_mac_addr, VAR_19->remote_mac_addr);
 FUNC_15(VAR_20->local_mac_addr, VAR_19->local_mac_addr);

 VAR_20->udp_src_port = VAR_19->udp_src_port;
 VAR_20->vlan_id = FUNC_3(VAR_19->vlan_id);
 VAR_20->stats_counter_id = FUNC_8(VAR_18, VAR_2) +
         VAR_19->stats_queue;

 VAR_26 = FUNC_19(VAR_18, VAR_25, VAR_5);

 FUNC_2(VAR_18, VAR_0, "rc = %d\n", VAR_26);

 if (VAR_26 != VAR_4)
  goto err;

 VAR_19->req_offloaded = 1;
 VAR_19->cq_prod.req = 0;

 VAR_27 = FUNC_10(VAR_18,
        VAR_18->p_rdma_info->proto);
 FUNC_17(VAR_18, VAR_19->icid + 1 - VAR_27);

 return VAR_26;

err:
 FUNC_1(VAR_18, 0, "Create requested - failed, rc = %d\n", VAR_26);
 FUNC_6(VAR_18->p_dev,
          VAR_19->orq,
          VAR_19->orq_phys_addr,
          VAR_19->orq_num_pages *
          VAR_9);
 return VAR_26;
}
