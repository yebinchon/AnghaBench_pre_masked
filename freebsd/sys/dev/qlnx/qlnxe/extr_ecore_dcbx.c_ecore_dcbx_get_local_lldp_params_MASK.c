
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lldp_config_params_s {int local_port_id; int local_chassis_id; } ;
struct ecore_hwfn {TYPE_1__* p_dcbx_info; } ;
struct TYPE_4__ {int local_port_id; int local_chassis_id; } ;
struct ecore_dcbx_get {TYPE_2__ lldp_local; } ;
struct TYPE_3__ {struct lldp_config_params_s* lldp_local; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_1,
          struct ecore_dcbx_get *VAR_2)
{
 struct lldp_config_params_s *VAR_3;

 VAR_3 = &VAR_1->p_dcbx_info->lldp_local[VAR_0];

 FUNC_0(VAR_2->lldp_local.local_chassis_id,
      VAR_3->local_chassis_id,
      sizeof(VAR_2->lldp_local.local_chassis_id));
 FUNC_0(VAR_2->lldp_local.local_port_id, VAR_3->local_port_id,
      sizeof(VAR_2->lldp_local.local_port_id));
}
