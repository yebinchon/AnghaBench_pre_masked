
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {int suspend_timer_running; TYPE_3__ suspend_timer; int suspend_timer_timeout; } ;
typedef TYPE_1__ VCHIQ_ARM_STATE_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

inline void
FUNC_3(VCHIQ_ARM_STATE_T *VAR_1)
{
 FUNC_1(&VAR_1->suspend_timer);
 VAR_1->suspend_timer.expires = VAR_0 +
  FUNC_2(VAR_1->
   suspend_timer_timeout);
 FUNC_0(&VAR_1->suspend_timer);
 VAR_1->suspend_timer_running = 1;
}
