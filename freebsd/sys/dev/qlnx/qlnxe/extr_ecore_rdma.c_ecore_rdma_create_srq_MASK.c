
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct TYPE_11__ {void* srq_idx; void* opaque_fid; } ;
struct TYPE_10__ {void* lo; void* hi; } ;
struct TYPE_9__ {void* lo; void* hi; } ;
struct rdma_srq_create_ramrod_data {void* xrc_domain; int xrc_srq_cq_cid; int flags; TYPE_5__ srq_id; TYPE_4__ producers_addr; void* page_size; void* pd_id; void* pages_in_srq_pbl; TYPE_3__ pbl_base_addr; } ;
struct TYPE_8__ {struct rdma_srq_create_ramrod_data rdma_create_srq; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; void* opaque_fid; } ;
struct ecore_rdma_create_srq_out_params {void* srq_id; } ;
struct ecore_rdma_create_srq_in_params {void* num_pages; void* pd_id; void* page_size; int reserved_key_en; void* xrcd_id; scalar_t__ is_xrc; int cq_cid; int prod_pair_addr; int pbl_base_addr; } ;
struct TYPE_7__ {void* opaque_fid; } ;
struct ecore_hwfn {TYPE_6__* p_rdma_info; TYPE_1__ hw_info; } ;
struct ecore_bmap {int dummy; } ;
typedef int init_data ;
typedef enum ecore_cxt_elem_type { ____Placeholder_ecore_cxt_elem_type } ecore_cxt_elem_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_12__ {int lock; int proto; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,int ,char*,void*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_bmap*,scalar_t__) ;
 int FUNC_11 (struct ecore_hwfn*,int,scalar_t__) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_bmap*,scalar_t__*) ;
 void* FUNC_13 (struct ecore_hwfn*,void*,scalar_t__) ;
 struct ecore_bmap* FUNC_14 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t
FUNC_17(void *VAR_9,
        struct ecore_rdma_create_srq_in_params *VAR_10,
        struct ecore_rdma_create_srq_out_params *VAR_11)
{
 struct ecore_hwfn *VAR_12 = (struct ecore_hwfn *)VAR_9;
 struct rdma_srq_create_ramrod_data *VAR_13;
 struct ecore_sp_init_data VAR_14;
 enum ecore_cxt_elem_type VAR_15;
 struct ecore_spq_entry *VAR_16;
 u16 VAR_17, VAR_18;
 struct ecore_bmap *VAR_19;
 u32 VAR_20;
 enum _ecore_status_t VAR_21;


 VAR_19 = FUNC_14(VAR_12, VAR_10->is_xrc);
 FUNC_7(&VAR_12->p_rdma_info->lock);
 VAR_21 = FUNC_12(VAR_12, VAR_19, &VAR_20);
 FUNC_8(&VAR_12->p_rdma_info->lock);

 if (VAR_21 != VAR_4) {
  FUNC_2(VAR_12, 0,
     "failed to allocate xrc/srq id (is_xrc=%u)\n",
     VAR_10->is_xrc);
  return VAR_21;
 }

 VAR_15 = (VAR_10->is_xrc) ? (VAR_1) : (VAR_0);
 VAR_21 = FUNC_11(VAR_12, VAR_15, VAR_20);
 if (VAR_21 != VAR_4)
  goto err;

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_17 = VAR_12->hw_info.opaque_fid;
 VAR_14.opaque_fid = VAR_17;
 VAR_14.comp_mode = VAR_3;


 VAR_21 = FUNC_15(VAR_12, &VAR_16,
       VAR_6,
       VAR_12->p_rdma_info->proto, &VAR_14);
 if (VAR_21 != VAR_4)
  goto err;

 VAR_13 = &VAR_16->ramrod.rdma_create_srq;

 VAR_13->pbl_base_addr.hi = FUNC_0(VAR_10->pbl_base_addr);
 VAR_13->pbl_base_addr.lo = FUNC_1(VAR_10->pbl_base_addr);
 VAR_13->pages_in_srq_pbl = FUNC_4(VAR_10->num_pages);
 VAR_13->pd_id = FUNC_4(VAR_10->pd_id);
 VAR_13->srq_id.opaque_fid = FUNC_4(VAR_17);
 VAR_13->page_size = FUNC_4(VAR_10->page_size);
 VAR_13->producers_addr.hi = FUNC_0(VAR_10->prod_pair_addr);
 VAR_13->producers_addr.lo = FUNC_1(VAR_10->prod_pair_addr);
 VAR_18 = FUNC_13(VAR_12, (u16) VAR_20,
          VAR_10->is_xrc);
 VAR_13->srq_id.srq_idx = FUNC_4(VAR_18);

 if (VAR_10->is_xrc) {
  FUNC_9(VAR_13->flags,
     VAR_8,
     1);
  FUNC_9(VAR_13->flags,
     VAR_7,
     VAR_10->reserved_key_en);
  VAR_13->xrc_srq_cq_cid = FUNC_5(VAR_10->cq_cid);
  VAR_13->xrc_domain = FUNC_4(VAR_10->xrcd_id);
 }

 VAR_21 = FUNC_16(VAR_12, VAR_16, VAR_5);

 if (VAR_21 != VAR_4)
  goto err;

 VAR_11->srq_id = (u16)VAR_20;

 FUNC_3(VAR_12, VAR_2, "XRC/SRQ created Id = %x (is_xrc=%u)\n",
     VAR_11->srq_id, VAR_10->is_xrc);
 return VAR_21;

err:
 FUNC_7(&VAR_12->p_rdma_info->lock);
 FUNC_10(VAR_12, VAR_19, VAR_20);
 FUNC_8(&VAR_12->p_rdma_info->lock);

 return VAR_21;
}
