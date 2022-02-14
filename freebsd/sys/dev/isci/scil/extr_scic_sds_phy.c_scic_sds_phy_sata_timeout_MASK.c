
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SCI_OBJECT_HANDLE_T ;
typedef int SCIC_SDS_PHY_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( SCI_OBJECT_HANDLE_T VAR_2)
{
   SCIC_SDS_PHY_T * VAR_3 = (SCIC_SDS_PHY_T *)VAR_2;

   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_0,
      "SCIC SDS Phy 0x%x did not receive signature fis before timeout.\n",
      VAR_3
   ));

   FUNC_3(
      FUNC_5(VAR_3));

   FUNC_2(
      FUNC_4(VAR_3),
      VAR_1
   );
}
