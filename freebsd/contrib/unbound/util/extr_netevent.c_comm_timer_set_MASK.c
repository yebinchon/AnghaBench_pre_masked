
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct comm_timer {TYPE_3__* ev_timer; } ;
struct TYPE_6__ {int enabled; TYPE_2__* base; int ev; } ;
struct TYPE_5__ {TYPE_1__* eb; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct comm_timer*) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct comm_timer*,struct timeval*) ;

void
FUNC_4(struct comm_timer* VAR_1, struct timeval* VAR_2)
{
 FUNC_1(VAR_2);
 if(VAR_1->ev_timer->enabled)
  FUNC_0(VAR_1);
 if(FUNC_3(VAR_1->ev_timer->ev, VAR_1->ev_timer->base->eb->base,
  VAR_0, VAR_1, VAR_2) != 0)
  FUNC_2("comm_timer_set: evtimer_add failed.");
 VAR_1->ev_timer->enabled = 1;
}
