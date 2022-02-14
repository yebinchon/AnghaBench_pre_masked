
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_spq_entry {int dummy; } ;
struct ecore_sp_init_data {int cid; int comp_mode; int opaque_fid; } ;
struct ecore_rdma_create_qp_out_params {int icid; int qp_id; } ;
struct TYPE_2__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; int p_dev; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int ,char*,void*,struct ecore_rdma_create_qp_out_params*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ecore_hwfn*,int*) ;
 int FUNC_5 (struct ecore_hwfn*,int) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t FUNC_8(void *VAR_7,
   struct ecore_rdma_create_qp_out_params *VAR_8)
{
 struct ecore_hwfn *VAR_9 = (struct ecore_hwfn *)VAR_7;
 struct ecore_sp_init_data VAR_10;
 struct ecore_spq_entry *VAR_11;
 enum _ecore_status_t VAR_12;
 u16 VAR_13, VAR_14;

 if (!VAR_7 || !VAR_8) {
  FUNC_0(VAR_9->p_dev,
         "ecore roce create ud qp failed due to NULL entry (rdma_cxt=%p, out=%p)\n",
         VAR_7, VAR_8);
  return VAR_0;
 }

 VAR_12 = FUNC_4(VAR_9, &VAR_14);
 if (VAR_12 != VAR_3)
  goto err;

 VAR_13 = FUNC_2(VAR_14);


 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_13;
 VAR_10.opaque_fid = VAR_9->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_2;
 VAR_12 = FUNC_6(VAR_9, &VAR_11, VAR_6,
       VAR_5, &VAR_10);
 if (VAR_12 != VAR_3)
  goto err1;

 VAR_12 = FUNC_7(VAR_9, VAR_11, VAR_4);
 if (VAR_12 != VAR_3)
  goto err1;

 VAR_8->icid = VAR_13;
 VAR_8->qp_id = ((0xFF << 16) | VAR_13);

 FUNC_1(VAR_9, VAR_1, "created a ud qp with icid=%d\n",
     VAR_13);

 return VAR_3;

err1:
 FUNC_5(VAR_9, VAR_14);

err:
 FUNC_1(VAR_9, VAR_1, "failed creating a ud qp\n");

 return VAR_12;
}
