
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phy_startup_timer_pending; int phy_startup_timer; } ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_2
)
{
   FUNC_0(
      VAR_2,
      VAR_2->phy_startup_timer,
      VAR_0
   );

   VAR_2->phy_startup_timer_pending = VAR_1;
}
