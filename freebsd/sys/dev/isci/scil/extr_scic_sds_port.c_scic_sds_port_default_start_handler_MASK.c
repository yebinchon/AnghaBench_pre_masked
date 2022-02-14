
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_PORT_T ;
typedef int SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

SCI_STATUS FUNC_4(
   SCI_BASE_PORT_T *VAR_2
)
{
   FUNC_0((
      FUNC_1((SCIC_SDS_PORT_T *)VAR_2),
      VAR_0,
      "SCIC Port 0x%08x requested to start while in invalid state %d\n",
      VAR_2,
      FUNC_2(
         FUNC_3((SCIC_SDS_PORT_T *)VAR_2))
   ));

   return VAR_1;
}
