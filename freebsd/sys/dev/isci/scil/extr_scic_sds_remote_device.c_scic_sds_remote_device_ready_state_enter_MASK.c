
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ready_substate_machine; scalar_t__ has_ready_substate_machine; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_6(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCIC_SDS_CONTROLLER_T * VAR_4;
   SCIC_SDS_REMOTE_DEVICE_T * VAR_5 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   VAR_4 = FUNC_5(VAR_5);

   FUNC_0(
      VAR_5,
      VAR_2,
      VAR_0
   );



   FUNC_3(
      VAR_4, VAR_5, VAR_1
   );

   FUNC_4(
      VAR_4, VAR_5
   );

   if (VAR_5->has_ready_substate_machine)
   {
      FUNC_1(&VAR_5->ready_substate_machine);
   }
   else
   {
      FUNC_2(VAR_4, VAR_5);
   }
}
