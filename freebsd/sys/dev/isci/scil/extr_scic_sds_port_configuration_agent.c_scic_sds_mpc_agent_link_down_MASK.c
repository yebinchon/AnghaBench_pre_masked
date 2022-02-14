
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phy_ready_mask; int phy_configured_mask; int timer; scalar_t__ timer_pending; } ;
typedef int SCIC_SDS_PORT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static
void FUNC_5(
   SCIC_SDS_CONTROLLER_T * VAR_6,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_7,
   SCIC_SDS_PORT_T * VAR_8,
   SCIC_SDS_PHY_T * VAR_9
)
{
   FUNC_0(*(
      FUNC_1(VAR_6),
      VAR_0 | VAR_2 | VAR_1,
      "scic_sds_mpc_agent_link_down(0x%08x, 0x%08x, 0x%08x, 0x%08x) enter\n",
      VAR_6, VAR_7, VAR_8, VAR_9
   ));

   if (VAR_8 != VAR_4)
   {




      VAR_7->phy_ready_mask &= ~(1 << FUNC_3(VAR_9));
      VAR_7->phy_configured_mask &= ~(1 << FUNC_3(VAR_9));




      if (
            (VAR_7->phy_configured_mask == 0x0000)
         && (VAR_7->phy_ready_mask != 0x0000)
         && !VAR_7->timer_pending
         )
      {
         VAR_7->timer_pending = VAR_5;

         FUNC_2(
            VAR_6,
            VAR_7->timer,
            VAR_3
         );
      }

      FUNC_4(VAR_8, VAR_9);
   }
}
