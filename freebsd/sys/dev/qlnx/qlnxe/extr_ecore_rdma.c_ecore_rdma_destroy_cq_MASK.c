
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_destroy_cq_ramrod_data {int output_params_addr; } ;
struct rdma_destroy_cq_output_params {int cnq_num; } ;
struct TYPE_5__ {struct rdma_destroy_cq_ramrod_data rdma_destroy_cq; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct ecore_rdma_destroy_cq_out_params {int num_cq_notif; } ;
struct ecore_rdma_destroy_cq_in_params {int icid; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_3__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int lock; int proto; int cq_map; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,struct rdma_destroy_cq_output_params*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (struct ecore_hwfn*,int *,int) ;
 int FUNC_10 (struct ecore_hwfn*,int ) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t FUNC_13(void *VAR_6,
   struct ecore_rdma_destroy_cq_in_params *VAR_7,
   struct ecore_rdma_destroy_cq_out_params *VAR_8)
{
 struct ecore_hwfn *VAR_9 = (struct ecore_hwfn *)VAR_6;
 struct rdma_destroy_cq_output_params *VAR_10;
 struct rdma_destroy_cq_ramrod_data *VAR_11;
 struct ecore_sp_init_data VAR_12;
 struct ecore_spq_entry *VAR_13;
 dma_addr_t VAR_14;
 enum _ecore_status_t VAR_15 = VAR_1;

 FUNC_2(VAR_9, VAR_0, "icid = %08x\n", VAR_7->icid);

 VAR_10 = (struct rdma_destroy_cq_output_params *)
   FUNC_3(VAR_9->p_dev, &VAR_14,
    sizeof(struct rdma_destroy_cq_output_params));
 if (!VAR_10)
 {
  FUNC_1(VAR_9, 0,
     "ecore destroy cq failed: cannot allocate memory (ramrod)\n");
  return VAR_15;
 }


 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = VAR_7->icid;
 VAR_12.opaque_fid = VAR_9->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_2;


 VAR_15 = FUNC_11(VAR_9, &VAR_13,
       VAR_5,
       VAR_9->p_rdma_info->proto, &VAR_12);
 if (VAR_15 != VAR_3)
  goto err;

 VAR_11 = &VAR_13->ramrod.rdma_destroy_cq;
 FUNC_0(VAR_11->output_params_addr, VAR_14);

 VAR_15 = FUNC_12(VAR_9, VAR_13, VAR_4);
 if (VAR_15 != VAR_3)
  goto err;

 VAR_8->num_cq_notif =
  FUNC_5(VAR_10->cnq_num);

 FUNC_4(VAR_9->p_dev, VAR_10, VAR_14,
          sizeof(struct rdma_destroy_cq_output_params));


 FUNC_7(&VAR_9->p_rdma_info->lock);

 FUNC_9(VAR_9,
         &VAR_9->p_rdma_info->cq_map,
  (VAR_7->icid - FUNC_10(
   VAR_9, VAR_9->p_rdma_info->proto)));

 FUNC_8(&VAR_9->p_rdma_info->lock);

 FUNC_2(VAR_9, VAR_0, "Destroyed CQ, rc = %d\n", VAR_15);
 return VAR_15;

err:
 FUNC_4(VAR_9->p_dev, VAR_10, VAR_14,
          sizeof(struct rdma_destroy_cq_output_params));

 return VAR_15;
}
