
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int invalid_phy_mask; } ;
struct TYPE_9__ {int phy_index; } ;
typedef int SCIC_SDS_PORT_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int *) ;

void FUNC_3(
   SCIC_SDS_PORT_T * VAR_0,
   SCIC_SDS_PHY_T * VAR_1
)
{
   SCIC_SDS_CONTROLLER_T * VAR_2 = FUNC_2(VAR_0);



   if ((VAR_2->invalid_phy_mask & (1 << VAR_1->phy_index)) == 0)
   {
      FUNC_1(VAR_2, VAR_1);

      FUNC_0(VAR_2, VAR_0, VAR_1);
   }
}
