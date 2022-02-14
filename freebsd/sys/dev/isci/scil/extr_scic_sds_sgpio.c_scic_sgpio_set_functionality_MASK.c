
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_3,
   BOOL VAR_4
)
{
   U32 VAR_5 = VAR_0;
   SCIC_SDS_CONTROLLER_T * VAR_6 = (SCIC_SDS_CONTROLLER_T *) VAR_3;

   if(VAR_4)
   {
      VAR_5 = VAR_1;
   }

   FUNC_0(
      VAR_6, VAR_2, VAR_5);
}
