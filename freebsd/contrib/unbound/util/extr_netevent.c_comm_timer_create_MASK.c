
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_timer {void (* callback ) (void*) ;void* cb_arg; struct internal_timer* ev_timer; } ;
struct internal_timer {struct comm_timer super; int * ev; struct comm_base* base; } ;
struct comm_base {TYPE_1__* eb; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct internal_timer*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int,int ,int ,struct comm_timer*) ;

struct comm_timer*
FUNC_4(struct comm_base* VAR_2, void (*VAR_3)(void*), void* VAR_4)
{
 struct internal_timer *VAR_5 = (struct internal_timer*)FUNC_0(1,
  sizeof(struct internal_timer));
 if(!VAR_5) {
  FUNC_2("malloc failed");
  return ((void*)0);
 }
 VAR_5->super.ev_timer = VAR_5;
 VAR_5->base = VAR_2;
 VAR_5->super.callback = VAR_3;
 VAR_5->super.cb_arg = VAR_4;
 VAR_5->ev = FUNC_3(VAR_2->eb->base, -1, VAR_0,
  VAR_1, &VAR_5->super);
 if(VAR_5->ev == ((void*)0)) {
  FUNC_2("timer_create: event_base_set failed.");
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 return &VAR_5->super;
}
