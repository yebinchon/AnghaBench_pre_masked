
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static
BOOL FUNC_3(
   SCI_CONTROLLER_HANDLE_T VAR_3
)
{
   SCIC_SDS_CONTROLLER_T *VAR_4;
   VAR_4 = (SCIC_SDS_CONTROLLER_T *)VAR_3;

   if (FUNC_2(VAR_4))
   {
      return VAR_2;
   }
   else
   {


      FUNC_1(VAR_4, VAR_1);





      FUNC_0(VAR_4, 0xFF000000);
      FUNC_0(VAR_4, 0x00000000);
   }

   return VAR_0;
}
