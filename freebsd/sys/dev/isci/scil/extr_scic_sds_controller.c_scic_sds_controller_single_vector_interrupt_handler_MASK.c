
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static
BOOL FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_5
)
{
   U32 VAR_6;
   SCIC_SDS_CONTROLLER_T *VAR_7;
   VAR_7 = (SCIC_SDS_CONTROLLER_T *)VAR_5;





   FUNC_0(VAR_7, 0xFFFFFFFF);

   VAR_6 = FUNC_1(VAR_7);
   VAR_6 &= (VAR_2 | VAR_3);

   if (
           (VAR_6 == 0)
        && FUNC_3(VAR_7)
      )
   {


      FUNC_2(VAR_7, VAR_1);

      return VAR_4;
   }


   if (VAR_6 != 0)
   {


      return VAR_4;
   }



   FUNC_2(VAR_7, 0x00000000);
   FUNC_0(VAR_7, 0x00000000);

   return VAR_0;
}
