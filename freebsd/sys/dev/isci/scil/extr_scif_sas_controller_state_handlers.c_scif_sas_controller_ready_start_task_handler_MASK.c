
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_17__ {int core_object; } ;
struct TYPE_16__ {TYPE_4__* domain; int core_object; } ;
struct TYPE_12__ {int parent; TYPE_1__* state_handlers; int core_object; } ;
struct TYPE_15__ {TYPE_2__ parent; } ;
struct TYPE_14__ {int parent; TYPE_3__* state_handlers; } ;
struct TYPE_13__ {scalar_t__ (* start_task_handler ) (int *,int *,int *) ;int (* complete_task_handler ) (int *,int *,int *) ;} ;
struct TYPE_11__ {int (* start_handler ) (int *) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_5__ SCIF_SAS_TASK_REQUEST_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_7__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_9(
   SCI_BASE_CONTROLLER_T * VAR_4,
   SCI_BASE_REMOTE_DEVICE_T * VAR_5,
   SCI_BASE_REQUEST_T * VAR_6,
   U16 VAR_7
)
{
   SCIF_SAS_CONTROLLER_T * VAR_8 = (SCIF_SAS_CONTROLLER_T*)
                                              VAR_4;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_9 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_5;
   SCIF_SAS_TASK_REQUEST_T * VAR_10 = (SCIF_SAS_TASK_REQUEST_T*)VAR_6;
   SCI_STATUS VAR_11;

   FUNC_0((
      FUNC_2(VAR_8),
      VAR_0 | VAR_1,
      "scif_sas_controller_ready_start_task_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6, VAR_7
   ));

   VAR_11 = VAR_9->domain->state_handlers->start_task_handler(
               &VAR_9->domain->parent, VAR_5, VAR_6
            );

   if (VAR_11 == VAR_3)
   {
      if (FUNC_5(VAR_10)
             == VAR_2)
      {

         FUNC_4(
            VAR_9,
            (SCIF_SAS_REQUEST_T *)VAR_10
         );

         return VAR_3;
      }


      VAR_11 = (SCI_STATUS)FUNC_3(
                  VAR_8->core_object,
                  VAR_9->core_object,
                  VAR_10->parent.core_object,
                  VAR_7
               );

      if (VAR_11 == VAR_3)
      {



         VAR_10->parent.state_handlers->start_handler(&VAR_10->parent.parent);
      }
      else
      {




         VAR_9->domain->state_handlers->complete_task_handler(
            &VAR_9->domain->parent, VAR_5, VAR_6
         );

         if (VAR_11 == VAR_3)
         {
            FUNC_1((
               FUNC_2(VAR_8),
               VAR_0,
               "Controller:0x%x TaskRequest:0x%x Status:0x%x core start failed\n",
               VAR_8, VAR_10, VAR_11
            ));
         }
      }
   }
   else
   {
      FUNC_1((
         FUNC_2(VAR_8),
         VAR_0,
         "Controller:0x%x TaskRequest:0x%x Status:0x%x Task start failed\n",
         VAR_8, VAR_10, VAR_11
      ));
   }

   return VAR_11;
}
