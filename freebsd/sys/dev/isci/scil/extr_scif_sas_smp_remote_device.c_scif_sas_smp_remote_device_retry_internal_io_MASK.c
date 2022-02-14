
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_9__ {int * smp_activity_timer; int io_retry_count; } ;
struct TYPE_8__ {TYPE_3__ smp_device; } ;
struct TYPE_10__ {TYPE_2__ protocol_device; TYPE_1__* domain; } ;
struct TYPE_7__ {scalar_t__ controller; } ;
typedef int SCI_TIMER_CALLBACK_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (int *,int ,void*) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ VAR_2 ;

void FUNC_5(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3,
   U8 VAR_4,
   U32 VAR_5
)
{
   FUNC_1((
      FUNC_2(VAR_3),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_retry_internal_io(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5
   ));

   VAR_3->protocol_device.smp_device.io_retry_count =
      VAR_4;


   if (VAR_3->protocol_device.smp_device.smp_activity_timer == ((void*)0))
   {
      VAR_3->protocol_device.smp_device.smp_activity_timer =
         FUNC_3(
            (SCI_CONTROLLER_HANDLE_T *)VAR_3->domain->controller,
            (SCI_TIMER_CALLBACK_T)VAR_2,
            (void*)VAR_3
         );
   }
   else
   {
      FUNC_0(0);
   }

   FUNC_4(
      (SCI_CONTROLLER_HANDLE_T)VAR_3->domain->controller,
      VAR_3->protocol_device.smp_device.smp_activity_timer,
      VAR_5
   );
}
