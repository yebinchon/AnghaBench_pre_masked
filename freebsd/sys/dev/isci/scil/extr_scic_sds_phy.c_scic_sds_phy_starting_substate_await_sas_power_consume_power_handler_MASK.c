
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIC_SDS_PHY_T *VAR_3
)
{
   U32 VAR_4;

   VAR_4 = FUNC_1(VAR_3);
   VAR_4 |= FUNC_0(VAR_0);
   FUNC_2(VAR_3, VAR_4);


   FUNC_3(
      FUNC_4(VAR_3),
      VAR_1
      );

   return VAR_2;
}
