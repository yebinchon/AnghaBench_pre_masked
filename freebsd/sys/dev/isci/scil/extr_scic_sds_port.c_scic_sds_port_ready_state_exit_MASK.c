
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ready_substate_machine; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T *VAR_0
)
{
   SCIC_SDS_PORT_T *VAR_1;
   VAR_1 = (SCIC_SDS_PORT_T *)VAR_0;

   FUNC_0(&VAR_1->ready_substate_machine);

   FUNC_1(10);
   FUNC_2(VAR_1);
}
