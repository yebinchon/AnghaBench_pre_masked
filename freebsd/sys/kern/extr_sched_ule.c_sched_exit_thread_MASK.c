
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_priority; } ;
struct TYPE_2__ {scalar_t__ ts_runtime; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*,char*,int ) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 TYPE_1__* FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;

void
FUNC_7(struct thread *VAR_1, struct thread *VAR_2)
{

 FUNC_0(VAR_0, "thread", FUNC_3(VAR_2), "thread exit",
     "prio:%d", VAR_2->td_priority);





 FUNC_5(VAR_1);
 FUNC_4(VAR_1)->ts_runtime += FUNC_4(VAR_2)->ts_runtime;
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1);
}
