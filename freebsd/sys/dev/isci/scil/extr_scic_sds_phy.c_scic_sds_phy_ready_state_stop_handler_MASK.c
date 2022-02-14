
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_PHY_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_PHY_T *VAR_2
)
{
   SCIC_SDS_PHY_T *VAR_3;
   VAR_3 = (SCIC_SDS_PHY_T *)VAR_2;

   FUNC_0(
      FUNC_2(VAR_3),
      VAR_0
   );

   FUNC_1(
      FUNC_3(VAR_3),
      FUNC_4(VAR_3),
      VAR_3
   );

   return VAR_1;
}
