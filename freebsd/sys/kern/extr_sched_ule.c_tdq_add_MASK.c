
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_inhibitors; int td_flags; scalar_t__ td_priority; } ;
struct tdq {scalar_t__ tdq_lowpri; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tdq*,int ) ;
 scalar_t__ FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread*) ;
 int FUNC_4 (struct tdq*,struct thread*) ;
 int FUNC_5 (struct tdq*,struct thread*,int) ;

void
FUNC_6(struct tdq *VAR_2, struct thread *VAR_3, int VAR_4)
{

 FUNC_1(VAR_2, VAR_0);
 FUNC_0((VAR_3->td_inhibitors == 0),
     ("sched_add: trying to run inhibited thread"));
 FUNC_0((FUNC_2(VAR_3) || FUNC_3(VAR_3)),
     ("sched_add: bad thread state"));
 FUNC_0(VAR_3->td_flags & VAR_1,
     ("sched_add: thread swapped out"));

 if (VAR_3->td_priority < VAR_2->tdq_lowpri)
  VAR_2->tdq_lowpri = VAR_3->td_priority;
 FUNC_5(VAR_2, VAR_3, VAR_4);
 FUNC_4(VAR_2, VAR_3);
}
