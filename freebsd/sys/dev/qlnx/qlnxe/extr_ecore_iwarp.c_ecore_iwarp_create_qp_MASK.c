
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {void* lo; void* hi; } ;
struct iwarp_create_qp_ramrod_data {void* physical_q1; void* physical_q0; void* dpi; void* cq_cid_for_rq; void* cq_cid_for_sq; TYPE_2__ qp_handle_for_cqe; int rq_num_pages; int sq_num_pages; int pd; int flags; } ;
struct TYPE_5__ {struct iwarp_create_qp_ramrod_data iwarp_create_qp; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int opaque_fid; int comp_mode; scalar_t__ cid; } ;
struct TYPE_7__ {int hi; int lo; } ;
struct ecore_rdma_qp {int shared_queue_phys_addr; int sq_cq_id; int rq_cq_id; scalar_t__ shared_queue; scalar_t__ dpi; TYPE_3__ qp_handle; int rq_num_pages; int sq_num_pages; int pd; int use_srq; int incoming_atomic_en; int incoming_rdma_write_en; int incoming_rdma_read_en; int signal_all; int fmr_and_reserved_lkey; scalar_t__ icid; } ;
struct ecore_rdma_create_qp_out_params {int sq_pbl_phys; int rq_pbl_phys; int * rq_pbl_virt; int * sq_pbl_virt; } ;
struct TYPE_8__ {int opaque_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_4__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (int ,scalar_t__,int,int ) ;
 int FUNC_5 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct ecore_hwfn*,int ) ;
 int FUNC_8 (struct ecore_hwfn*,scalar_t__*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t
FUNC_11(struct ecore_hwfn *VAR_17,
        struct ecore_rdma_qp *VAR_18,
        struct ecore_rdma_create_qp_out_params *VAR_19)
{
 struct iwarp_create_qp_ramrod_data *VAR_20;
 struct ecore_sp_init_data VAR_21;
 struct ecore_spq_entry *VAR_22;
 enum _ecore_status_t VAR_23;
 u16 VAR_24;
 u32 VAR_25;

 VAR_18->shared_queue =
  FUNC_3(VAR_17->p_dev,
     &VAR_18->shared_queue_phys_addr,
     VAR_11);
 if (!VAR_18->shared_queue) {
  FUNC_0(VAR_17, 0,
     "ecore iwarp create qp failed: cannot allocate memory (shared queue).\n");
  return VAR_0;
 } else {
  VAR_19->sq_pbl_virt = (u8 *)VAR_18->shared_queue +
   VAR_12;
  VAR_19->sq_pbl_phys = VAR_18->shared_queue_phys_addr +
   VAR_12;
  VAR_19->rq_pbl_virt = (u8 *)VAR_18->shared_queue +
   VAR_10;
  VAR_19->rq_pbl_phys = VAR_18->shared_queue_phys_addr +
   VAR_10;
 }

 VAR_23 = FUNC_8(VAR_17, &VAR_25);
 if (VAR_23 != VAR_2)
  goto err1;

 VAR_18->icid = (u16)VAR_25;

 FUNC_5(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.opaque_fid = VAR_17->hw_info.opaque_fid;
 VAR_21.cid = VAR_18->icid;
 VAR_21.comp_mode = VAR_1;

 VAR_23 = FUNC_9(VAR_17, &VAR_22,
       VAR_9,
       VAR_16, &VAR_21);
 if (VAR_23 != VAR_2)
  return VAR_23;

 VAR_20 = &VAR_22->ramrod.iwarp_create_qp;

 FUNC_6(VAR_20->flags,
    VAR_4,
    VAR_18->fmr_and_reserved_lkey);

 FUNC_6(VAR_20->flags,
    VAR_7,
    VAR_18->signal_all);

 FUNC_6(VAR_20->flags,
    VAR_5,
    VAR_18->incoming_rdma_read_en);

 FUNC_6(VAR_20->flags,
    VAR_6,
    VAR_18->incoming_rdma_write_en);

 FUNC_6(VAR_20->flags,
    VAR_3,
    VAR_18->incoming_atomic_en);

 FUNC_6(VAR_20->flags,
    VAR_8,
    VAR_18->use_srq);

 VAR_20->pd = VAR_18->pd;
 VAR_20->sq_num_pages = VAR_18->sq_num_pages;
 VAR_20->rq_num_pages = VAR_18->rq_num_pages;

 VAR_20->qp_handle_for_cqe.hi = FUNC_2(VAR_18->qp_handle.hi);
 VAR_20->qp_handle_for_cqe.lo = FUNC_2(VAR_18->qp_handle.lo);

 VAR_20->cq_cid_for_sq =
  FUNC_2((VAR_17->hw_info.opaque_fid << 16) |
     VAR_18->sq_cq_id);
 VAR_20->cq_cid_for_rq =
  FUNC_2((VAR_17->hw_info.opaque_fid << 16) |
     VAR_18->rq_cq_id);

 VAR_20->dpi = FUNC_1(VAR_18->dpi);

 VAR_24 = FUNC_7(VAR_17, VAR_15);
 VAR_20->physical_q0 = FUNC_1(VAR_24);
 VAR_24 = FUNC_7(VAR_17, VAR_14);
 VAR_20->physical_q1 = FUNC_1(VAR_24);

 VAR_23 = FUNC_10(VAR_17, VAR_22, VAR_13);

 if (VAR_23 != VAR_2)
  goto err1;

 return VAR_23;

err1:
 FUNC_4(VAR_17->p_dev,
          VAR_18->shared_queue,
          VAR_18->shared_queue_phys_addr,
          VAR_11);

 return VAR_23;
}
