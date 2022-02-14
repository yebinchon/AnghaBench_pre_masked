
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ parent; int started_substate_machine; int task_context_buffer; } ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_STP_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_REQUEST_T * VAR_3
)
{
   FUNC_1(VAR_3);


   FUNC_2(
      (SCIC_SDS_STP_REQUEST_T*) VAR_3,
      VAR_3->task_context_buffer
   );

   FUNC_0(
      &VAR_3->started_substate_machine,
      &VAR_3->parent.parent,
      VAR_2,
      VAR_0
   );

   return VAR_1;
}
