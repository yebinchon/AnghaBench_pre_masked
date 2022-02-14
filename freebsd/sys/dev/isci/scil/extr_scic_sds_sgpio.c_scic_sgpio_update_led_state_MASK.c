
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int) ;

void FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   U32 VAR_5,
   BOOL VAR_6,
   BOOL VAR_7,
   BOOL VAR_8
)
{
   U32 VAR_9;

   SCIC_SDS_CONTROLLER_T * VAR_10 = (SCIC_SDS_CONTROLLER_T *) VAR_4;


   VAR_9 = 0x00000000;

   if(!VAR_6)
   {
      VAR_9 |= VAR_2 << VAR_1;
   }
   if(!VAR_7)
   {
      VAR_9 |= VAR_2 << VAR_3;
   }
   if(!VAR_8)
   {
      VAR_9 |= VAR_2 << VAR_0;
   }

   FUNC_0(VAR_10, VAR_5, VAR_9);
}
