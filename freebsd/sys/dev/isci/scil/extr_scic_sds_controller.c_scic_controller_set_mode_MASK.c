
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {void* count; } ;
struct TYPE_10__ {TYPE_3__ buffers; } ;
struct TYPE_7__ {scalar_t__ current_state_id; } ;
struct TYPE_8__ {TYPE_1__ state_machine; } ;
struct TYPE_11__ {void* completion_queue_entries; void* completion_event_entries; TYPE_4__ uf_control; void* task_context_entries; void* remote_node_entries; TYPE_2__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_CONTROLLER_MODE ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_5__ SCIC_SDS_CONTROLLER_T ;


 void* FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_5__*) ;

SCI_STATUS FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_16,
   SCI_CONTROLLER_MODE VAR_17
)
{
   SCIC_SDS_CONTROLLER_T *VAR_18 = (SCIC_SDS_CONTROLLER_T*)VAR_16;
   SCI_STATUS VAR_19 = VAR_8;

   FUNC_1((
      FUNC_2(VAR_16),
      VAR_0,
      "scic_controller_set_mode(0x%x, 0x%x) enter\n",
      VAR_16, VAR_17
   ));

   if (
         (VAR_18->parent.state_machine.current_state_id
          == VAR_2)
      || (VAR_18->parent.state_machine.current_state_id
          == VAR_1)
      )
   {
      switch (VAR_17)
      {
      case 128:
         VAR_18->remote_node_entries =
            FUNC_0(VAR_18->remote_node_entries, VAR_5);
         VAR_18->task_context_entries =
            FUNC_0(VAR_18->task_context_entries, VAR_11);
         VAR_18->uf_control.buffers.count =
            FUNC_0(VAR_18->uf_control.buffers.count, VAR_15);
         VAR_18->completion_event_entries =
            FUNC_0(VAR_18->completion_event_entries, VAR_10);
         VAR_18->completion_queue_entries =
            FUNC_0(VAR_18->completion_queue_entries, VAR_9);

         FUNC_3(VAR_18);
      break;

      case 129:
         VAR_18->remote_node_entries =
            FUNC_0(VAR_18->remote_node_entries, VAR_7);
         VAR_18->task_context_entries =
            FUNC_0(VAR_18->task_context_entries, VAR_6);
         VAR_18->uf_control.buffers.count =
            FUNC_0(VAR_18->uf_control.buffers.count, VAR_14);
         VAR_18->completion_event_entries =
            FUNC_0(VAR_18->completion_event_entries, VAR_13);
         VAR_18->completion_queue_entries =
            FUNC_0(VAR_18->completion_queue_entries, VAR_12);

         FUNC_3(VAR_18);
      break;

      default:
         VAR_19 = VAR_3;
      break;
      }
   }
   else
      VAR_19 = VAR_4;

   return VAR_19;
}
