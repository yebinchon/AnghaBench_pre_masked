
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protocol_dcb_data {int dcb_dont_add_vlan0; int dscp_val; int dscp_enable_flag; int dcb_tc; int dcb_priority; int dcb_enable_flag; } ;
struct ecore_dcbx_results {TYPE_1__* arr; } ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
struct TYPE_2__ {int dont_add_vlan0; int dscp_val; int dscp_enable; int tc; int priority; int enable; } ;



__attribute__((used)) static void FUNC_0(struct protocol_dcb_data *VAR_0,
         struct ecore_dcbx_results *VAR_1,
         enum dcbx_protocol_type VAR_2)
{
 VAR_0->dcb_enable_flag = VAR_1->arr[VAR_2].enable;
 VAR_0->dcb_priority = VAR_1->arr[VAR_2].priority;
 VAR_0->dcb_tc = VAR_1->arr[VAR_2].tc;
 VAR_0->dscp_enable_flag = VAR_1->arr[VAR_2].dscp_enable;
 VAR_0->dscp_val = VAR_1->arr[VAR_2].dscp_val;
 VAR_0->dcb_dont_add_vlan0 = VAR_1->arr[VAR_2].dont_add_vlan0;
}
