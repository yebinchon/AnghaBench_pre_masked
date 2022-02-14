
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int phy_ready_mask; } ;
struct TYPE_11__ {scalar_t__ current_state_id; } ;
struct TYPE_10__ {TYPE_2__ state_machine; } ;
struct TYPE_12__ {TYPE_1__ parent; } ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;
typedef TYPE_4__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_4__*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;

__attribute__((used)) static
void FUNC_6(
   SCIC_SDS_CONTROLLER_T * VAR_6,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_7,
   SCIC_SDS_PORT_T * VAR_8,
   SCIC_SDS_PHY_T * VAR_9
)
{
   FUNC_1(*(
      FUNC_2(VAR_6),
      VAR_0 | VAR_2 | VAR_1,
      "scic_sds_apc_agent_link_up(0x%08x, 0x%08x, 0x%08x, 0x%08x) enter\n",
      VAR_6, VAR_7, VAR_8, VAR_9
   ));


   if (VAR_8 == VAR_5)
   {
      VAR_7->phy_ready_mask |= (1 << FUNC_4(VAR_9));

      FUNC_3(
         VAR_6, VAR_7, VAR_9, VAR_3
      );
   }
   else
   {




      if ( VAR_4
            == VAR_8->parent.state_machine.current_state_id
         )
      {

         VAR_7->phy_ready_mask |= (1 << FUNC_4(VAR_9));
         FUNC_5(VAR_8, VAR_9);
      }
      else
      {
         FUNC_0 (0);
      }
   }
}
