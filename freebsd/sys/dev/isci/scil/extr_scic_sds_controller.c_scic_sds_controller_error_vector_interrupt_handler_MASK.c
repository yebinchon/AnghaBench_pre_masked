
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
 int FUNC_1 (int *) ;
 int VAR_3 ;

__attribute__((used)) static
BOOL FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_4
)
{
   U32 VAR_5;
   SCIC_SDS_CONTROLLER_T *VAR_6;
   VAR_6 = (SCIC_SDS_CONTROLLER_T *)VAR_4;


   VAR_5 = FUNC_1(VAR_6);
   VAR_5 &= (VAR_1 | VAR_2);

   if (VAR_5 != 0)
   {


      return VAR_3;
   }






   FUNC_0(VAR_6, 0x000000FF);
   FUNC_0(VAR_6, 0x00000000);

   return VAR_0;
}
