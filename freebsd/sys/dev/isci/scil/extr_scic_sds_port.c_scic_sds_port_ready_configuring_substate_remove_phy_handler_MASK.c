
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_PORT_T *VAR_3,
   SCI_BASE_PHY_T *VAR_4
)
{
   SCIC_SDS_PORT_T * VAR_5 = (SCIC_SDS_PORT_T *)VAR_3;
   SCIC_SDS_PHY_T * VAR_6 = (SCIC_SDS_PHY_T *)VAR_4;
   SCI_STATUS VAR_7;

   VAR_7 = FUNC_1(VAR_5, VAR_6);

   if (VAR_7 == VAR_1)
   {
      FUNC_2(VAR_5, VAR_6, VAR_2);



      FUNC_0(
         &VAR_5->ready_substate_machine,
         VAR_0
      );
   }

   return VAR_7;
}
