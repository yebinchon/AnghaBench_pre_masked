
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_spq_entry {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_2__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; int p_dev; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ecore_hwfn*,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t FUNC_7(void *VAR_7, u16 VAR_8)
{
 struct ecore_hwfn *VAR_9 = (struct ecore_hwfn *)VAR_7;
 struct ecore_sp_init_data VAR_10;
 struct ecore_spq_entry *VAR_11;
 enum _ecore_status_t VAR_12;

 if (!VAR_7) {
  FUNC_0(VAR_9->p_dev,
         "destroy ud qp failed due to NULL rdma_cxt\n");
  return VAR_0;
 }


 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_8;
 VAR_10.opaque_fid = VAR_9->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_2;
 VAR_12 = FUNC_5(VAR_9, &VAR_11, VAR_6,
       VAR_5, &VAR_10);
 if (VAR_12 != VAR_3)
  goto err;

 VAR_12 = FUNC_6(VAR_9, VAR_11, VAR_4);
 if (VAR_12 != VAR_3)
  goto err;

 FUNC_4(VAR_9, FUNC_2(VAR_8));

 FUNC_1(VAR_9, VAR_1, "freed a ud qp with cid=%d\n", VAR_8);

 return VAR_3;

err:
 FUNC_0(VAR_9, "failed destroying a ud qp with cid=%d\n", VAR_8);

 return VAR_12;
}
