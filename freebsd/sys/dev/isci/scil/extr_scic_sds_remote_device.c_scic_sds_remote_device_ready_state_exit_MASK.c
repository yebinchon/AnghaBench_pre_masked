
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ready_substate_machine; scalar_t__ has_ready_substate_machine; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T *VAR_1
)
{
   SCIC_SDS_CONTROLLER_T * VAR_2;
   SCIC_SDS_REMOTE_DEVICE_T * VAR_3 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_1;

   VAR_2 = FUNC_2(VAR_3);

   if (VAR_3->has_ready_substate_machine)
   {
      FUNC_0(&VAR_3->ready_substate_machine);
   }
   else
   {
      FUNC_1(
         VAR_2,
         VAR_3,
         VAR_0
      );
   }
}
