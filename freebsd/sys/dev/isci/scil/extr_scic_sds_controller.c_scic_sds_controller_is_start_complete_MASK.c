
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_16__ {scalar_t__ phy_ready_mask; scalar_t__ phy_configured_mask; } ;
struct TYPE_11__ {scalar_t__ mode_type; } ;
struct TYPE_12__ {TYPE_1__ controller; } ;
struct TYPE_13__ {TYPE_2__ sds1; } ;
struct TYPE_18__ {TYPE_6__ port_agent; TYPE_3__ oem_parameters; TYPE_7__* phy_table; } ;
struct TYPE_14__ {scalar_t__ current_state_id; } ;
struct TYPE_15__ {TYPE_4__ state_machine; } ;
struct TYPE_17__ {scalar_t__ is_in_link_training; TYPE_5__ parent; } ;
typedef TYPE_7__ SCIC_SDS_PHY_T ;
typedef TYPE_8__ SCIC_SDS_CONTROLLER_T ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;

BOOL FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_9
)
{
   U8 VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
   {
      SCIC_SDS_PHY_T *VAR_11 = & VAR_9->phy_table[VAR_10];

      if (
            (
                  VAR_9->oem_parameters.sds1.controller.mode_type
               == VAR_1
            )
         || (
               (
                  VAR_9->oem_parameters.sds1.controller.mode_type
               == VAR_2
               )
            && (FUNC_0(VAR_11) != VAR_6)
            )
         )
      {
        if (
               (
                  (VAR_11->is_in_link_training == VAR_0)
               && (VAR_11->parent.state_machine.current_state_id
                   == VAR_3)
               )
            || (
                  (VAR_11->is_in_link_training == VAR_0)
               && (VAR_11->parent.state_machine.current_state_id
                   == VAR_5)
               )
            || (
                  (VAR_11->is_in_link_training == VAR_8)
               && (VAR_11->parent.state_machine.current_state_id
                   == VAR_4)
               )
            || (
                  VAR_9->port_agent.phy_ready_mask
                  != VAR_9->port_agent.phy_configured_mask
               )
            )
         {
            return VAR_0;
         }
      }
   }

   return VAR_8;
}
