
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U8 ;
typedef int U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   BOOL VAR_5
)
{
   SCIC_SDS_CONTROLLER_T * VAR_6 = (SCIC_SDS_CONTROLLER_T *) VAR_4;
   U8 VAR_7;
   U32 VAR_8;


   if(VAR_5)
   {
      VAR_8 = VAR_1;
   }
   else
   {
      VAR_8 = VAR_2;
   }

   for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   {
      FUNC_0(
         VAR_6, VAR_3[VAR_7], VAR_8);
   }
}
