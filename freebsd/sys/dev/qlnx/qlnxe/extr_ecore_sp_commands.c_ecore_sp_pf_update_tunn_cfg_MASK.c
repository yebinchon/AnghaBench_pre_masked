
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ecore_tunnel_info {int dummy; } ;
struct TYPE_7__ {int tunnel_config; } ;
struct TYPE_8__ {TYPE_2__ pf_update; } ;
struct ecore_spq_entry {TYPE_3__ ramrod; } ;
struct ecore_spq_comp_cb {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; struct ecore_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_6__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_4__* p_dev; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_9__ {int tunnel; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct ecore_sp_init_data*,int ,int) ;
 struct ecore_spq_entry* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_spq_entry*,struct ecore_spq_entry*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_tunnel_info*,int *) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_tunnel_info*) ;

enum _ecore_status_t
FUNC_10(struct ecore_hwfn *VAR_6,
       struct ecore_ptt *VAR_7,
       struct ecore_tunnel_info *VAR_8,
       enum spq_mode VAR_9,
       struct ecore_spq_comp_cb *VAR_10)
{
 struct ecore_spq_entry *VAR_11 = VAR_4;
 struct ecore_sp_init_data VAR_12;
 enum _ecore_status_t VAR_13 = VAR_2;

 if (FUNC_2(VAR_6->p_dev))
  return FUNC_9(VAR_6, VAR_8);

 if (FUNC_1(VAR_6->p_dev)) {
  FUNC_0(VAR_6, 1,
     "A0 chip: tunnel pf update config is not supported\n");
  return VAR_13;
 }

 if (!VAR_8)
  return VAR_1;


 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = FUNC_6(VAR_6);
 VAR_12.opaque_fid = VAR_6->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_9;
 VAR_12.p_comp_data = VAR_10;

 VAR_13 = FUNC_5(VAR_6, &VAR_11,
       VAR_0, VAR_5,
       &VAR_12);
 if (VAR_13 != VAR_3)
  return VAR_13;

 FUNC_8(VAR_6, VAR_8,
     &VAR_11->ramrod.pf_update.tunnel_config);

 VAR_13 = FUNC_7(VAR_6, VAR_11, VAR_4);
 if (VAR_13 != VAR_3)
  return VAR_13;

 FUNC_4(VAR_6, VAR_7, &VAR_6->p_dev->tunnel);

 return VAR_13;
}
