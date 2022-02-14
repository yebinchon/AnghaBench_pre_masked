
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef int U16 ;
struct TYPE_6__ {int phy_configured_mask; int phy_ready_mask; int (* link_up_handler ) (TYPE_2__*,TYPE_1__*,int ,int *) ;int timer_pending; } ;
struct TYPE_7__ {int * phy_table; TYPE_1__ port_agent; } ;
typedef TYPE_1__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ,int *) ;

__attribute__((used)) static
void FUNC_4(
   void * VAR_4
)
{
   U8 VAR_5;
   SCIC_SDS_CONTROLLER_T * VAR_6 = (SCIC_SDS_CONTROLLER_T *)VAR_4;
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_7 = &VAR_6->port_agent;
   U16 VAR_8;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_1 | VAR_2,
      "scic_sds_mpc_agent_timeout_handler(0x%08x) enter\n",
      VAR_6
   ));

   VAR_7->timer_pending = VAR_0;


   VAR_8 = ~VAR_7->phy_configured_mask & VAR_7->phy_ready_mask;

   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   {
      if (VAR_8 & (1 << VAR_5))
      {
         VAR_7->link_up_handler(
                        VAR_6,
                        VAR_7,
                        FUNC_2(&VAR_6->phy_table[VAR_5]),
                        &VAR_6->phy_table[VAR_5]
                     );
      }
   }
}
