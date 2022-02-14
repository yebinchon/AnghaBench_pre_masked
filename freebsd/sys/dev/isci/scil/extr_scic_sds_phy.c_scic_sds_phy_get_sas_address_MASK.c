
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; int high; } ;
typedef TYPE_1__ SCI_SAS_ADDRESS_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(
   SCIC_SDS_PHY_T *VAR_1,
   SCI_SAS_ADDRESS_T *VAR_2
)
{
   FUNC_0((
      FUNC_3(VAR_1),
      VAR_0,
      "scic_sds_phy_get_sas_address(this_phy:0x%x, sas_address:0x%x)\n",
      VAR_1, VAR_2
   ));

   VAR_2->high = FUNC_1(VAR_1);
   VAR_2->low = FUNC_2(VAR_1);
}
