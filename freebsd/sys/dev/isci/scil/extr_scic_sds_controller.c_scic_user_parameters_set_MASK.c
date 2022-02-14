
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_9__ {scalar_t__ current_state_id; } ;
struct TYPE_10__ {TYPE_1__ state_machine; } ;
struct TYPE_14__ {int user_parameters; TYPE_2__ parent; } ;
struct TYPE_12__ {scalar_t__ stp_inactivity_timeout; scalar_t__ ssp_inactivity_timeout; scalar_t__ stp_max_occupancy_timeout; scalar_t__ ssp_max_occupancy_timeout; scalar_t__ no_outbound_task_timeout; TYPE_3__* phys; } ;
struct TYPE_13__ {TYPE_4__ sds1; } ;
struct TYPE_11__ {scalar_t__ max_speed_generation; int in_connection_align_insertion_frequency; scalar_t__ align_insertion_frequency; scalar_t__ notify_enable_spin_up_insertion_frequency; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_5__ SCIC_USER_PARAMETERS_T ;
typedef TYPE_6__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,TYPE_5__*,int) ;

SCI_STATUS FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_9,
   SCIC_USER_PARAMETERS_T * VAR_10
)
{
   SCIC_SDS_CONTROLLER_T * VAR_11 = (SCIC_SDS_CONTROLLER_T*)VAR_9;

   if (
         (VAR_11->parent.state_machine.current_state_id
          == VAR_4)
      || (VAR_11->parent.state_machine.current_state_id
          == VAR_3)
      || (VAR_11->parent.state_machine.current_state_id
          == VAR_2)
      )
   {
      U16 VAR_12;



      for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
      {
         if (!
               ( VAR_10->sds1.phys[VAR_12].max_speed_generation
                  <= VAR_0
               && VAR_10->sds1.phys[VAR_12].max_speed_generation
                  > VAR_1
               )
            )
            return VAR_5;

         if (
               (VAR_10->sds1.phys[VAR_12].in_connection_align_insertion_frequency < 3) ||
               (VAR_10->sds1.phys[VAR_12].align_insertion_frequency == 0) ||
               (VAR_10->sds1.phys[VAR_12].notify_enable_spin_up_insertion_frequency == 0)
            )
         {
            return VAR_5;
         }
      }

      if (
            (VAR_10->sds1.stp_inactivity_timeout == 0) ||
            (VAR_10->sds1.ssp_inactivity_timeout == 0) ||
            (VAR_10->sds1.stp_max_occupancy_timeout == 0) ||
            (VAR_10->sds1.ssp_max_occupancy_timeout == 0) ||
            (VAR_10->sds1.no_outbound_task_timeout == 0)
         )
      {
         return VAR_5;
      }

      FUNC_0(
         (&VAR_11->user_parameters), VAR_10, sizeof(*VAR_10));

      return VAR_8;
   }

   return VAR_6;
}
