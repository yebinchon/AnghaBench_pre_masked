
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int phy_index; } ;
struct TYPE_7__ {int phy_ready_mask; int phy_configured_mask; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCIC_SDS_PORT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static
void FUNC_4(
   SCIC_SDS_CONTROLLER_T * VAR_5,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_6,
   SCIC_SDS_PORT_T * VAR_7,
   SCIC_SDS_PHY_T * VAR_8
)
{
   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0 | VAR_2 | VAR_1,
      "scic_sds_apc_agent_link_down(0x%08x, 0x%08x, 0x%08x, 0x%08x) enter\n",
      VAR_5, VAR_6, VAR_7, VAR_8
   ));

   VAR_6->phy_ready_mask &= ~(1 << FUNC_2(VAR_8));

   if (VAR_7 != VAR_3)
   {
      if (VAR_6->phy_configured_mask & (1 << VAR_8->phy_index))
      {
         SCI_STATUS VAR_9;

         VAR_9 = FUNC_3(VAR_7, VAR_8);

         if (VAR_9 == VAR_4)
         {
            VAR_6->phy_configured_mask &= ~(1 << VAR_8->phy_index);
         }
      }
   }
}
