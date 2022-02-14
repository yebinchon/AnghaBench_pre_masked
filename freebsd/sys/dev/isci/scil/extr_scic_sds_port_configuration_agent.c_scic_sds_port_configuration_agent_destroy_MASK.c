
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ timer_pending; int * timer; } ;
typedef TYPE_1__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(
   SCIC_SDS_CONTROLLER_T * VAR_2,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_3
)
{
   if (VAR_3->timer_pending == VAR_1)
   {
      FUNC_1(VAR_2, VAR_3->timer);
   }

   FUNC_0(VAR_2, VAR_3->timer);

   VAR_3->timer_pending = VAR_0;
   VAR_3->timer = ((void*)0);
}
