
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event {void (* ev_callback ) (int,short,void*) ;int ev_fd; short ev_events; int ev_pri; int * ev_pncalls; scalar_t__ ev_ncalls; int ev_flags; void* ev_arg; TYPE_1__* ev_base; } ;
struct TYPE_2__ {int nactivequeues; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_0(struct event *VAR_2, int VAR_3, short VAR_4,
   void (*VAR_5)(int, short, void *), void *VAR_6)
{

 VAR_2->ev_base = VAR_1;

 VAR_2->ev_callback = VAR_5;
 VAR_2->ev_arg = VAR_6;
 VAR_2->ev_fd = VAR_3;
 VAR_2->ev_events = VAR_4;
 VAR_2->ev_flags = VAR_0;
 VAR_2->ev_ncalls = 0;
 VAR_2->ev_pncalls = ((void*)0);


 VAR_2->ev_pri = VAR_1->nactivequeues/2;
}
