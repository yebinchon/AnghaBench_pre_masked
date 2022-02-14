
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static
void FUNC_6(
   SCI_CONTROLLER_HANDLE_T VAR_2
)
{
   SCIC_SDS_CONTROLLER_T *VAR_3;
   VAR_3 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_0((
      FUNC_3(VAR_2),
      VAR_0,
      "scic_sds_controller_normal_vector_completion_handler(0x%d) enter\n",
      VAR_2
   ));


   if (FUNC_4(VAR_3))
   {
      FUNC_5(VAR_3);
   }


   FUNC_2(VAR_3, VAR_1);

   FUNC_1(VAR_3, 0xFF000000);
   FUNC_1(VAR_3, 0x00000000);
}
