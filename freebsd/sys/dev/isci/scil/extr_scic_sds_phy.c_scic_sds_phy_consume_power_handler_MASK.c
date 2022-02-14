
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* state_handlers; } ;
struct TYPE_6__ {int (* consume_power_handler ) (TYPE_2__*) ;} ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_PHY_T *VAR_1
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_sds_phy_consume_power_handler(this_phy:0x%08x)\n",
      VAR_1
   ));

   return VAR_1->state_handlers->consume_power_handler(VAR_1);
}
