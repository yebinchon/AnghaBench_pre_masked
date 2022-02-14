
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U16 ;
struct TYPE_3__ {int sat_protocol; int post_context; int * owning_controller; int * task_context_buffer; void* was_tag_assigned_by_user; void* is_task_management_request; scalar_t__ scu_status; int sci_status; int device_sequence; int saved_rx_frame_index; int protocol; void* has_started_substate_machine; int * target_device; void* user_request; scalar_t__ io_tag; int parent; } ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;

__attribute__((used)) static
void FUNC_4(
   SCIC_SDS_CONTROLLER_T * VAR_7,
   SCIC_SDS_REMOTE_DEVICE_T * VAR_8,
   U16 VAR_9,
   void * VAR_10,
   SCIC_SDS_REQUEST_T * VAR_11
)
{
   FUNC_1(
      &VAR_11->parent,
      FUNC_0(VAR_7),
      VAR_6
   );

   VAR_11->io_tag = VAR_9;
   VAR_11->user_request = VAR_10;
   VAR_11->owning_controller = VAR_7;
   VAR_11->target_device = VAR_8;
   VAR_11->has_started_substate_machine = VAR_0;
   VAR_11->protocol = VAR_1;
   VAR_11->sat_protocol = 0xFF;
   VAR_11->saved_rx_frame_index = VAR_4;
   VAR_11->device_sequence = FUNC_3(VAR_8);

   VAR_11->sci_status = VAR_3;
   VAR_11->scu_status = 0;
   VAR_11->post_context = 0xFFFFFFFF;

   VAR_11->is_task_management_request = VAR_0;

   if (VAR_9 == VAR_2)
   {
      VAR_11->was_tag_assigned_by_user = VAR_0;
      VAR_11->task_context_buffer = ((void*)0);
   }
   else
   {
      VAR_11->was_tag_assigned_by_user = VAR_5;

      VAR_11->task_context_buffer =
         FUNC_2(
            VAR_11->owning_controller, VAR_9);
   }
}
