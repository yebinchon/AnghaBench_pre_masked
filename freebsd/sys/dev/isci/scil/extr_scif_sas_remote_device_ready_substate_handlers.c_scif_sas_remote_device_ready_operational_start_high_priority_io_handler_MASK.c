
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ current_state_id; } ;
struct TYPE_11__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_16__ {TYPE_2__ parent; } ;
struct TYPE_15__ {int request_count; TYPE_9__ ready_substate_machine; int core_object; } ;
struct TYPE_13__ {scalar_t__ attached_smp_target; } ;
struct TYPE_12__ {TYPE_4__ bits; } ;
struct TYPE_14__ {TYPE_3__ u; } ;
struct TYPE_10__ {int (* start_handler ) (int *) ;} ;
typedef TYPE_5__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_7__ SCIF_SAS_IO_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_9__*,scalar_t__) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_REMOTE_DEVICE_T * VAR_1,
   SCI_BASE_REQUEST_T * VAR_2
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_1;
   SCIF_SAS_IO_REQUEST_T * VAR_4 = (SCIF_SAS_IO_REQUEST_T*) VAR_2;

   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_5;

   FUNC_1(VAR_3->core_object, &VAR_5);

   if (VAR_5.u.bits.attached_smp_target)
   {

      if (VAR_3->ready_substate_machine.current_state_id
       != VAR_0)
      {
         FUNC_0(
            &VAR_3->ready_substate_machine,
            VAR_0
         );
      }
   }

   VAR_3->request_count++;

   return VAR_4->parent.state_handlers->start_handler(&VAR_4->parent.parent);
}
