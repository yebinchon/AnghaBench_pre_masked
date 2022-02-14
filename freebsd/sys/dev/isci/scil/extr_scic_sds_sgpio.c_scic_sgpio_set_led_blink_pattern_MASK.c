
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_PORT_T ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;

void FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_0,
   SCI_PORT_HANDLE_T VAR_1,
   BOOL VAR_2,
   BOOL VAR_3,
   BOOL VAR_4,
   U8 VAR_5
)
{
   U32 VAR_6;

   SCIC_SDS_PORT_T * VAR_7 = (SCIC_SDS_PORT_T *) VAR_1;

   VAR_6 = FUNC_0(VAR_7);

   FUNC_1(
           VAR_0, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}
