
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

SCI_STATUS FUNC_6(
   SCIC_SDS_PORT_T * VAR_2,
   U32 VAR_3
)
{
   SCIC_SDS_PORT_T *VAR_4 = (SCIC_SDS_PORT_T *)VAR_2;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0,
      "SCIC Port 0x%08x requested to process frame %d while in invalid state %d\n",
      VAR_2, VAR_3,
      FUNC_2(
         FUNC_4(VAR_4))
   ));

   FUNC_3(
      FUNC_5(VAR_4), VAR_3
   );

   return VAR_1;
}
