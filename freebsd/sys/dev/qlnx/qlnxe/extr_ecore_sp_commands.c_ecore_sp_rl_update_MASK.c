
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rl_update_ramrod_data {void* qcn_timeuot_us; void* dcqcn_timeuot_us; void* dcqcn_k_us; void* dcqcn_g; void* rl_r_hai; void* rl_r_ai; void* rl_max_rate; void* rl_bc_rate; int rl_dc_qcn_flg; int rl_id_last; int rl_id_first; int rl_stop_flg; int rl_start_flg; int rl_init_flg; int dcqcn_update_param_flg; int qcn_update_param_flg; } ;
struct TYPE_4__ {struct rl_update_ramrod_data rl_update; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_rl_update_params {int qcn_timeuot_us; int dcqcn_timeuot_us; int dcqcn_k_us; int dcqcn_gd; int rl_r_hai; int rl_r_ai; int rl_max_rate; int rl_bc_rate; int rl_dc_qcn_flg; int rl_id_last; int rl_id_first; int rl_stop_flg; int rl_start_flg; int rl_init_flg; int dcqcn_update_param_flg; int qcn_update_param_flg; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,void*,void*,void*,void*,void*,void*,void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_sp_init_data*,int ,int) ;
 struct ecore_spq_entry* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ecore_hwfn*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry*,struct ecore_spq_entry*) ;

enum _ecore_status_t FUNC_9(struct ecore_hwfn *VAR_7,
     struct ecore_rl_update_params *VAR_8)
{
 struct ecore_spq_entry *VAR_9 = VAR_5;
 enum _ecore_status_t VAR_10 = VAR_2;
 struct rl_update_ramrod_data *VAR_11;
 struct ecore_sp_init_data VAR_12;


 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = FUNC_7(VAR_7);
 VAR_12.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_3;

 VAR_10 = FUNC_4(VAR_7, &VAR_9,
       VAR_0, VAR_6,
       &VAR_12);
 if (VAR_10 != VAR_4)
  return VAR_10;

 VAR_11 = &VAR_9->ramrod.rl_update;

 VAR_11->qcn_update_param_flg = VAR_8->qcn_update_param_flg;
 VAR_11->dcqcn_update_param_flg = VAR_8->dcqcn_update_param_flg;
 VAR_11->rl_init_flg = VAR_8->rl_init_flg;
 VAR_11->rl_start_flg = VAR_8->rl_start_flg;
 VAR_11->rl_stop_flg = VAR_8->rl_stop_flg;
 VAR_11->rl_id_first = VAR_8->rl_id_first;
 VAR_11->rl_id_last = VAR_8->rl_id_last;
 VAR_11->rl_dc_qcn_flg = VAR_8->rl_dc_qcn_flg;
 VAR_11->rl_bc_rate = FUNC_2(VAR_8->rl_bc_rate);
 VAR_11->rl_max_rate = FUNC_1(FUNC_6(VAR_8->rl_max_rate));
 VAR_11->rl_r_ai = FUNC_1(FUNC_6(VAR_8->rl_r_ai));
 VAR_11->rl_r_hai = FUNC_1(FUNC_6(VAR_8->rl_r_hai));
 VAR_11->dcqcn_g = FUNC_1(FUNC_5(VAR_8->dcqcn_gd));
 VAR_11->dcqcn_k_us = FUNC_2(VAR_8->dcqcn_k_us);
 VAR_11->dcqcn_timeuot_us = FUNC_2(VAR_8->dcqcn_timeuot_us);
 VAR_11->qcn_timeuot_us = FUNC_2(VAR_8->qcn_timeuot_us);

 FUNC_0(VAR_7, VAR_1, "rl_params: qcn_update_param_flg %x, dcqcn_update_param_flg %x, rl_init_flg %x, rl_start_flg %x, rl_stop_flg %x, rl_id_first %x, rl_id_last %x, rl_dc_qcn_flg %x, rl_bc_rate %x, rl_max_rate %x, rl_r_ai %x, rl_r_hai %x, dcqcn_g %x, dcqcn_k_us %x, dcqcn_timeuot_us %x, qcn_timeuot_us %x\n",
     VAR_11->qcn_update_param_flg, VAR_11->dcqcn_update_param_flg,
     VAR_11->rl_init_flg, VAR_11->rl_start_flg,
     VAR_11->rl_stop_flg, VAR_11->rl_id_first,
     VAR_11->rl_id_last, VAR_11->rl_dc_qcn_flg,
     VAR_11->rl_bc_rate, VAR_11->rl_max_rate,
     VAR_11->rl_r_ai, VAR_11->rl_r_hai,
     VAR_11->dcqcn_g, VAR_11->dcqcn_k_us,
     VAR_11->dcqcn_timeuot_us, VAR_11->qcn_timeuot_us);

 return FUNC_8(VAR_7, VAR_9, VAR_5);
}
