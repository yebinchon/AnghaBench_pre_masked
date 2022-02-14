
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ mode_type; } ;
struct TYPE_14__ {TYPE_1__ controller; } ;
struct TYPE_15__ {TYPE_2__ sds1; } ;
struct TYPE_18__ {TYPE_3__ oem_parameters; } ;
struct TYPE_17__ {int phy_index; int max_negotiated_speed; } ;
struct TYPE_16__ {int active_phy_mask; int enabled_phy_mask; TYPE_8__* owning_controller; } ;
typedef TYPE_4__ SCIC_SDS_PORT_T ;
typedef TYPE_5__ SCIC_SDS_PHY_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_8__*,TYPE_4__*,TYPE_5__*) ;

void FUNC_4(
   SCIC_SDS_PORT_T * VAR_4,
   SCIC_SDS_PHY_T * VAR_5,
   BOOL VAR_6
)
{
   FUNC_0((
      FUNC_2(VAR_4),
      VAR_0,
      "scic_sds_port_deactivate_phy(0x%x,0x%x,0x%x) enter\n",
      VAR_4, VAR_5, VAR_6
   ));

   VAR_4->active_phy_mask &= ~(1 << VAR_5->phy_index);
   VAR_4->enabled_phy_mask &= ~(1 << VAR_5->phy_index);

   VAR_5->max_negotiated_speed = VAR_2;



   if (VAR_4->owning_controller->oem_parameters.sds1.controller.mode_type
       == VAR_1)
   {
   FUNC_1(VAR_4, VAR_5->phy_index, VAR_5->phy_index);
   }

   if (VAR_6 == VAR_3)
      FUNC_3(VAR_4->owning_controller, VAR_4, VAR_5);
}
