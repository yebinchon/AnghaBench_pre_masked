
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
struct TYPE_7__ {TYPE_2__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_TASK_REQUEST_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_REQUEST_T * VAR_2
)
{
   FUNC_0((
      FUNC_1((SCIF_SAS_TASK_REQUEST_T *) VAR_2),
      VAR_0,
      "TaskRequest:0x%x State:0x%x invalid state to complete\n",
      VAR_2,
      FUNC_2(
         &((SCIF_SAS_TASK_REQUEST_T *) VAR_2)->parent.parent.state_machine)
   ));

   return VAR_1;
}
