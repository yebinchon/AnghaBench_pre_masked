
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ has_started_substate_machine; int started_substate_machine; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCIC_SDS_REQUEST_T *VAR_4 = (SCIC_SDS_REQUEST_T *)VAR_3;

   FUNC_0(
      VAR_4,
      VAR_2,
      VAR_0
   );



   if (VAR_4->has_started_substate_machine == VAR_1)
      FUNC_1(&VAR_4->started_substate_machine);
}
