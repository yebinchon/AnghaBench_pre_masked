
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int features; } ;
struct TYPE_8__ {int parent; } ;
struct TYPE_9__ {TYPE_1__ parent; int started_substate_machine; int task_context_buffer; } ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_STP_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;
typedef TYPE_3__ SATA_FIS_REG_H2D_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;

SCI_STATUS FUNC_4(
   SCIC_SDS_REQUEST_T *VAR_4
)
{
   SATA_FIS_REG_H2D_T * VAR_5 =
      FUNC_2(
         VAR_4
      );



   VAR_5->features = VAR_5->features | VAR_0;

   FUNC_1(VAR_4);


   FUNC_3(
      (SCIC_SDS_STP_REQUEST_T*) VAR_4,
      VAR_4->task_context_buffer
   );

   FUNC_0(
      &VAR_4->started_substate_machine,
      &VAR_4->parent.parent,
      VAR_3,
      VAR_1
   );

   return VAR_2;
}
