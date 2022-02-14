
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int affected_request_count; int parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_TASK_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_1(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIF_SAS_TASK_REQUEST_T * VAR_3 = (SCIF_SAS_TASK_REQUEST_T *)VAR_2;

   FUNC_0(
      &VAR_3->parent,
      VAR_1,
      VAR_0
   );




   VAR_3->affected_request_count++;
}
