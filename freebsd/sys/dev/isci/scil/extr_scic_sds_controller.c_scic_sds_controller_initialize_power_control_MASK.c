
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ remote_devices_granted_power; scalar_t__ phys_waiting; int requesters; int timer; } ;
struct TYPE_7__ {TYPE_1__ power_control; } ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_2__*) ;
 int VAR_0 ;

void FUNC_2(
   SCIC_SDS_CONTROLLER_T *VAR_1
)
{
   VAR_1->power_control.timer = FUNC_1(
      VAR_1,
      VAR_0,
      VAR_1
   );

   FUNC_0(
      VAR_1->power_control.requesters,
      0,
      sizeof(VAR_1->power_control.requesters)
   );

   VAR_1->power_control.phys_waiting = 0;
   VAR_1->power_control.remote_devices_granted_power = 0;
}
