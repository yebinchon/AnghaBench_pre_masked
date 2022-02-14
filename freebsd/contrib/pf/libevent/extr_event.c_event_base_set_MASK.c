
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int nactivequeues; } ;
struct event {scalar_t__ ev_flags; int ev_pri; struct event_base* ev_base; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct event_base *VAR_1, struct event *VAR_2)
{

 if (VAR_2->ev_flags != VAR_0)
  return (-1);

 VAR_2->ev_base = VAR_1;
 VAR_2->ev_pri = VAR_1->nactivequeues/2;

 return (0);
}
