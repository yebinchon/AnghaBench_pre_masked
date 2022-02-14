
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct internal_signal {struct internal_signal* next; int * ev; } ;
struct comm_signal {struct internal_signal* ev_signal; TYPE_2__* base; } ;
struct TYPE_4__ {TYPE_1__* eb; } ;
struct TYPE_3__ {int base; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct internal_signal*) ;
 int FUNC_2 (struct comm_signal*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int * FUNC_6 (int ,int,int ,struct comm_signal*) ;

int
FUNC_7(struct comm_signal* VAR_1, int VAR_2)
{
 struct internal_signal* VAR_3 = (struct internal_signal*)FUNC_0(1,
  sizeof(struct internal_signal));
 if(!VAR_3) {
  FUNC_3("malloc failed");
  return 0;
 }
 FUNC_2(VAR_1);

 VAR_3->ev = FUNC_6(VAR_1->base->eb->base, VAR_2,
  VAR_0, VAR_1);
 if(VAR_3->ev == ((void*)0)) {
  FUNC_3("Could not create signal event");
  FUNC_1(VAR_3);
  return 0;
 }
 if(FUNC_5(VAR_3->ev, ((void*)0)) != 0) {
  FUNC_3("Could not add signal handler");
  FUNC_4(VAR_3->ev);
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_3->next = VAR_1->ev_signal;
 VAR_1->ev_signal = VAR_3;
 return 1;
}
