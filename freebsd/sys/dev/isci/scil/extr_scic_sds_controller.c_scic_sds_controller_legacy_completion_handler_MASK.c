
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_6(
   SCI_CONTROLLER_HANDLE_T VAR_2
)
{
   SCIC_SDS_CONTROLLER_T *VAR_3 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_0((
      FUNC_4(VAR_2),
      VAR_0,
      "scic_sds_controller_legacy_completion_handler(0x%d) enter\n",
      VAR_2
   ));

   FUNC_5(VAR_2);

   FUNC_2(VAR_3, 0x00000000);
}
