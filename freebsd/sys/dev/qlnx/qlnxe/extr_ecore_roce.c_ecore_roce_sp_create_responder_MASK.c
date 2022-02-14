
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_17__ {void* opaque_fid; void* srq_idx; } ;
struct TYPE_14__ {void* lo; void* hi; } ;
struct TYPE_12__ {void* lo; void* hi; } ;
struct roce_create_qp_resp_ramrod_data {int irq_num_pages; scalar_t__ stats_counter_id; TYPE_6__ srq_id; void* vlan_id; int udp_src_port; int local_mac_addr; int remote_mac_addr; void* dpi; void* low_latency_phy_queue; void* regular_latency_phy_queue; void* xrc_domain; void* cq_cid; TYPE_3__ qp_handle_for_cqe; TYPE_1__ qp_handle_for_async; int dst_gid; int src_gid; int irq_pbl_addr; int rq_pbl_addr; void* rq_num_pages; void* pd; void* initial_psn; void* mtu; void* dst_qp_id; void* flow_label; void* p_key; int hop_limit; int traffic_class; int max_ird; scalar_t__ flags; } ;
struct TYPE_11__ {struct roce_create_qp_resp_ramrod_data roce_create_qp_resp; } ;
struct ecore_spq_entry {TYPE_10__ ramrod; } ;
struct ecore_sp_init_data {int cid; int opaque_fid; int comp_mode; } ;
struct TYPE_18__ {scalar_t__ resp; } ;
struct TYPE_15__ {int hi; int lo; } ;
struct TYPE_13__ {int hi; int lo; } ;
struct ecore_rdma_qp {int irq_num_pages; int icid; int incoming_rdma_read_en; int incoming_rdma_write_en; int incoming_atomic_en; int e2e_flow_control_en; int use_srq; int fmr_and_reserved_lkey; int min_rnr_nak_timer; int pkey; int flow_label; int dest_qp; int mtu; int rq_psn; int pd; int rq_num_pages; int rq_cq_id; int xrcd_id; int dpi; int vlan_id; int resp_offloaded; int irq_phys_addr; int irq; TYPE_7__ cq_prod; scalar_t__ stats_queue; int srq_id; int udp_src_port; int local_mac_addr; int remote_mac_addr; TYPE_4__ qp_handle; TYPE_2__ qp_handle_async; int rq_pbl_ptr; int hop_limit_ttl; int traffic_class_tos; int max_rd_atomic_resp; int roce_mode; int qp_idx; int has_resp; } ;
struct TYPE_20__ {int opaque_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_8__* p_rdma_info; TYPE_9__ hw_info; } ;
typedef int init_data ;
typedef enum roce_flavor { ____Placeholder_roce_flavor } roce_flavor ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_16__ {scalar_t__ dcqcn_enabled; } ;
struct TYPE_19__ {int proto; TYPE_5__ roce; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_10 (struct ecore_hwfn*,int ) ;
 int FUNC_11 (struct ecore_hwfn*,int ) ;
 int FUNC_12 (struct ecore_hwfn*,int) ;
 int FUNC_13 (struct ecore_rdma_qp*,int ,int ) ;
 int FUNC_14 (struct ecore_hwfn*,int ,int) ;
 int FUNC_15 (struct ecore_rdma_qp*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_19 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_20 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_21(
 struct ecore_hwfn *VAR_21,
 struct ecore_rdma_qp *VAR_22)
{
 struct roce_create_qp_resp_ramrod_data *VAR_23;
 u16 VAR_24, VAR_25;
 struct ecore_sp_init_data VAR_26;
 enum roce_flavor VAR_27;
 struct ecore_spq_entry *VAR_28;
 enum _ecore_status_t VAR_29;
 u32 VAR_30;
 u16 VAR_31;
 bool VAR_32;

 if (!VAR_22->has_resp)
  return VAR_4;

 FUNC_2(VAR_21, VAR_0, "qp_idx = %08x\n", VAR_22->qp_idx);


 VAR_22->irq_num_pages = 1;
 VAR_22->irq = FUNC_5(VAR_21->p_dev,
       &VAR_22->irq_phys_addr,
       VAR_9);
 if (!VAR_22->irq) {
  VAR_29 = VAR_1;
  FUNC_1(VAR_21, 0,
     "ecore create responder failed: cannot allocate memory (irq). rc = %d\n",
     VAR_29);
  return VAR_29;
 }


 FUNC_7(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.cid = VAR_22->icid;
 VAR_26.opaque_fid = VAR_21->hw_info.opaque_fid;
 VAR_26.comp_mode = VAR_3;

 VAR_29 = FUNC_19(VAR_21, &VAR_28, VAR_20,
       VAR_8, &VAR_26);
 if (VAR_29 != VAR_4)
  goto err;

 VAR_23 = &VAR_28->ramrod.roce_create_qp_resp;

 VAR_23->flags = 0;

 VAR_27 = FUNC_17(VAR_22->roce_mode);
 FUNC_9(VAR_23->flags,
    VAR_16,
    VAR_27);

 FUNC_9(VAR_23->flags,
    VAR_13,
    VAR_22->incoming_rdma_read_en);

 FUNC_9(VAR_23->flags,
    VAR_14,
    VAR_22->incoming_rdma_write_en);

 FUNC_9(VAR_23->flags,
    VAR_10,
    VAR_22->incoming_atomic_en);

 FUNC_9(VAR_23->flags,
    VAR_11,
    VAR_22->e2e_flow_control_en);

 FUNC_9(VAR_23->flags,
    VAR_17,
    VAR_22->use_srq);

 FUNC_9(VAR_23->flags,
    VAR_15,
    VAR_22->fmr_and_reserved_lkey);

 FUNC_9(VAR_23->flags,
    VAR_18,
    FUNC_15(VAR_22));





 FUNC_9(VAR_23->flags,
    VAR_12,
    VAR_22->min_rnr_nak_timer);

 VAR_23->max_ird =
  VAR_22->max_rd_atomic_resp;
 VAR_23->traffic_class = VAR_22->traffic_class_tos;
 VAR_23->hop_limit = VAR_22->hop_limit_ttl;
 VAR_23->irq_num_pages = VAR_22->irq_num_pages;
 VAR_23->p_key = FUNC_3(VAR_22->pkey);
 VAR_23->flow_label = FUNC_4(VAR_22->flow_label);
 VAR_23->dst_qp_id = FUNC_4(VAR_22->dest_qp);
 VAR_23->mtu = FUNC_3(VAR_22->mtu);
 VAR_23->initial_psn = FUNC_4(VAR_22->rq_psn);
 VAR_23->pd = FUNC_3(VAR_22->pd);
 VAR_23->rq_num_pages = FUNC_3(VAR_22->rq_num_pages);
 FUNC_0(VAR_23->rq_pbl_addr, VAR_22->rq_pbl_ptr);
 FUNC_0(VAR_23->irq_pbl_addr, VAR_22->irq_phys_addr);
 FUNC_13(VAR_22, VAR_23->src_gid, VAR_23->dst_gid);
 VAR_23->qp_handle_for_async.hi =
   FUNC_4(VAR_22->qp_handle_async.hi);
 VAR_23->qp_handle_for_async.lo =
   FUNC_4(VAR_22->qp_handle_async.lo);
 VAR_23->qp_handle_for_cqe.hi = FUNC_4(VAR_22->qp_handle.hi);
 VAR_23->qp_handle_for_cqe.lo = FUNC_4(VAR_22->qp_handle.lo);
 VAR_23->cq_cid = FUNC_4((VAR_21->hw_info.opaque_fid << 16) | VAR_22->rq_cq_id);
 VAR_23->xrc_domain = FUNC_3(VAR_22->xrcd_id);
  VAR_24 = FUNC_11(VAR_21, VAR_7);
 VAR_25 = FUNC_11(VAR_21, VAR_6);

 VAR_23->regular_latency_phy_queue = FUNC_3(VAR_24);
 VAR_23->low_latency_phy_queue = FUNC_3(VAR_25);
 VAR_23->dpi = FUNC_3(VAR_22->dpi);

 FUNC_16(VAR_23->remote_mac_addr, VAR_22->remote_mac_addr);
 FUNC_16(VAR_23->local_mac_addr, VAR_22->local_mac_addr);

 VAR_23->udp_src_port = VAR_22->udp_src_port;
 VAR_23->vlan_id = FUNC_3(VAR_22->vlan_id);
 VAR_32 = FUNC_15(VAR_22);
 VAR_31 = FUNC_14(VAR_21, VAR_22->srq_id, VAR_32);
 VAR_23->srq_id.srq_idx = FUNC_3(VAR_31);
 VAR_23->srq_id.opaque_fid = FUNC_3(VAR_21->hw_info.opaque_fid);

 VAR_23->stats_counter_id = FUNC_8(VAR_21, VAR_2) +
         VAR_22->stats_queue;

 VAR_29 = FUNC_20(VAR_21, VAR_28, VAR_5);

 FUNC_2(VAR_21, VAR_0, "rc = %d regular physical queue = 0x%x, low latency physical queue 0x%x\n",
     VAR_29, VAR_24, VAR_25);

 if (VAR_29 != VAR_4)
  goto err;

 VAR_22->resp_offloaded = 1;
 VAR_22->cq_prod.resp = 0;

 VAR_30 = FUNC_10(VAR_21,
        VAR_21->p_rdma_info->proto);
 FUNC_18(VAR_21, VAR_22->icid - VAR_30);

 return VAR_29;

err:
 FUNC_1(VAR_21, 0, "create responder - failed, rc = %d\n", VAR_29);
 FUNC_6(VAR_21->p_dev,
          VAR_22->irq,
          VAR_22->irq_phys_addr,
          VAR_22->irq_num_pages *
          VAR_9);

 return VAR_29;
}
