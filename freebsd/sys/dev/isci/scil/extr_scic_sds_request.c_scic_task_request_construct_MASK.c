
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_10__ {int parent; } ;
struct TYPE_14__ {int task_context_buffer; void* is_task_management_request; TYPE_1__ parent; int started_substate_machine; void* has_started_substate_machine; } ;
struct TYPE_11__ {scalar_t__ attached_stp_target; scalar_t__ attached_ssp_target; } ;
struct TYPE_12__ {TYPE_2__ bits; } ;
struct TYPE_13__ {TYPE_3__ u; } ;
typedef TYPE_4__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCU_TASK_CONTEXT_T ;
typedef void* SCI_TASK_REQUEST_HANDLE_T ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_5__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (scalar_t__,TYPE_4__*) ;
 int FUNC_5 (int *,int *,int ,void*,TYPE_5__*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;

SCI_STATUS FUNC_8(
   SCI_CONTROLLER_HANDLE_T VAR_8,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_9,
   U16 VAR_10,
   void *VAR_11,
   void *VAR_12,
   SCI_TASK_REQUEST_HANDLE_T *VAR_13
)
{
   SCI_STATUS VAR_14 = VAR_5;
   SCIC_SDS_REQUEST_T * VAR_15 = (SCIC_SDS_REQUEST_T *)
                                       VAR_12;
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_16;

   FUNC_0((
      FUNC_2(VAR_8),
      (VAR_1
      |VAR_0
      |VAR_2),
      "scic_task_request_construct(0x%x, 0x%x, 0x02x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_8, VAR_9,
      VAR_10, VAR_11,
      VAR_12, VAR_13
   ));


   FUNC_5(
      (SCIC_SDS_CONTROLLER_T *)VAR_8,
      (SCIC_SDS_REMOTE_DEVICE_T *)VAR_9,
      VAR_10,
      VAR_11,
      VAR_15
   );

   FUNC_4(VAR_9, &VAR_16);

   if (VAR_16.u.bits.attached_ssp_target)
   {
      FUNC_6(VAR_15);

      VAR_15->has_started_substate_machine = VAR_6;


      FUNC_3(
         &VAR_15->started_substate_machine,
         &VAR_15->parent.parent,
         VAR_7,
         VAR_3
      );
   }
   else if (VAR_16.u.bits.attached_stp_target)
   {
      FUNC_7(VAR_15);
   }
   else
   {
      VAR_14 = VAR_4;
   }

   if (VAR_14 == VAR_5)
   {
      VAR_15->is_task_management_request = VAR_6;
      FUNC_1(VAR_15->task_context_buffer, 0x00, sizeof(SCU_TASK_CONTEXT_T));
      *VAR_13 = VAR_12;
   }

   return VAR_14;
}
