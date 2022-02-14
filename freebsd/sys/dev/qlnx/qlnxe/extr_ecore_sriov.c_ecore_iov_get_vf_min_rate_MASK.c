
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_wfq_data {int min_speed; scalar_t__ configured; } ;
struct ecore_vf_info {size_t vport_id; } ;
struct TYPE_2__ {struct ecore_wfq_data* wfq_data; } ;
struct ecore_hwfn {TYPE_1__ qm_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

enum _ecore_status_t
FUNC_1(struct ecore_hwfn *VAR_0, int VAR_1)
{
 struct ecore_wfq_data *VAR_2;
 struct ecore_vf_info *VAR_3;

 VAR_3 = FUNC_0(VAR_0, (u16)VAR_1, 1);
 if (!VAR_3)
  return 0;

 VAR_2 = &VAR_0->qm_info.wfq_data[VAR_3->vport_id];

 if (VAR_2->configured)
  return VAR_2->min_speed;
 else
  return 0;
}
