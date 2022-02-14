
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_signal {int ev; struct internal_signal* next; struct internal_signal* ev_signal; } ;
struct comm_signal {int ev; struct comm_signal* next; struct comm_signal* ev_signal; } ;


 int FUNC_0 (struct internal_signal*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct comm_signal* VAR_0)
{
 struct internal_signal* VAR_1, *VAR_2;
 if(!VAR_0)
  return;
 VAR_1=VAR_0->ev_signal;
 while(VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_2(VAR_1->ev);
  FUNC_1(VAR_1->ev);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_0(VAR_0);
}
