
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; } ;
struct TYPE_4__ {TYPE_1__ parent; int started_substate_machine; scalar_t__ has_started_substate_machine; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

SCI_STATUS FUNC_2(
   SCI_BASE_REQUEST_T *VAR_2
)
{
   SCIC_SDS_REQUEST_T *VAR_3 = (SCIC_SDS_REQUEST_T *)VAR_2;

   if (VAR_3->has_started_substate_machine)
   {
      FUNC_1(&VAR_3->started_substate_machine);
   }

   FUNC_0(
      &VAR_3->parent.state_machine,
      VAR_0
   );

   return VAR_1;
}
