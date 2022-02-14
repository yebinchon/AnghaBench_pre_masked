
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct proc {TYPE_1__* p_itimers; } ;
struct itimer {scalar_t__ it_usecount; int it_ksi; int it_clockid; int it_flags; int it_mtx; } ;
struct TYPE_2__ {int ** its_timers; } ;


 int FUNC_0 (int ,int ,struct itimer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct itimer*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 struct itimer* FUNC_5 (struct proc*,int) ;
 int VAR_4 ;
 int FUNC_6 (struct itimer*,int *,int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int ,struct itimer*) ;

int
FUNC_9(struct thread *VAR_6, int VAR_7)
{
 struct proc *VAR_8 = VAR_6->td_proc;
 struct itimer *VAR_9;

 FUNC_3(VAR_8);
 VAR_9 = FUNC_5(VAR_8, VAR_7);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_8);
  return (VAR_0);
 }
 FUNC_4(VAR_8);

 VAR_9->it_flags |= VAR_1;
 while (VAR_9->it_usecount > 0) {
  VAR_9->it_flags |= VAR_2;
  FUNC_6(VAR_9, &VAR_9->it_mtx, VAR_3, "itimer", 0);
 }
 VAR_9->it_flags &= ~VAR_2;
 FUNC_0(VAR_9->it_clockid, VAR_5, (VAR_9));
 FUNC_1(VAR_9);

 FUNC_3(VAR_8);
 if (FUNC_2(&VAR_9->it_ksi))
  FUNC_7(&VAR_9->it_ksi);
 VAR_8->p_itimers->its_timers[VAR_7] = ((void*)0);
 FUNC_4(VAR_8);
 FUNC_8(VAR_4, VAR_9);
 return (0);
}
