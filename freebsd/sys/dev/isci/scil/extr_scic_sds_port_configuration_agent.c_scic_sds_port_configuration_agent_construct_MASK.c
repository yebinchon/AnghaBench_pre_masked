
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_5__ {int phy_configured_mask; int phy_ready_mask; TYPE_1__* phy_valid_port_range; int * timer; int timer_pending; int * link_down_handler; int * link_up_handler; } ;
struct TYPE_4__ {scalar_t__ max_index; scalar_t__ min_index; } ;
typedef TYPE_2__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;


 int VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_2
)
{
   U32 VAR_3;

   VAR_2->phy_configured_mask = 0x00;
   VAR_2->phy_ready_mask = 0x00;

   VAR_2->link_up_handler = ((void*)0);
   VAR_2->link_down_handler = ((void*)0);

   VAR_2->timer_pending = VAR_0;
   VAR_2->timer = ((void*)0);

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      VAR_2->phy_valid_port_range[VAR_3].min_index = 0;
      VAR_2->phy_valid_port_range[VAR_3].max_index = 0;
   }
}
