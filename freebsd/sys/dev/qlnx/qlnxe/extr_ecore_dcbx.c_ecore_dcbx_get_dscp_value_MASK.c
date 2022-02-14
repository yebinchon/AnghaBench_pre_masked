
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ecore_hwfn {TYPE_2__* p_dcbx_info; } ;
struct ecore_dcbx_dscp_params {size_t* dscp_pri_map; int enabled; } ;
struct TYPE_3__ {struct ecore_dcbx_dscp_params dscp; } ;
struct TYPE_4__ {TYPE_1__ get; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

u8 FUNC_0(struct ecore_hwfn *VAR_2, u8 VAR_3)
{
 struct ecore_dcbx_dscp_params *VAR_4 = &VAR_2->p_dcbx_info->get.dscp;
 u8 VAR_5;

 if (!VAR_4->enabled)
  return VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_3 == VAR_4->dscp_pri_map[VAR_5])
   return VAR_5;

 return VAR_0;
}
