
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PHY_HANDLE_T ;
typedef int SCIC_SDS_PHY_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCI_PHY_HANDLE_T VAR_3
)
{
   SCIC_SDS_PHY_T *VAR_4;
   VAR_4 = (SCIC_SDS_PHY_T *)VAR_3;

   FUNC_1(*(
      FUNC_2(VAR_4),
      VAR_1,
      "scic_sata_phy_send_port_selection_signals(0x%x) enter\n",
      VAR_4
   ));


   FUNC_0(VAR_0);
   return VAR_2;
}
