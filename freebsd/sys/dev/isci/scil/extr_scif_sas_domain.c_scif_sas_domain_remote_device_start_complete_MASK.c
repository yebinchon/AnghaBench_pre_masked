
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ current_state_id; } ;
struct TYPE_16__ {TYPE_1__ state_machine; } ;
struct TYPE_25__ {TYPE_10__ parent; TYPE_6__* state_handlers; int device_start_in_progress_count; } ;
struct TYPE_20__ {int scheduled_activity; } ;
struct TYPE_21__ {TYPE_4__ smp_device; } ;
struct TYPE_24__ {int parent; TYPE_5__ protocol_device; int * containing_device; int core_object; } ;
struct TYPE_18__ {scalar_t__ attached_smp_target; } ;
struct TYPE_19__ {TYPE_2__ bits; } ;
struct TYPE_23__ {TYPE_3__ u; } ;
struct TYPE_22__ {int (* device_start_complete_handler ) (TYPE_10__*,int *) ;} ;
typedef TYPE_7__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef TYPE_8__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_9__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_10__*,int *) ;

void FUNC_6(
   SCIF_SAS_DOMAIN_T * VAR_4,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5
)
{
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_6;

   FUNC_1((
      FUNC_2(VAR_4),
      VAR_0 | VAR_1,
      "scif_sas_domain_remote_device_start_complete(0x%x, 0x%x) enter\n",
      VAR_4, VAR_5
   ));



   FUNC_0(VAR_4->parent.state_machine.current_state_id
          == VAR_3);

   FUNC_3(VAR_5->core_object, &VAR_6);



   VAR_4->device_start_in_progress_count--;

   if ( VAR_6.u.bits.attached_smp_target )
   {
      if ( VAR_5->containing_device == ((void*)0) )

         FUNC_4(VAR_5);
      else


         VAR_5->protocol_device.smp_device.scheduled_activity =
            VAR_2;
   }
   else
   {
      VAR_4->state_handlers->device_start_complete_handler(
         &VAR_4->parent, &VAR_5->parent
      );
   }
}
