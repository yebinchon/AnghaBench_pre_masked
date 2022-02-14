
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ current_state_id; } ;
struct TYPE_16__ {TYPE_1__ state_machine; } ;
struct TYPE_18__ {int controller; TYPE_2__ parent; } ;
struct TYPE_17__ {TYPE_8__* domain; struct TYPE_17__* containing_device; int * ea_target_reset_request_scheduled; int core_object; } ;
typedef int SCI_TASK_STATUS ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_8__*) ;
 int FUNC_4 (int ,TYPE_3__*,int *,int ) ;
 TYPE_3__* FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int *) ;

void FUNC_9(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2,
   SCIF_SAS_REQUEST_T * VAR_3,
   SCI_STATUS VAR_4
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scif_sas_remote_device_target_reset_complete! "
      "fw_device:0x%x fw_request:0x%x completion_status 0x%x\n",
      VAR_2, VAR_3, VAR_4
   ));

   FUNC_4(
      VAR_2->domain->controller,
      VAR_2,
      VAR_3,
      (SCI_TASK_STATUS) VAR_4
   );

   FUNC_2(VAR_2->core_object);


   if (VAR_2->containing_device != ((void*)0))
   {


      SCIF_SAS_REMOTE_DEVICE_T * VAR_5;

      FUNC_7(VAR_2->containing_device);

      if( (VAR_5 = FUNC_5(VAR_2->domain))
              != ((void*)0) )
      {
         FUNC_8(
            VAR_5->containing_device,
            VAR_5,
            VAR_5->ea_target_reset_request_scheduled
         );

         VAR_5->ea_target_reset_request_scheduled = ((void*)0);
      }
      else
      {

         if (VAR_2->domain->parent.state_machine.current_state_id ==
                VAR_1)
         {
            SCIF_SAS_REMOTE_DEVICE_T * VAR_6 = VAR_2->containing_device;

            while(VAR_6->containing_device != ((void*)0))
               VAR_6 = VAR_6->containing_device;

            FUNC_6(VAR_2->domain, VAR_6);
         }
         else
         {


            FUNC_3(
            VAR_2->domain->controller, VAR_2->domain );
         }
      }
   }
   else
   {


      FUNC_3(
         VAR_2->domain->controller, VAR_2->domain );
   }
}
