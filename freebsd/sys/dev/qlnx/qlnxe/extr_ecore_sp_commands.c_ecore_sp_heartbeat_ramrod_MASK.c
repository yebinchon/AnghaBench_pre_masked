
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_spq_entry {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_2__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_sp_init_data*,int ,int) ;
 struct ecore_spq_entry* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry*,struct ecore_spq_entry*) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_5)
{
 struct ecore_spq_entry *VAR_6 = VAR_3;
 struct ecore_sp_init_data VAR_7;
 enum _ecore_status_t VAR_8;


 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cid = FUNC_2(VAR_5);
 VAR_7.opaque_fid = VAR_5->hw_info.opaque_fid;
 VAR_7.comp_mode = VAR_1;

 VAR_8 = FUNC_1(VAR_5, &VAR_6,
       VAR_0, VAR_4,
       &VAR_7);
 if (VAR_8 != VAR_2)
  return VAR_8;

 return FUNC_3(VAR_5, VAR_6, VAR_3);
}
