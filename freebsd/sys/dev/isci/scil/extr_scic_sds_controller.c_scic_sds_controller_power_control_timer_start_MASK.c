
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timer_started; int timer; } ;
struct TYPE_6__ {TYPE_1__ power_control; } ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_2
)
{
   FUNC_0(
      VAR_2, VAR_2->power_control.timer,
      VAR_0
   );

   VAR_2->power_control.timer_started = VAR_1;
}
