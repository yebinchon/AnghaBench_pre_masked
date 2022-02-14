
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_10__ {void* lo; void* hi; } ;
struct TYPE_9__ {void* lo; void* hi; } ;
struct rdma_resize_cq_ramrod_data {TYPE_5__ output_params_addr; TYPE_4__ pbl_addr; int max_cqes; int pbl_num_pages; scalar_t__ pbl_log_page_size; scalar_t__ flags; } ;
struct rdma_resize_cq_output_params {int old_cq_cons; int old_cq_prod; } ;
struct TYPE_8__ {struct rdma_resize_cq_ramrod_data rdma_resize_cq; } ;
struct ecore_spq_entry {TYPE_3__ ramrod; } ;
struct ecore_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct ecore_rdma_resize_cq_out_params {void* cons; void* prod; } ;
struct ecore_rdma_resize_cq_in_params {int icid; int pbl_two_level; int pbl_ptr; int cq_size; int pbl_num_pages; scalar_t__ pbl_page_size_log; } ;
struct TYPE_6__ {int opaque_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_2__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum ecore_rdma_toggle_bit { ____Placeholder_ecore_rdma_toggle_bit } ecore_rdma_toggle_bit ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;
struct TYPE_7__ {int proto; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_3 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,struct rdma_resize_cq_output_params*,int ,int) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (scalar_t__,int ,int) ;
 int FUNC_11 (struct ecore_hwfn*,int) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_spq_entry*,scalar_t__*) ;

enum _ecore_status_t FUNC_14(void *VAR_10,
   struct ecore_rdma_resize_cq_in_params *VAR_11,
   struct ecore_rdma_resize_cq_out_params *VAR_12)
{
 enum _ecore_status_t VAR_13;
 enum ecore_rdma_toggle_bit VAR_14;
 struct ecore_spq_entry *VAR_15;
 struct rdma_resize_cq_ramrod_data *VAR_16;
 u8 VAR_17;
 struct ecore_hwfn *VAR_18 = (struct ecore_hwfn *)VAR_10;
 dma_addr_t VAR_19;
 struct rdma_resize_cq_output_params *VAR_20;
 struct ecore_sp_init_data VAR_21;

 FUNC_3(VAR_18, VAR_0, "icid = %08x\n", VAR_11->icid);



 VAR_20 = (struct rdma_resize_cq_output_params *)
   FUNC_6(VAR_18->p_dev, &VAR_19,
    sizeof(*VAR_20));
 if (!VAR_20)
 {
  VAR_13 = VAR_1;
  FUNC_2(VAR_18, 0,
     "ecore resize cq failed: cannot allocate memory (ramrod). rc = %d\n",
     VAR_13);
  return VAR_13;
 }


 FUNC_9(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.cid = VAR_11->icid;
 VAR_21.opaque_fid = VAR_18->hw_info.opaque_fid;
 VAR_21.comp_mode = VAR_2;

 VAR_13 = FUNC_12(VAR_18, &VAR_15,
       VAR_5,
       VAR_18->p_rdma_info->proto, &VAR_21);
 if (VAR_13 != VAR_3)
  goto err;

 VAR_16 = &VAR_15->ramrod.rdma_resize_cq;

 VAR_16->flags = 0;


 VAR_14 = FUNC_11(VAR_18,
           VAR_11->icid);

 FUNC_10(VAR_16->flags,
    VAR_7,
    VAR_14);

 FUNC_10(VAR_16->flags,
    VAR_6,
    VAR_11->pbl_two_level);

 VAR_16->pbl_log_page_size = VAR_11->pbl_page_size_log - 12;
 VAR_16->pbl_num_pages = FUNC_4(VAR_11->pbl_num_pages);
 VAR_16->max_cqes = FUNC_5(VAR_11->cq_size);
 VAR_16->pbl_addr.hi = FUNC_0(VAR_11->pbl_ptr);
 VAR_16->pbl_addr.lo = FUNC_1(VAR_11->pbl_ptr);

 VAR_16->output_params_addr.hi = FUNC_0(VAR_19);
 VAR_16->output_params_addr.lo = FUNC_1(VAR_19);

 VAR_13 = FUNC_13(VAR_18, VAR_15, &VAR_17);
 if (VAR_13 != VAR_3)
  goto err;

 if (VAR_17 != VAR_8)
 {
  FUNC_2(VAR_18, VAR_17 != VAR_9,
     "fw_return_code = %d\n", VAR_17);
  FUNC_2(VAR_18,
     1, "fw_return_code = %d\n", VAR_17);
  VAR_13 = VAR_4;
  goto err;
 }

 VAR_12->prod = FUNC_8(VAR_20->old_cq_prod);
 VAR_12->cons = FUNC_8(VAR_20->old_cq_cons);

 FUNC_7(VAR_18->p_dev, VAR_20, VAR_19,
          sizeof(*VAR_20));

 FUNC_3(VAR_18, VAR_0, "rc = %d\n", VAR_13);

 return VAR_13;

err:
 FUNC_7(VAR_18->p_dev, VAR_20, VAR_19,
          sizeof(*VAR_20));
 FUNC_2(VAR_18, 0, "rc = %d\n", VAR_13);

 return VAR_13;
}
