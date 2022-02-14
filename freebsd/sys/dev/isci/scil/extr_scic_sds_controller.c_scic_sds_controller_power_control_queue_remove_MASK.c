
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ** requesters; int phys_waiting; } ;
struct TYPE_8__ {TYPE_1__ power_control; } ;
struct TYPE_7__ {size_t phy_index; } ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;

void FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_0,
   SCIC_SDS_PHY_T *VAR_1
)
{
   FUNC_0 (VAR_1 != ((void*)0));

   if (VAR_0->power_control.requesters[VAR_1->phy_index] != ((void*)0))
   {
      VAR_0->power_control.phys_waiting--;
   }

   VAR_0->power_control.requesters[VAR_1->phy_index] = ((void*)0);
}
