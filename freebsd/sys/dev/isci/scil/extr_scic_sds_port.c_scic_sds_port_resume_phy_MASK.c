
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int phy_index; } ;
struct TYPE_6__ {int enabled_phy_mask; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_PORT_T * VAR_0,
   SCIC_SDS_PHY_T * VAR_1
)
{
   FUNC_0 (VAR_1);
   VAR_0->enabled_phy_mask |= 1 << VAR_1->phy_index;
}
