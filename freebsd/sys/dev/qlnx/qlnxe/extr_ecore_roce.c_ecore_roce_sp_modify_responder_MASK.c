
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct roce_modify_qp_resp_ramrod_data {int dst_gid; int src_gid; void* mtu; int flow_label; void* p_key; int hop_limit; int traffic_class; int max_ird; scalar_t__ fields; scalar_t__ flags; } ;
struct TYPE_4__ {struct roce_modify_qp_resp_ramrod_data roce_modify_qp_resp; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct ecore_rdma_qp {int icid; int incoming_rdma_read_en; int incoming_rdma_write_en; int incoming_atomic_en; int e2e_flow_control_en; int min_rnr_nak_timer; int mtu; int flow_label; int pkey; int hop_limit_ttl; int traffic_class_tos; int max_rd_atomic_resp; int resp_offloaded; int has_resp; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_8 ;
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
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (struct ecore_rdma_qp*,int ,int ) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_10(
 struct ecore_hwfn *VAR_22,
 struct ecore_rdma_qp *VAR_23,
 bool VAR_24,
 u32 VAR_25)
{
 struct roce_modify_qp_resp_ramrod_data *VAR_26;
 struct ecore_sp_init_data VAR_27;
 struct ecore_spq_entry *VAR_28;
 enum _ecore_status_t VAR_29;

 if (!VAR_23->has_resp)
  return VAR_7;

 FUNC_1(VAR_22, VAR_0, "icid = %08x\n", VAR_23->icid);

 if (VAR_24 && !VAR_23->resp_offloaded)
  return VAR_7;


 FUNC_5(&VAR_27, 0, sizeof(VAR_27));
 VAR_27.cid = VAR_23->icid;
 VAR_27.opaque_fid = VAR_22->hw_info.opaque_fid;
 VAR_27.comp_mode = VAR_6;

 VAR_29 = FUNC_8(VAR_22, &VAR_28,
       VAR_11,
       VAR_9, &VAR_27);
 if (VAR_29 != VAR_7)
 {
  FUNC_0(VAR_22, 0, "rc = %d\n", VAR_29);
  return VAR_29;
 }

 VAR_26 = &VAR_28->ramrod.roce_modify_qp_resp;

 VAR_26->flags = 0;

 FUNC_6(VAR_26->flags,
    VAR_17,
    VAR_24);

 FUNC_6(VAR_26->flags,
    VAR_20,
    VAR_23->incoming_rdma_read_en);

 FUNC_6(VAR_26->flags,
    VAR_21,
    VAR_23->incoming_rdma_write_en);

 FUNC_6(VAR_26->flags,
    VAR_13,
    VAR_23->incoming_atomic_en);

 FUNC_6(VAR_26->flags,
    VAR_10,
    VAR_23->e2e_flow_control_en);

 FUNC_6(VAR_26->flags,
    VAR_19,
    FUNC_2(VAR_25,
       VAR_2));

 FUNC_6(VAR_26->flags,
    VAR_18,
    FUNC_2(VAR_25, VAR_5));

 FUNC_6(VAR_26->flags,
    VAR_12,
    FUNC_2(VAR_25,
       VAR_3));

 FUNC_6(VAR_26->flags,
    VAR_14,
    FUNC_2(VAR_25,
       VAR_1));






 FUNC_6(VAR_26->flags,
    VAR_16,
    FUNC_2(VAR_25,
       VAR_4));

 VAR_26->fields = 0;
 FUNC_6(VAR_26->fields,
    VAR_15,
    VAR_23->min_rnr_nak_timer);

 VAR_26->max_ird = VAR_23->max_rd_atomic_resp;
 VAR_26->traffic_class = VAR_23->traffic_class_tos;
 VAR_26->hop_limit = VAR_23->hop_limit_ttl;
 VAR_26->p_key = FUNC_3(VAR_23->pkey);
 VAR_26->flow_label = FUNC_4(VAR_23->flow_label);
 VAR_26->mtu = FUNC_3(VAR_23->mtu);
 FUNC_7(VAR_23, VAR_26->src_gid, VAR_26->dst_gid);
 VAR_29 = FUNC_9(VAR_22, VAR_28, VAR_8);

 FUNC_1(VAR_22, VAR_0, "Modify responder, rc = %d\n", VAR_29);
 return VAR_29;
}
