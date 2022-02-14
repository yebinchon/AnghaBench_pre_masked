
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_spq_entry {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_queue_cid {int opaque_fid; int cid; } ;
struct ecore_hwfn {int dummy; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_sp_init_data*,int ,int) ;
 struct ecore_spq_entry* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry*,struct ecore_spq_entry*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_5,
      struct ecore_queue_cid *VAR_6)
{
 struct ecore_spq_entry *VAR_7 = VAR_3;
 struct ecore_sp_init_data VAR_8;
 enum _ecore_status_t VAR_9;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cid = VAR_6->cid;
 VAR_8.opaque_fid = VAR_6->opaque_fid;
 VAR_8.comp_mode = VAR_0;

 VAR_9 = FUNC_1(VAR_5, &VAR_7,
       VAR_2,
       VAR_4, &VAR_8);
 if (VAR_9 != VAR_1)
  return VAR_9;

 return FUNC_2(VAR_5, VAR_7, VAR_3);
}
