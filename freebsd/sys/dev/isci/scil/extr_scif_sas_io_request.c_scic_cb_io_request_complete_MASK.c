
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ (* protocol_complete_handler ) (int *,int *,TYPE_2__*,scalar_t__*) ;scalar_t__ is_high_priority; scalar_t__ is_waiting_for_abort_task_set; int parent; TYPE_1__* state_handlers; } ;
struct TYPE_7__ {scalar_t__ (* complete_handler ) (int *) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_IO_STATUS ;
typedef int SCI_IO_REQUEST_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *,TYPE_2__*) ;
 int FUNC_5 (int *,int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,TYPE_2__*,scalar_t__*) ;

void FUNC_8(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_5,
   SCI_IO_REQUEST_HANDLE_T VAR_6,
   SCI_IO_STATUS VAR_7
)
{
   SCI_STATUS VAR_8;
   SCIF_SAS_CONTROLLER_T * VAR_9 = (SCIF_SAS_CONTROLLER_T*)
                                      FUNC_2(VAR_4);
   SCIF_SAS_REMOTE_DEVICE_T * VAR_10 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                      FUNC_2(VAR_5);
   SCIF_SAS_REQUEST_T * VAR_11 = (SCIF_SAS_REQUEST_T*)
                                      FUNC_2(VAR_6);

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1,
      "scic_cb_io_request_complete(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6, VAR_7
   ));




   VAR_8 = VAR_11->state_handlers->complete_handler(&VAR_11->parent);



   if (VAR_8 == VAR_2)
   {
      if (VAR_11->protocol_complete_handler != ((void*)0))
      {
         VAR_8 = VAR_11->protocol_complete_handler(
                     VAR_9, VAR_10, VAR_11, (SCI_STATUS *)&VAR_7
                  );
      }



      if ( VAR_8 == VAR_2 )
      {
         if (VAR_11->is_high_priority == VAR_0)
         {
            if (VAR_11->is_waiting_for_abort_task_set == VAR_0)
            {
               FUNC_3(
                  VAR_9, VAR_10, VAR_11, VAR_7);
            }
            else
            {


            }
         }
         else
            FUNC_4(
               VAR_9, VAR_10, VAR_11);
      }
      else if ( VAR_8 == VAR_3 )
      {
         FUNC_5(VAR_9, VAR_10, VAR_11);
      }
   }
}
