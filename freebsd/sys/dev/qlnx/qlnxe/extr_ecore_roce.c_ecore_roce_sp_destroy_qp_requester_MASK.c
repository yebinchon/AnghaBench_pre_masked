
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct roce_destroy_qp_req_ramrod_data {int output_params_addr; } ;
struct roce_destroy_qp_req_output_params {int cq_prod; int num_bound_mw; } ;
struct TYPE_5__ {struct roce_destroy_qp_req_ramrod_data roce_destroy_qp_req; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct TYPE_6__ {int req; } ;
struct ecore_rdma_qp {int icid; int req_offloaded; int orq_num_pages; int orq_phys_addr; struct roce_destroy_qp_req_output_params* orq; TYPE_3__ cq_prod; int has_req; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,struct roce_destroy_qp_req_output_params*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_9(
 struct ecore_hwfn *VAR_8,
 struct ecore_rdma_qp *VAR_9,
 u32 *VAR_10,
 u32 *VAR_11)
{
 struct roce_destroy_qp_req_output_params *VAR_12;
 struct roce_destroy_qp_req_ramrod_data *VAR_13;
 struct ecore_sp_init_data VAR_14;
 struct ecore_spq_entry *VAR_15;
 dma_addr_t VAR_16;
 enum _ecore_status_t VAR_17;

 if (!VAR_9->has_req) {
  *VAR_10 = 0;
  *VAR_11 = 0;
  return VAR_3;
 }

 FUNC_2(VAR_8, VAR_0, "icid = %08x\n", VAR_9->icid);

 if (!VAR_9->req_offloaded) {
  *VAR_11 = VAR_9->cq_prod.req;
  return VAR_3;
 }

 VAR_12 = (struct roce_destroy_qp_req_output_params *)
   FUNC_3(VAR_8->p_dev, &VAR_16,
    sizeof(*VAR_12));
 if (!VAR_12)
 {
  FUNC_1(VAR_8, 0,
     "ecore destroy requester failed: cannot allocate memory (ramrod)\n");
  return VAR_1;
 }


 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.cid = VAR_9->icid + 1;
 VAR_14.opaque_fid = VAR_8->hw_info.opaque_fid;
 VAR_14.comp_mode = VAR_2;

 VAR_17 = FUNC_7(VAR_8, &VAR_15, VAR_7,
       VAR_5, &VAR_14);
 if (VAR_17 != VAR_3)
  goto err;

 VAR_13 = &VAR_15->ramrod.roce_destroy_qp_req;
 FUNC_0(VAR_13->output_params_addr, VAR_16);

 VAR_17 = FUNC_8(VAR_8, VAR_15, VAR_4);
 if (VAR_17 != VAR_3)
  goto err;

 *VAR_10 = FUNC_5(VAR_12->num_bound_mw);
 *VAR_11 = FUNC_5(VAR_12->cq_prod);
 VAR_9->cq_prod.req = *VAR_11;


 FUNC_4(VAR_8->p_dev,
          VAR_9->orq,
          VAR_9->orq_phys_addr,
          VAR_9->orq_num_pages *
          VAR_6);

 VAR_9->req_offloaded = 0;

 FUNC_2(VAR_8, VAR_0, "Destroy requester, rc = %d\n", VAR_17);



err:
 FUNC_4(VAR_8->p_dev, VAR_12, VAR_16,
          sizeof(*VAR_12));

 return VAR_17;
}
