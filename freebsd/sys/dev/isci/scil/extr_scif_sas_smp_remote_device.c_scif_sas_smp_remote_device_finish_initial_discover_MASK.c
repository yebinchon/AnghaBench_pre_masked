
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ controller; } ;
struct TYPE_10__ {int * smp_activity_timer; int current_activity; } ;
struct TYPE_11__ {TYPE_1__ smp_device; } ;
struct TYPE_12__ {TYPE_2__ protocol_device; TYPE_8__* domain; } ;
typedef int SCI_TIMER_CALLBACK_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (int *,int ,void*) ;
 int FUNC_4 (int ,int *,int ) ;
 TYPE_3__* FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;

void FUNC_8(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6 =
      FUNC_5(VAR_5->domain);

   FUNC_1((
      FUNC_2(VAR_5),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_finish_initial_discover(0x%x) enter\n",
      VAR_5
   ));

   if ( VAR_6 != ((void*)0) )
   {

     FUNC_6(VAR_5);


     VAR_5->protocol_device.smp_device.current_activity =
        VAR_2;



      if (VAR_5->protocol_device.smp_device.smp_activity_timer == ((void*)0))
      {
      VAR_5->protocol_device.smp_device.smp_activity_timer =
         FUNC_3(
            (SCI_CONTROLLER_HANDLE_T *)VAR_5->domain->controller,
            (SCI_TIMER_CALLBACK_T)VAR_4,
            (void*)VAR_5
         );
      }
      else
      {
         FUNC_0 (0);
      }

      FUNC_4(
         (SCI_CONTROLLER_HANDLE_T)VAR_5->domain->controller,
         VAR_5->protocol_device.smp_device.smp_activity_timer,
         VAR_3
      );
   }
   else
      FUNC_7(VAR_5);
}
