
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCU_LINK_LAYER_REGISTERS_T ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,void*) ;

SCI_STATUS FUNC_6(
   SCIC_SDS_PHY_T *VAR_3,
   void *VAR_4,
   SCU_LINK_LAYER_REGISTERS_T *VAR_5
)
{
   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_0,
      "scic_sds_phy_initialize(this_phy:0x%x, link_layer_registers:0x%x)\n",
      VAR_3, VAR_5
   ));


   FUNC_5(VAR_3, VAR_4);


   FUNC_4(VAR_3, VAR_5);



   FUNC_2(
      FUNC_3(VAR_3),
      VAR_1
   );

   return VAR_2;
}
