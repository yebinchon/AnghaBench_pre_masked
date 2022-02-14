
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; int state_machine_logger; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_BASE_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCI_BASE_REQUEST_T * VAR_2
)
{
   FUNC_0(
      &VAR_2->state_machine, VAR_0
   );

   FUNC_1(
      &VAR_2->state_machine_logger,
      &VAR_2->state_machine
   );

   return VAR_1;
}
