
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
struct TYPE_5__ {TYPE_3__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_TASK_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCIF_SAS_TASK_REQUEST_T * VAR_4 = (SCIF_SAS_TASK_REQUEST_T *)VAR_3;

   FUNC_0(
      &VAR_4->parent,
      VAR_2,
      VAR_1
   );


   FUNC_1(
      &VAR_4->parent.parent.state_machine, VAR_0
   );
}
