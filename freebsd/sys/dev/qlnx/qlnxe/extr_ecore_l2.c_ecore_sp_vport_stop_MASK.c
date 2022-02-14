
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct vport_stop_ramrod_data {int vport_id; } ;
struct TYPE_2__ {struct vport_stop_ramrod_data vport_stop; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_hwfn {int p_dev; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ecore_hwfn*,int ,int *) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;
 int FUNC_6 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_7(struct ecore_hwfn *VAR_5,
       u16 VAR_6,
       u8 VAR_7)
{
 struct vport_stop_ramrod_data *VAR_8;
 struct ecore_sp_init_data VAR_9;
 struct ecore_spq_entry *VAR_10;
 u8 VAR_11 = 0;
 enum _ecore_status_t VAR_12;

 if (FUNC_0(VAR_5->p_dev))
  return FUNC_6(VAR_5);

 VAR_12 = FUNC_2(VAR_5, VAR_7, &VAR_11);
 if (VAR_12 != VAR_1)
  return VAR_12;


 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cid = FUNC_4(VAR_5);
 VAR_9.opaque_fid = VAR_6;
 VAR_9.comp_mode = VAR_0;

 VAR_12 = FUNC_3(VAR_5, &VAR_10,
       VAR_2,
       VAR_4, &VAR_9);
 if (VAR_12 != VAR_1)
  return VAR_12;

 VAR_8 = &VAR_10->ramrod.vport_stop;
 VAR_8->vport_id = VAR_11;

 return FUNC_5(VAR_5, VAR_10, VAR_3);
}
