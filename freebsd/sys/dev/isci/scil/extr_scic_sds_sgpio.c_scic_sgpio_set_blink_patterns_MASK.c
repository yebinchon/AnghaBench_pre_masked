
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_1,
   U8 VAR_2,
   U8 VAR_3,
   U8 VAR_4,
   U8 VAR_5
)
{
   U32 VAR_6;
   SCIC_SDS_CONTROLLER_T * VAR_7 = (SCIC_SDS_CONTROLLER_T *) VAR_1;

   VAR_6 = (VAR_5 << 12) + (VAR_4 << 8) + (VAR_3 << 4) + VAR_2;

   FUNC_0(
      VAR_7, VAR_0, VAR_6);
}
