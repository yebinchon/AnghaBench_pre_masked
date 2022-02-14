
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * list_head; } ;
struct TYPE_14__ {TYPE_1__ request_list; int * controller; } ;
struct TYPE_13__ {TYPE_5__* domain; } ;
struct TYPE_12__ {int is_waiting_for_abort_task_set; TYPE_4__* device; } ;
struct TYPE_11__ {TYPE_3__ parent; } ;
typedef int SCI_TASK_REQUEST_HANDLE_T ;
typedef int SCI_STATUS ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_DOMAIN_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_4 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*,TYPE_3__*,int ) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_4__*,int ,void*,int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static
void FUNC_7(
   SCI_BASE_OBJECT_T *VAR_6
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_6;
   SCI_STATUS VAR_8 = VAR_3;
   SCI_TASK_REQUEST_HANDLE_T VAR_9;
   SCIF_SAS_CONTROLLER_T * VAR_10 = VAR_7->domain->controller;
   SCIF_SAS_TASK_REQUEST_T * VAR_11;
   SCIF_SAS_REQUEST_T * VAR_12;
   void * VAR_13;
   SCIF_SAS_DOMAIN_T * VAR_14 = VAR_7->domain;
   SCI_FAST_LIST_ELEMENT_T * VAR_15;
   SCIF_SAS_REQUEST_T * VAR_16 = ((void*)0);

   FUNC_1(
      VAR_7,
      VAR_5,
      VAR_0
   );

   VAR_13 = FUNC_5(VAR_10);
   FUNC_0(VAR_13 != ((void*)0));

   VAR_11 = (SCIF_SAS_TASK_REQUEST_T*)VAR_13;

   VAR_12 = &VAR_11->parent;


   VAR_8 = FUNC_6(
      VAR_10,
      VAR_7,
      VAR_1,
      (void *)VAR_11,
      &VAR_9,
      VAR_2
   );

   VAR_15 = VAR_14->request_list.list_head;





   while (VAR_15 != ((void*)0))
   {
      VAR_16 =
         (SCIF_SAS_REQUEST_T*) FUNC_3(VAR_15);



      VAR_15 = FUNC_2(VAR_15);

      if (VAR_16->device == VAR_7)
      {
         VAR_16->is_waiting_for_abort_task_set = VAR_4;
      }
   }

   FUNC_4(
      VAR_10,
      VAR_7,
      VAR_12,
      VAR_1
   );
}
