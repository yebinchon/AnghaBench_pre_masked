
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_2,
   U32 VAR_3
)
{
   FUNC_0((
      FUNC_2(VAR_2),
      VAR_1 | VAR_0,
      "SCIC Controller 0x%08x post request 0x%08x\n",
      VAR_2, VAR_3
   ));

   FUNC_1(VAR_2, VAR_3);
}
