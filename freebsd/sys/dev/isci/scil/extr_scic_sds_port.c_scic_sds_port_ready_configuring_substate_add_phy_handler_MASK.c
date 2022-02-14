
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ready_substate_machine; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_PORT_T ;
typedef int SCI_BASE_PHY_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_PORT_T *VAR_4,
   SCI_BASE_PHY_T *VAR_5
)
{
   SCIC_SDS_PORT_T * VAR_6 = (SCIC_SDS_PORT_T *)VAR_4;
   SCIC_SDS_PHY_T * VAR_7 = (SCIC_SDS_PHY_T *)VAR_5;
   SCI_STATUS VAR_8;

   VAR_8 = FUNC_2(VAR_6, VAR_7);

   if (VAR_8 == VAR_2)
   {
      FUNC_1(VAR_6, VAR_7, VAR_3, VAR_0);



      FUNC_0(
         &VAR_6->ready_substate_machine,
         VAR_1
      );
   }

   return VAR_8;
}
