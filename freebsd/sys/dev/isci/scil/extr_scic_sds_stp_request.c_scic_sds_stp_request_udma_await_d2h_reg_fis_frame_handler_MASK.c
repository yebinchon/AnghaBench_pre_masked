
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCIC_SDS_REQUEST_T * VAR_3,
   U32 VAR_4
)
{
   SCI_STATUS VAR_5;


   VAR_5 = FUNC_1(VAR_3, VAR_4);

   if (VAR_5 == VAR_1)
   {
      FUNC_0(
         VAR_3,
         VAR_2,
         VAR_0
      );
   }

   return VAR_5;
}
