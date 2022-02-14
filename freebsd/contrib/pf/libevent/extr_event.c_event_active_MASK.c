
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int ev_flags; int ev_res; short ev_ncalls; int ev_base; int * ev_pncalls; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct event*,int) ;

void
FUNC_1(struct event *VAR_1, int VAR_2, short VAR_3)
{

 if (VAR_1->ev_flags & VAR_0) {
  VAR_1->ev_res |= VAR_2;
  return;
 }

 VAR_1->ev_res = VAR_2;
 VAR_1->ev_ncalls = VAR_3;
 VAR_1->ev_pncalls = ((void*)0);
 FUNC_0(VAR_1->ev_base, VAR_1, VAR_0);
}
