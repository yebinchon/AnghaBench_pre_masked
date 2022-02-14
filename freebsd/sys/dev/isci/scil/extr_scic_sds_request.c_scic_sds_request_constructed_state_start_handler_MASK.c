
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int state_machine; } ;
struct TYPE_11__ {scalar_t__ io_tag; scalar_t__ was_tag_assigned_by_user; TYPE_3__ parent; int post_context; int owning_controller; TYPE_4__* task_context_buffer; } ;
struct TYPE_7__ {scalar_t__ tag; int target_port_transfer_tag; } ;
struct TYPE_8__ {TYPE_1__ ssp; } ;
struct TYPE_10__ {int protocol_type; TYPE_2__ type; int task_index; } ;
typedef TYPE_4__ SCU_TASK_CONTEXT_T ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_5__ SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_REQUEST_T *VAR_5
)
{
   SCU_TASK_CONTEXT_T *VAR_6;
   SCIC_SDS_REQUEST_T *VAR_7 = (SCIC_SDS_REQUEST_T *)VAR_5;

   if (VAR_7->io_tag == VAR_2)
   {
      VAR_7->io_tag =
         FUNC_1(VAR_7->owning_controller);
   }


   if (VAR_7->io_tag != VAR_2)
   {
      VAR_6 = VAR_7->task_context_buffer;

      VAR_6->task_index = FUNC_3(VAR_7->io_tag);

      switch (VAR_6->protocol_type)
      {
      case 130:
      case 129:

         VAR_6->type.ssp.tag = VAR_7->io_tag;
         VAR_6->type.ssp.target_port_transfer_tag = 0xFFFF;
         break;

      case 128:


         break;

      case 131:

         break;

      default:

         break;
      }



      if (VAR_7->was_tag_assigned_by_user == VAR_0)
      {
         FUNC_2(
            VAR_7->owning_controller, VAR_7
         );
      }


      VAR_7->post_context |= FUNC_3(VAR_7->io_tag);


      FUNC_0(
         &VAR_7->parent.state_machine,
         VAR_1
      );

      return VAR_4;
   }

   return VAR_3;
}
