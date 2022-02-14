
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ active_phy_mask; int ready_substate_machine; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIC_SDS_PORT_T *VAR_5 = (SCIC_SDS_PORT_T *)VAR_4;

   FUNC_3(
      VAR_5, VAR_1
   );

   if (VAR_5->active_phy_mask == 0)
   {
      FUNC_1(
         FUNC_2(VAR_5),
         VAR_5,
         VAR_0
      );

      FUNC_0(
         &VAR_5->ready_substate_machine,
         VAR_3
      );
   }

   else
   {
      FUNC_0(
         &VAR_5->ready_substate_machine,
         VAR_2
      );
   }
}
