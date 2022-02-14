
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_7__ {int * transport_layer_registers; } ;
typedef int SCU_TRANSPORT_LAYER_REGISTERS_T ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCIC_SDS_PHY_T *VAR_4,
   SCU_TRANSPORT_LAYER_REGISTERS_T *VAR_5
)
{
   U32 VAR_6;

   FUNC_0(*(
      FUNC_5(VAR_4),
      VAR_0,
      "scic_sds_phy_link_layer_initialization(this_phy:0x%x, link_layer_registers:0x%x)\n",
      VAR_4, VAR_5
   ));

   VAR_4->transport_layer_registers = VAR_5;

   FUNC_1(VAR_4, VAR_1);


   VAR_6 = FUNC_3(VAR_4);
   VAR_6 |= FUNC_2(VAR_3);
   FUNC_4(VAR_4, VAR_6);

   return VAR_2;
}
