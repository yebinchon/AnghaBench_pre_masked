
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int phy_ready_mask; int phy_configured_mask; } ;
struct TYPE_7__ {int active_phy_mask; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static
void FUNC_4(
   SCIC_SDS_CONTROLLER_T * VAR_4,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_5,
   SCIC_SDS_PORT_T * VAR_6,
   SCIC_SDS_PHY_T * VAR_7
)
{
   FUNC_0(*(
      FUNC_1(VAR_4),
      VAR_0 | VAR_2 | VAR_1,
      "scic_sds_mpc_agent_link_up(0x%08x, 0x%08x, 0x%08x, 0x%08x) enter\n",
      VAR_4, VAR_5, VAR_6, VAR_7
   ));




   if (VAR_6 != VAR_3)
   {
      VAR_5->phy_ready_mask |= (1 << FUNC_2(VAR_7));

      FUNC_3(VAR_6, VAR_7);

      if ((VAR_6->active_phy_mask & (1 << FUNC_2(VAR_7))) != 0)
      {
         VAR_5->phy_configured_mask |= (1 << FUNC_2(VAR_7));
      }
   }
}
