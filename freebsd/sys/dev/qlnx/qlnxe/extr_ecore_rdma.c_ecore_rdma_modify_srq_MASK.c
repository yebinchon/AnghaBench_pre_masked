
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {void* opaque_fid; void* srq_idx; } ;
struct rdma_srq_modify_ramrod_data {void* wqe_limit; TYPE_4__ srq_id; } ;
struct TYPE_6__ {struct rdma_srq_modify_ramrod_data rdma_modify_srq; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; } ;
struct ecore_rdma_modify_srq_in_params {int is_xrc; int srq_id; int wqe_limit; } ;
struct TYPE_7__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_3__ hw_info; TYPE_1__* p_rdma_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {int proto; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t
FUNC_6(void *VAR_5,
        struct ecore_rdma_modify_srq_in_params *VAR_6)
{
 struct ecore_hwfn *VAR_7 = (struct ecore_hwfn *)VAR_5;
 struct rdma_srq_modify_ramrod_data *VAR_8;
 struct ecore_sp_init_data VAR_9;
 struct ecore_spq_entry *VAR_10;
 u16 VAR_11, VAR_12;
 enum _ecore_status_t VAR_13;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_9.comp_mode = VAR_1;

 VAR_13 = FUNC_4(VAR_7, &VAR_10,
       VAR_4,
       VAR_7->p_rdma_info->proto, &VAR_9);
 if (VAR_13 != VAR_2)
  return VAR_13;

 VAR_8 = &VAR_10->ramrod.rdma_modify_srq;

 VAR_12 = FUNC_3(VAR_7, VAR_6->srq_id,
          VAR_6->is_xrc);
 VAR_8->srq_id.srq_idx = FUNC_1(VAR_12);
 VAR_11 = VAR_7->hw_info.opaque_fid;
 VAR_8->srq_id.opaque_fid = FUNC_1(VAR_11);
 VAR_8->wqe_limit = FUNC_1(VAR_6->wqe_limit);

 VAR_13 = FUNC_5(VAR_7, VAR_10, VAR_3);
 if (VAR_13 != VAR_2)
  return VAR_13;

 FUNC_0(VAR_7, VAR_0, "modified SRQ id = %x, is_xrc=%u\n",
     VAR_6->srq_id, VAR_6->is_xrc);

 return VAR_13;
}
