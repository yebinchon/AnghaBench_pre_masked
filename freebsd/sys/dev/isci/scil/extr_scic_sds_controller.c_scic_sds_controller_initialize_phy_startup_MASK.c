
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int phy_startup_timer_pending; scalar_t__ next_phy_to_start; int * phy_startup_timer; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_4
)
{
   VAR_4->phy_startup_timer = FUNC_0(
      VAR_4,
      VAR_3,
      VAR_4
   );

   if (VAR_4->phy_startup_timer == ((void*)0))
   {
      return VAR_1;
   }
   else
   {
      VAR_4->next_phy_to_start = 0;
      VAR_4->phy_startup_timer_pending = VAR_0;
   }

   return VAR_2;
}
