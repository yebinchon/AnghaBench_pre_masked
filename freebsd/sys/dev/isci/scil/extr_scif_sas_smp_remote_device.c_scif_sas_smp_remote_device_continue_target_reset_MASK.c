
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_13__ {int * controller; } ;
struct TYPE_10__ {scalar_t__ current_smp_request; int * smp_activity_timer; int current_activity_phy_index; } ;
struct TYPE_11__ {TYPE_1__ smp_device; } ;
struct TYPE_12__ {TYPE_2__ protocol_device; int core_object; TYPE_7__* domain; } ;
typedef int SCI_TIMER_CALLBACK_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ,void*) ;
 int FUNC_5 (int ,int *,int) ;
 TYPE_3__* FUNC_6 (TYPE_7__*,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int ) ;
 scalar_t__ VAR_5 ;

void FUNC_8(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6,
   SCIF_SAS_REQUEST_T * VAR_7
)
{
   SCIF_SAS_CONTROLLER_T * VAR_8 = VAR_6->domain->controller;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_9 =
      FUNC_6(
         VAR_6->domain,
         VAR_6,
         VAR_6->protocol_device.smp_device.current_activity_phy_index
      );

   FUNC_1(*(
      FUNC_2(VAR_6),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_continue_target_reset(0x%x, 0x%x) enter\n",
      VAR_6, VAR_7
   ));

   if (VAR_6->protocol_device.smp_device.current_smp_request ==
          VAR_4)
   {



      U32 VAR_10 =
         (FUNC_3(VAR_9->core_object)/8);



      if (VAR_6->protocol_device.smp_device.smp_activity_timer == ((void*)0))
      {
         VAR_6->protocol_device.smp_device.smp_activity_timer =
            FUNC_4(
               (SCI_CONTROLLER_HANDLE_T *)VAR_8,
               (SCI_TIMER_CALLBACK_T)VAR_5,
               (void*)VAR_7
            );
      }
      else
      {
         FUNC_0(0);
      }


      FUNC_5(
         (SCI_CONTROLLER_HANDLE_T)VAR_8,
         VAR_6->protocol_device.smp_device.smp_activity_timer,
         VAR_10
      );
   }
   else if (VAR_6->protocol_device.smp_device.current_smp_request ==
          VAR_3)
   {

      FUNC_7(
         VAR_9, VAR_7, VAR_2);
   }
}
