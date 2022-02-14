
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * list_head; } ;
struct TYPE_11__ {TYPE_1__ request_list; } ;
struct TYPE_10__ {scalar_t__ is_waiting_for_abort_task_set; int parent; TYPE_2__* state_handlers; int * terminate_requestor; int * device; } ;
struct TYPE_9__ {int (* abort_handler ) (int *) ;} ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef int SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(
   SCIF_SAS_DOMAIN_T * VAR_3,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4,
   SCIF_SAS_REQUEST_T * VAR_5,
   SCIF_SAS_TASK_REQUEST_T * VAR_6
)
{
   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_1 | VAR_2,
      "scif_sas_domain_terminate_requests(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5, VAR_6
   ));

   if (VAR_5 != ((void*)0))
   {
      VAR_5->terminate_requestor = VAR_6;
      VAR_5->state_handlers->abort_handler(&VAR_5->parent);
   }
   else
   {
      SCI_FAST_LIST_ELEMENT_T * VAR_7 = VAR_3->request_list.list_head;
      SCIF_SAS_REQUEST_T * VAR_8 = ((void*)0);




      while (VAR_7 != ((void*)0))
      {
         VAR_8 = (SCIF_SAS_REQUEST_T*) FUNC_3(VAR_7);


         VAR_7 = FUNC_2(VAR_7);



         if (
               (VAR_4 == ((void*)0))
            || (
                  (VAR_8->device == VAR_4)
               && (VAR_6 != (SCIF_SAS_TASK_REQUEST_T*) VAR_8)
               )
            )
         {
            if (
                  (VAR_8->is_waiting_for_abort_task_set == VAR_0) ||
                  (VAR_8->terminate_requestor == ((void*)0))
               )
            {
               VAR_8->terminate_requestor = VAR_6;
               VAR_8->state_handlers->abort_handler(&VAR_8->parent);
            }
         }
      }
   }
}
