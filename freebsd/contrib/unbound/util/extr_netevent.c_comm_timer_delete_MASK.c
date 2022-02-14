
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_timer {TYPE_1__* ev_timer; } ;
struct TYPE_2__ {int ev; } ;


 int FUNC_0 (struct comm_timer*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct comm_timer* VAR_0)
{
 if(!VAR_0)
  return;
 FUNC_0(VAR_0);



 FUNC_2(VAR_0->ev_timer->ev);
 FUNC_1(VAR_0->ev_timer);
}
