
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_7__ {void* ooo_tc; } ;
struct ecore_hw_info {void* num_active_tc; } ;
struct ecore_hwfn {TYPE_4__* p_dcbx_info; int rel_pf_id; TYPE_3__ qm_info; struct ecore_hw_info hw_info; } ;
struct ecore_dcbx_results {int dcbx_enabled; int pf_id; int member_0; } ;
struct dcbx_ets_feature {int flags; int * pri_tc_tbl; } ;
struct dcbx_app_priority_feature {int flags; struct dcbx_app_priority_entry* app_pri_tbl; } ;
struct dcbx_app_priority_entry {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {struct dcbx_ets_feature ets; struct dcbx_app_priority_feature app; } ;
struct TYPE_6__ {TYPE_1__ features; int flags; } ;
struct TYPE_8__ {int results; TYPE_2__ operational; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct ecore_dcbx_results*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_dcbx_results*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_dcbx_results*,struct dcbx_app_priority_entry*,int ,int,void*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_5, struct ecore_ptt *VAR_6)
{
 struct dcbx_app_priority_feature *VAR_7;
 struct dcbx_app_priority_entry *VAR_8;
 struct ecore_dcbx_results VAR_9 = { 0 };
 struct dcbx_ets_feature *VAR_10;
 struct ecore_hw_info *VAR_11;
 u32 VAR_12, VAR_13;
 u8 VAR_14;
 int VAR_15;
 enum _ecore_status_t VAR_16 = VAR_4;

 VAR_13 = VAR_5->p_dcbx_info->operational.flags;
 VAR_14 = FUNC_0(VAR_13, VAR_1);

 VAR_7 = &VAR_5->p_dcbx_info->operational.features.app;
 VAR_8 = VAR_7->app_pri_tbl;

 VAR_10 = &VAR_5->p_dcbx_info->operational.features.ets;
 VAR_12 = VAR_10->pri_tc_tbl[0];

 VAR_11 = &VAR_5->hw_info;
 VAR_15 = FUNC_0(VAR_7->flags, VAR_0);

 VAR_16 = FUNC_3(VAR_5, VAR_6, &VAR_9, VAR_8, VAR_12,
        VAR_15, VAR_14);
 if (VAR_16 != VAR_4)
  return VAR_16;

 VAR_11->num_active_tc = FUNC_0(VAR_10->flags, VAR_2);
 VAR_5->qm_info.ooo_tc = FUNC_0(VAR_10->flags, VAR_3);
 VAR_9.pf_id = VAR_5->rel_pf_id;
 VAR_9.dcbx_enabled = !!VAR_14;

 FUNC_2(VAR_5, &VAR_9);

 FUNC_1(&VAR_5->p_dcbx_info->results, &VAR_9,
      sizeof(struct ecore_dcbx_results));

 return VAR_4;
}
