
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {size_t td_oncpu; int td_owepreempt; int td_critnest; } ;
struct TYPE_2__ {int lo_flags; } ;
struct rmlock {TYPE_1__ lock_object; } ;
struct rm_priotracker {int rmp_flags; struct thread* rmp_thread; } ;
struct pcpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct thread*,struct rm_priotracker*) ;
 struct pcpu** VAR_1 ;
 int FUNC_4 (struct pcpu*,struct rm_priotracker*) ;
 int FUNC_5 () ;

void
FUNC_6(struct rmlock *VAR_2, struct rm_priotracker *VAR_3)
{
 struct pcpu *VAR_4;
 struct thread *VAR_5 = VAR_3->rmp_thread;

 if (FUNC_0())
  return;

 VAR_5->td_critnest++;
 VAR_4 = VAR_1[VAR_5->td_oncpu];
 FUNC_4(VAR_4, VAR_3);
 VAR_5->td_critnest--;
 FUNC_5();

 if (VAR_2->lock_object.lo_flags & VAR_0)
  FUNC_1();

 if (FUNC_2(0 == (VAR_5->td_owepreempt | VAR_3->rmp_flags)))
  return;

 FUNC_3(VAR_5, VAR_3);
}
