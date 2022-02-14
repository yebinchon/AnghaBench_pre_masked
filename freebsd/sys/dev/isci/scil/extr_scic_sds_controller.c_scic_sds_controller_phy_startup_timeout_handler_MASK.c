
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phy_startup_timer_pending; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_1(
   void *VAR_3
)
{
   SCI_STATUS VAR_4;
   SCIC_SDS_CONTROLLER_T *VAR_5;
   VAR_5 = (SCIC_SDS_CONTROLLER_T *)VAR_3;

   VAR_5->phy_startup_timer_pending = VAR_0;

   VAR_4 = VAR_1;

   while (VAR_4 != VAR_2)
   {
      VAR_4 = FUNC_0(VAR_5);
   }
}
