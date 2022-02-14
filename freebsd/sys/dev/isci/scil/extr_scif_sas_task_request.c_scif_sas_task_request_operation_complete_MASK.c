
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int affected_request_count; } ;
typedef TYPE_1__ SCIF_SAS_TASK_REQUEST_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(
   SCIF_SAS_TASK_REQUEST_T * VAR_1
)
{
   FUNC_1((
      FUNC_2(VAR_1),
      VAR_0,
      "scif_sas_task_request_operation_complete(0x%x) enter\n",
      VAR_1
   ));

   VAR_1->affected_request_count--;

   FUNC_0((
      FUNC_2(VAR_1),
      VAR_0,
      "TaskRequest:0x%x current affected request count:0x%x\n",
      VAR_1, VAR_1->affected_request_count
   ));
}
