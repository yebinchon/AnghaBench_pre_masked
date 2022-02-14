
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct roce_modify_qp_req_ramrod_data {int dst_gid; int src_gid; void* mtu; void* ack_timeout_val; void* flow_label; void* p_key; int hop_limit; int traffic_class; int max_ord; scalar_t__ fields; scalar_t__ flags; } ;
struct TYPE_4__ {struct roce_modify_qp_req_ramrod_data roce_modify_qp_req; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct ecore_rdma_qp {int icid; int sqd_async; int retry_cnt; int rnr_retry_cnt; int mtu; int ack_timeout; int flow_label; int pkey; int hop_limit_ttl; int traffic_class_tos; int max_rd_atomic_req; int req_offloaded; int has_req; } ;
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
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct ecore_sp_init_data*,int ,int) ;
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
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (struct ecore_rdma_qp*,int ,int ) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_10(
 struct ecore_hwfn *VAR_23,
 struct ecore_rdma_qp *VAR_24,
 bool VAR_25,
 bool VAR_26,
 u32 VAR_27)
{
 struct roce_modify_qp_req_ramrod_data *VAR_28;
 struct ecore_sp_init_data VAR_29;
 struct ecore_spq_entry *VAR_30;
 enum _ecore_status_t VAR_31;

 if (!VAR_24->has_req)
  return VAR_8;

 FUNC_1(VAR_23, VAR_0, "icid = %08x\n", VAR_24->icid);

 if (VAR_26 && !(VAR_24->req_offloaded))
  return VAR_8;


 FUNC_5(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.cid = VAR_24->icid + 1;
 VAR_29.opaque_fid = VAR_23->hw_info.opaque_fid;
 VAR_29.comp_mode = VAR_7;

 VAR_31 = FUNC_8(VAR_23, &VAR_30,
       VAR_11,
       VAR_10, &VAR_29);
 if (VAR_31 != VAR_8) {
  FUNC_0(VAR_23, 0, "rc = %d\n", VAR_31);
  return VAR_31;
 }

 VAR_28 = &VAR_30->ramrod.roce_modify_qp_req;

 VAR_28->flags = 0;

 FUNC_6(VAR_28->flags,
    VAR_18,
    VAR_26);

 FUNC_6(VAR_28->flags,
    VAR_19,
    VAR_25);

 FUNC_6(VAR_28->flags,
    VAR_14,
    VAR_24->sqd_async);

 FUNC_6(VAR_28->flags,
    VAR_20,
    FUNC_2(VAR_27, VAR_4));

 FUNC_6(VAR_28->flags,
    VAR_13,
    FUNC_2(VAR_27,
       VAR_3));

 FUNC_6(VAR_28->flags,
    VAR_17,
    FUNC_2(VAR_27,
       VAR_1));

 FUNC_6(VAR_28->flags,
    VAR_22,
    FUNC_2(VAR_27,
       VAR_6));

 FUNC_6(VAR_28->flags,
    VAR_16,
    FUNC_2(VAR_27,
       VAR_5));

 FUNC_6(VAR_28->flags,
    VAR_12,
    FUNC_2(VAR_27,
       VAR_2));






 VAR_28->fields = 0;
 FUNC_6(VAR_28->fields,
    VAR_15,
    VAR_24->retry_cnt);

 FUNC_6(VAR_28->fields,
    VAR_21,
    VAR_24->rnr_retry_cnt);

 VAR_28->max_ord = VAR_24->max_rd_atomic_req;
 VAR_28->traffic_class = VAR_24->traffic_class_tos;
 VAR_28->hop_limit = VAR_24->hop_limit_ttl;
 VAR_28->p_key = FUNC_3(VAR_24->pkey);
 VAR_28->flow_label = FUNC_4(VAR_24->flow_label);
 VAR_28->ack_timeout_val = FUNC_4(VAR_24->ack_timeout);
 VAR_28->mtu = FUNC_3(VAR_24->mtu);
 FUNC_7(VAR_24, VAR_28->src_gid, VAR_28->dst_gid);
 VAR_31 = FUNC_9(VAR_23, VAR_30, VAR_9);

 FUNC_1(VAR_23, VAR_0, "Modify requester, rc = %d\n", VAR_31);
 return VAR_31;
}
