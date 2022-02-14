
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vf_stop_ramrod_data {int vf_id; } ;
struct TYPE_2__ {struct vf_stop_ramrod_data vf_stop; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_hwfn {int dummy; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_7,
          u32 VAR_8,
          u16 VAR_9)
{
 struct vf_stop_ramrod_data *VAR_10 = VAR_4;
 struct ecore_spq_entry *VAR_11 = VAR_4;
 struct ecore_sp_init_data VAR_12;
 enum _ecore_status_t VAR_13 = VAR_1;


 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = FUNC_3(VAR_7);
 VAR_12.opaque_fid = VAR_9;
 VAR_12.comp_mode = VAR_2;

 VAR_13 = FUNC_2(VAR_7, &VAR_11,
       VAR_0,
       VAR_5, &VAR_12);
 if (VAR_13 != VAR_3)
  return VAR_13;

 VAR_10 = &VAR_11->ramrod.vf_stop;

 VAR_10->vf_id = FUNC_0(VAR_8, VAR_6);

 return FUNC_4(VAR_7, VAR_11, VAR_4);
}
