
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
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

SCI_STATUS FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   U32 VAR_5,
   U32 * VAR_6
)
{
   U32 VAR_7;
   SCIC_SDS_CONTROLLER_T * VAR_8 = (SCIC_SDS_CONTROLLER_T *)VAR_4;
   U32 VAR_9 = FUNC_0(VAR_8);


   if ((VAR_9 & VAR_3) != VAR_3)
   {
      *VAR_6 = 0x00000000;
      return VAR_1;
   }

   if (VAR_5 < FUNC_1(VAR_4))
   {
      if(VAR_5 <= VAR_2)
      {
         VAR_7 = VAR_5 + (VAR_5 - (VAR_5 % 4)) + 4;

         *VAR_6 = FUNC_2(VAR_8,VAR_7);
      }
      else
      {
         VAR_5 = VAR_5 - 132;

         VAR_7 = VAR_5 + (VAR_5 - (VAR_5 % 4)) + 4;

         *VAR_6 = FUNC_3(VAR_8,VAR_7);
      }

      return VAR_1;
   }
   else
   {
      return VAR_0;
   }
}
