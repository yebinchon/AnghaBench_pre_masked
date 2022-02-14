
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_flags; int td_priority; } ;
struct TYPE_2__ {scalar_t__ ts_estcpu; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,char*,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (struct thread*) ;
 TYPE_1__* FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;

void
FUNC_7(struct thread *VAR_2, struct thread *VAR_3)
{

 FUNC_1(VAR_0, "thread", FUNC_3(VAR_3), "exit",
     "prio:%d", VAR_3->td_priority);
 FUNC_5(VAR_2);
 FUNC_4(VAR_2)->ts_estcpu = FUNC_0(FUNC_4(VAR_2)->ts_estcpu +
     FUNC_4(VAR_3)->ts_estcpu);
 FUNC_6(VAR_2);
 FUNC_5(VAR_3);
 if ((VAR_3->td_flags & VAR_1) == 0)
  FUNC_2();
 FUNC_6(VAR_3);
}
