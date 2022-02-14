
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int update_enable_stag_pri_change; int enable_stag_pri_change; } ;
struct TYPE_12__ {TYPE_5__ pf_update; } ;
struct ecore_spq_entry {TYPE_6__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_8__ {scalar_t__ pri_type; } ;
struct TYPE_7__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_4__* p_dcbx_info; TYPE_2__ ufp_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_9__ {scalar_t__ dcbx_enabled; } ;
struct TYPE_10__ {TYPE_3__ results; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ecore_sp_init_data*,int ,int) ;
 struct ecore_spq_entry* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry*,struct ecore_spq_entry*) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_9)
{
 struct ecore_spq_entry *VAR_10 = VAR_7;
 struct ecore_sp_init_data VAR_11;
 enum _ecore_status_t VAR_12 = VAR_2;

 if (VAR_9->ufp_info.pri_type == VAR_6) {
  FUNC_0(VAR_9, "Invalid priority type %d\n",
   VAR_9->ufp_info.pri_type);
  return VAR_1;
 }


 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cid = FUNC_3(VAR_9);
 VAR_11.opaque_fid = VAR_9->hw_info.opaque_fid;
 VAR_11.comp_mode = VAR_3;

 VAR_12 = FUNC_2(VAR_9, &VAR_10,
       VAR_0, VAR_8,
       &VAR_11);
 if (VAR_12 != VAR_4)
  return VAR_12;

 VAR_10->ramrod.pf_update.update_enable_stag_pri_change = 1;
 if ((VAR_9->ufp_info.pri_type == VAR_5) ||
     (VAR_9->p_dcbx_info->results.dcbx_enabled))
  VAR_10->ramrod.pf_update.enable_stag_pri_change = 1;
 else
  VAR_10->ramrod.pf_update.enable_stag_pri_change = 0;

 return FUNC_4(VAR_9, VAR_10, VAR_7);
}
