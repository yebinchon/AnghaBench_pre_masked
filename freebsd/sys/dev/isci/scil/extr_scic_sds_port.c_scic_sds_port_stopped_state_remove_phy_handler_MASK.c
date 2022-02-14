
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_PORT_T ;
typedef int SCI_BASE_PHY_T ;
typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCI_BASE_PORT_T *VAR_0,
   SCI_BASE_PHY_T *VAR_1
)
{
   SCIC_SDS_PORT_T *VAR_2 = (SCIC_SDS_PORT_T *)VAR_0;
   SCIC_SDS_PHY_T *VAR_3 = (SCIC_SDS_PHY_T *)VAR_1;

   return FUNC_0(VAR_2, VAR_3);
}
