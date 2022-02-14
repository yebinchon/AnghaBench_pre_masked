
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_spq_entry {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_rdma_qp {int icid; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int proto; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_5,
         struct ecore_rdma_qp *VAR_6)
{
 struct ecore_sp_init_data VAR_7;
 struct ecore_spq_entry *VAR_8;
 enum _ecore_status_t VAR_9;


 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cid = VAR_6->icid;
 VAR_7.opaque_fid = VAR_5->hw_info.opaque_fid;
 VAR_7.comp_mode = VAR_1;

 VAR_9 = FUNC_2(VAR_5, &VAR_8,
       VAR_3,
       VAR_5->p_rdma_info->proto,
       &VAR_7);
 if (VAR_9 != VAR_2)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_4);

 FUNC_0(VAR_5, VAR_0, "QP(0x%x) rc = %d\n", VAR_6->icid, VAR_9);

 return VAR_9;
}
