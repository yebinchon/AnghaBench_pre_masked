
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_element; void* is_waiting_for_abort_task_set; void* is_high_priority; int * protocol_complete_handler; int * terminate_requestor; scalar_t__ lun; void* is_internal; int * device; int parent; } ;
typedef int SCI_BASE_STATE_T ;
typedef int SCI_BASE_LOGGER_T ;
typedef TYPE_1__ SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void FUNC_4(
   SCIF_SAS_REQUEST_T * VAR_2,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3,
   SCI_BASE_LOGGER_T * VAR_4,
   SCI_BASE_STATE_T * VAR_5
)
{
   FUNC_2(&VAR_2->parent, VAR_4, VAR_5);

   FUNC_0(*(
      FUNC_1(VAR_2),
      VAR_1,
      "scif_sas_request_construct(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4, VAR_5
   ));

   VAR_2->device = VAR_3;
   VAR_2->is_internal = VAR_0;
   VAR_2->lun = 0;
   VAR_2->terminate_requestor = ((void*)0);
   VAR_2->protocol_complete_handler = ((void*)0);
   VAR_2->is_high_priority = VAR_0;
   VAR_2->is_waiting_for_abort_task_set = VAR_0;

   FUNC_3(VAR_2, &VAR_2->list_element);
}
