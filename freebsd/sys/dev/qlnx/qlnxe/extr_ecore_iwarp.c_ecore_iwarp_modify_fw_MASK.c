
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwarp_modify_qp_ramrod_data {int transition_to_state; int flags; } ;
struct TYPE_6__ {struct iwarp_modify_qp_ramrod_data iwarp_modify_qp; } ;
struct ecore_spq_entry {TYPE_3__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_rdma_qp {scalar_t__ iwarp_state; int icid; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {int proto; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_9,
        struct ecore_rdma_qp *VAR_10)
{
 struct iwarp_modify_qp_ramrod_data *VAR_11;
 struct ecore_sp_init_data VAR_12;
 struct ecore_spq_entry *VAR_13;
 enum _ecore_status_t VAR_14;


 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = VAR_10->icid;
 VAR_12.opaque_fid = VAR_9->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_2;

 VAR_14 = FUNC_3(VAR_9, &VAR_13,
       VAR_7,
       VAR_9->p_rdma_info->proto,
       &VAR_12);
 if (VAR_14 != VAR_3)
  return VAR_14;

 VAR_11 = &VAR_13->ramrod.iwarp_modify_qp;
 FUNC_2(VAR_11->flags, VAR_4,
    0x1);
 if (VAR_10->iwarp_state == VAR_0)
  VAR_11->transition_to_state = VAR_5;
 else
  VAR_11->transition_to_state = VAR_6;

 VAR_14 = FUNC_4(VAR_9, VAR_13, VAR_8);

 FUNC_0(VAR_9, VAR_1, "QP(0x%x)rc=%d\n",
     VAR_10->icid, VAR_14);

 return VAR_14;
}
