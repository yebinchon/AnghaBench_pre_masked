
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_timer {TYPE_1__* ev_timer; } ;
struct TYPE_2__ {scalar_t__ enabled; int ev; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct comm_timer* VAR_0)
{
 if(!VAR_0)
  return;
 FUNC_0(VAR_0->ev_timer->ev);
 VAR_0->ev_timer->enabled = 0;
}
