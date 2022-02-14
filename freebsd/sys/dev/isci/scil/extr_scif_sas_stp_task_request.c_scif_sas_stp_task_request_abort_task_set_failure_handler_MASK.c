
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int core_object; } ;
struct TYPE_9__ {int * list_head; } ;
struct TYPE_12__ {TYPE_6__* controller; TYPE_1__ request_list; } ;
struct TYPE_11__ {int core_object; TYPE_4__* domain; } ;
struct TYPE_10__ {scalar_t__ is_waiting_for_abort_task_set; int core_object; TYPE_3__* device; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef int SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_3__*,TYPE_2__*,int ) ;

void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4,
   SCIF_SAS_TASK_REQUEST_T * VAR_5
)
{

   SCIF_SAS_DOMAIN_T * VAR_6 = VAR_4->domain;
   SCI_FAST_LIST_ELEMENT_T * VAR_7;
   SCIF_SAS_REQUEST_T * VAR_8 = ((void*)0);

   VAR_7 = VAR_6->request_list.list_head;




   while (VAR_7 != ((void*)0))
   {
      VAR_8 =
         (SCIF_SAS_REQUEST_T*) FUNC_1(VAR_7);



      VAR_7 = FUNC_0(VAR_7);

      if ( VAR_8->device == VAR_4
           && VAR_8->is_waiting_for_abort_task_set == VAR_3 )
      {


         SCI_STATUS VAR_9;


         VAR_8->is_waiting_for_abort_task_set = VAR_0;

         VAR_9 = FUNC_2(
                           VAR_6->controller->core_object,
                           VAR_4->core_object,
                           VAR_8->core_object
                        );

         if (VAR_9 == VAR_1)
         {

            FUNC_3(
               VAR_6->controller,
               VAR_4,
               VAR_8,
               VAR_2
            );
         }


      }
   }

}
