
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ (* protocol_complete_handler ) (TYPE_2__*,int *,TYPE_5__*,scalar_t__*) ;scalar_t__ is_internal; int parent; TYPE_1__* state_handlers; } ;
struct TYPE_13__ {TYPE_5__ parent; } ;
struct TYPE_12__ {scalar_t__ (* complete_handler ) (int *) ;} ;
typedef int SCI_TASK_STATUS ;
typedef int SCI_TASK_REQUEST_HANDLE_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_TASK_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int *,TYPE_5__*,scalar_t__*) ;

void FUNC_9(
   SCI_CONTROLLER_HANDLE_T VAR_3,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_4,
   SCI_TASK_REQUEST_HANDLE_T VAR_5,
   SCI_TASK_STATUS VAR_6
)
{
   SCIF_SAS_CONTROLLER_T * VAR_7 = (SCIF_SAS_CONTROLLER_T*)
                                         FUNC_3(VAR_3);
   SCIF_SAS_REMOTE_DEVICE_T * VAR_8 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                      FUNC_3(VAR_4);
   SCIF_SAS_TASK_REQUEST_T * VAR_9 = (SCIF_SAS_TASK_REQUEST_T*)
                                       FUNC_3(VAR_5);
   SCI_STATUS VAR_10;

   FUNC_0((
      FUNC_2(VAR_7),
      VAR_1,
      "scic_cb_task_request_complete(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5, VAR_6
   ));

   VAR_10 = VAR_9->parent.state_handlers->complete_handler(
               &VAR_9->parent.parent
            );

   if (VAR_10 == VAR_2)
   {
      if (VAR_9->parent.protocol_complete_handler != ((void*)0))
      {
         VAR_10 = VAR_9->parent.protocol_complete_handler(
            VAR_7, VAR_8, &VAR_9->parent, (SCI_STATUS *)&VAR_6
         );
      }

      if (VAR_10 == VAR_2)
      {
         FUNC_1((
            FUNC_2(VAR_9),
            VAR_1,
            "RemoteDevice:0x%x TaskRequest:0x%x Function:0x%x CompletionStatus:0x%x "
            "completed\n",
            VAR_8, VAR_9,
            FUNC_6(VAR_9),
            VAR_6
         ));




         if (VAR_9->parent.is_internal == VAR_0)
         {
            FUNC_4(
               VAR_7, VAR_8, VAR_9, VAR_6
            );
         }
         else
         {
            FUNC_5(
               VAR_7,
               VAR_8,
               VAR_9
            );
         }
      }
   }
}
