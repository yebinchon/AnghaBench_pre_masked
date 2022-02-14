
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {void* lo; void* hi; } ;
struct rdma_create_cq_ramrod_data {int toggle_bit; int int_timeout; scalar_t__ cnq_id; void* pbl_num_pages; int pbl_addr; void* max_cqes; int is_two_level_pbl; void* dpi; TYPE_3__ cq_handle; } ;
struct TYPE_5__ {struct rdma_create_cq_ramrod_data rdma_create_cq; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; scalar_t__ cid; } ;
struct ecore_rdma_info {int lock; int cq_map; int proto; } ;
struct ecore_rdma_create_cq_in_params {int int_timeout; scalar_t__ cnq_id; int pbl_num_pages; int pbl_ptr; int cq_size; int pbl_two_level; int dpi; int cq_handle_lo; int cq_handle_hi; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; struct ecore_rdma_info* p_rdma_info; } ;
typedef int init_data ;
typedef enum ecore_rdma_toggle_bit { ____Placeholder_ecore_rdma_toggle_bit } ecore_rdma_toggle_bit ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (struct ecore_hwfn*,int ) ;
 int FUNC_9 (struct ecore_hwfn*,int *,scalar_t__) ;
 int FUNC_10 (struct ecore_hwfn*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (struct ecore_hwfn*,int ) ;
 int FUNC_12 (struct ecore_hwfn*,int *,scalar_t__*) ;
 int FUNC_13 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t FUNC_16(void *VAR_7,
    struct ecore_rdma_create_cq_in_params *VAR_8,
    u16 *VAR_9)
{
 struct ecore_hwfn *VAR_10 = (struct ecore_hwfn *)VAR_7;
 struct ecore_rdma_info *VAR_11 = VAR_10->p_rdma_info;
 struct rdma_create_cq_ramrod_data *VAR_12;
 enum ecore_rdma_toggle_bit VAR_13;
 struct ecore_sp_init_data VAR_14;
 struct ecore_spq_entry *VAR_15;
 enum _ecore_status_t VAR_16;
 u32 VAR_17;

 FUNC_2(VAR_10, VAR_1, "cq_handle = %08x%08x\n",
     VAR_8->cq_handle_hi, VAR_8->cq_handle_lo);


 FUNC_6(&VAR_11->lock);
 VAR_16 = FUNC_12(VAR_10, &VAR_11->cq_map, &VAR_17);
 FUNC_7(&VAR_11->lock);

 if (VAR_16 != VAR_4)
 {
  FUNC_1(VAR_10, 0, "Can't create CQ, rc = %d\n", VAR_16);
  return VAR_16;
 }

 *VAR_9 = (u16)(VAR_17 +
        FUNC_11(
         VAR_10, VAR_11->proto));


 VAR_16 = FUNC_10(VAR_10, VAR_0, *VAR_9);
 if (VAR_16 != VAR_4)
  goto err;


 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.cid = *VAR_9;
 VAR_14.opaque_fid = VAR_10->hw_info.opaque_fid;
 VAR_14.comp_mode = VAR_3;


 VAR_16 = FUNC_14(VAR_10, &VAR_15,
       VAR_6,
       VAR_11->proto, &VAR_14);
 if (VAR_16 != VAR_4)
  goto err;

 VAR_12 = &VAR_15->ramrod.rdma_create_cq;

 VAR_12->cq_handle.hi = FUNC_4(VAR_8->cq_handle_hi);
 VAR_12->cq_handle.lo = FUNC_4(VAR_8->cq_handle_lo);
 VAR_12->dpi = FUNC_3(VAR_8->dpi);
 VAR_12->is_two_level_pbl = VAR_8->pbl_two_level;
 VAR_12->max_cqes = FUNC_4(VAR_8->cq_size);
 FUNC_0(VAR_12->pbl_addr, VAR_8->pbl_ptr);
 VAR_12->pbl_num_pages = FUNC_3(VAR_8->pbl_num_pages);
 VAR_12->cnq_id = (u8)FUNC_8(VAR_10, VAR_2)
   + VAR_8->cnq_id;
 VAR_12->int_timeout = VAR_8->int_timeout;




 VAR_13 = FUNC_13(VAR_10, *VAR_9);

 VAR_12->toggle_bit = VAR_13;

 VAR_16 = FUNC_15(VAR_10, VAR_15, VAR_5);
 if (VAR_16 != VAR_4) {

  FUNC_13(VAR_10, *VAR_9);
  goto err;
 }

 FUNC_2(VAR_10, VAR_1, "Created CQ, rc = %d\n", VAR_16);
 return VAR_16;

err:

 FUNC_6(&VAR_11->lock);
 FUNC_9(VAR_10, &VAR_11->cq_map, VAR_17);
 FUNC_7(&VAR_11->lock);

 FUNC_1(VAR_10, 0, "Create CQ failed, rc = %d\n", VAR_16);

 return VAR_16;
}
