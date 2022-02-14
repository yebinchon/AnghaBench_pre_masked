
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_BASE_OBJECT_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static
void FUNC_6(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCIC_SDS_CONTROLLER_T *VAR_4;
   VAR_4= (SCIC_SDS_CONTROLLER_T *)VAR_3;

   FUNC_0(*(
      FUNC_1(VAR_4),
      VAR_0,
      "scic_sds_controller_resetting_state_enter(0x%x) enter\n",
      VAR_4
   ));

   FUNC_5(
      VAR_4, VAR_2);

   FUNC_4(VAR_4);

   FUNC_2(
      FUNC_3(VAR_4),
      VAR_1
   );
}
