
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ active_phy_mask; int ready_substate_machine; int not_ready_reason; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCIC_SDS_PORT_T *VAR_4 = (SCIC_SDS_PORT_T *)VAR_3;

   FUNC_1(
      VAR_4, VAR_2
   );

   FUNC_2(VAR_4);


   VAR_4->not_ready_reason = VAR_0;

   if (VAR_4->active_phy_mask != 0)
   {

      FUNC_0(
         &VAR_4->ready_substate_machine,
         VAR_1
      );
   }
}
