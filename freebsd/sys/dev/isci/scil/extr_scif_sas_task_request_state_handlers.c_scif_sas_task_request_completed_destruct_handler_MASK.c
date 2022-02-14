
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ is_internal; } ;
struct TYPE_4__ {int state_machine; int state_machine_logger; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_BASE_REQUEST_T ;
typedef int SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_REQUEST_T * VAR_3
)
{
   SCIF_SAS_REQUEST_T * VAR_4 = (SCIF_SAS_REQUEST_T *)VAR_3;

   FUNC_0(
      &VAR_3->state_machine, VAR_0
   );

   FUNC_1(
      &VAR_3->state_machine_logger,
      &VAR_3->state_machine
   );

   if (VAR_4->is_internal == VAR_2)
   {
      FUNC_2(
         (SCIF_SAS_TASK_REQUEST_T *)VAR_4
      );
   }

   return VAR_1;
}
