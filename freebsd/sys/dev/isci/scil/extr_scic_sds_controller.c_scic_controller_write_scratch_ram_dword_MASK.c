
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;

SCI_STATUS FUNC_3(
   SCI_CONTROLLER_HANDLE_T VAR_3,
   U32 VAR_4,
   U32 VAR_5
)
{
   U32 VAR_6;

   if (VAR_4 < FUNC_0(VAR_3))
   {
      SCIC_SDS_CONTROLLER_T * VAR_7 = (SCIC_SDS_CONTROLLER_T *)VAR_3;

      if(VAR_4 <= VAR_2)
      {
         VAR_6 = VAR_4 + (VAR_4 - (VAR_4 % 4)) + 4;

         FUNC_1(VAR_7,VAR_6,VAR_5);
      }
      else
      {
         VAR_4 = VAR_4 - 132;

         VAR_6 = VAR_4 + (VAR_4 - (VAR_4 % 4)) + 4;

         FUNC_2(VAR_7,VAR_6,VAR_5);

      }

      return VAR_1;
   }
   else
   {
      return VAR_0;
   }
}
