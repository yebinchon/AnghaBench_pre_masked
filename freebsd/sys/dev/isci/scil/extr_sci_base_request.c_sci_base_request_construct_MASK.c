
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; int parent; } ;
typedef int SCI_BASE_STATE_T ;
typedef TYPE_1__ SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_LOGGER_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   SCI_BASE_REQUEST_T *VAR_1,
   SCI_BASE_LOGGER_T *VAR_2,
   SCI_BASE_STATE_T *VAR_3
)
{
   FUNC_0(
      &VAR_1->parent,
      VAR_2
   );

   FUNC_1(
      &VAR_1->state_machine,
      &VAR_1->parent,
      VAR_3,
      VAR_0
   );

   FUNC_2(
      &VAR_1->state_machine
   );
}
