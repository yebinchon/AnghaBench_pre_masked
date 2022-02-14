
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int update_mf_vlan_flag; int mf_vlan; } ;
struct TYPE_5__ {TYPE_1__ pf_update; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_6__ {int ovlan; int opaque_fid; } ;
struct ecore_hwfn {TYPE_3__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_sp_init_data*,int ,int) ;
 struct ecore_spq_entry* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry*,struct ecore_spq_entry*) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_6)
{
 struct ecore_spq_entry *VAR_7 = VAR_4;
 struct ecore_sp_init_data VAR_8;
 enum _ecore_status_t VAR_9 = VAR_1;


 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cid = FUNC_3(VAR_6);
 VAR_8.opaque_fid = VAR_6->hw_info.opaque_fid;
 VAR_8.comp_mode = VAR_2;

 VAR_9 = FUNC_2(VAR_6, &VAR_7,
       VAR_0, VAR_5,
       &VAR_8);
 if (VAR_9 != VAR_3)
  return VAR_9;

 VAR_7->ramrod.pf_update.update_mf_vlan_flag = 1;
 VAR_7->ramrod.pf_update.mf_vlan = FUNC_0(VAR_6->hw_info.ovlan);

 return FUNC_4(VAR_6, VAR_7, VAR_4);
}
