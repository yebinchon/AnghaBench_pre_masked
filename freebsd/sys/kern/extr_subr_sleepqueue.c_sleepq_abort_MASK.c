
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_flags; int td_intrval; void* td_wchan; scalar_t__ td_name; TYPE_1__* td_proc; } ;
struct sleepqueue {int dummy; } ;
struct TYPE_2__ {scalar_t__ p_pid; } ;


 int FUNC_0 (int ,char*,void*,long,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ) ;
 struct sleepqueue* FUNC_5 (void*) ;
 int FUNC_6 (struct sleepqueue*,struct thread*,int ) ;

int
FUNC_7(struct thread *VAR_7, int VAR_8)
{
 struct sleepqueue *VAR_9;
 void *VAR_10;

 FUNC_4(VAR_7, VAR_3);
 FUNC_1(FUNC_3(VAR_7));
 FUNC_1(VAR_7->td_flags & VAR_4);
 FUNC_1(VAR_8 == VAR_0 || VAR_8 == VAR_1);





 if (VAR_7->td_flags & VAR_6)
  return (0);

 FUNC_0(VAR_2, "sleepq_abort: thread %p (pid %ld, %s)",
     (void *)VAR_7, (long)VAR_7->td_proc->p_pid, (void *)VAR_7->td_name);
 VAR_7->td_intrval = VAR_8;
 VAR_7->td_flags |= VAR_5;





 if (!FUNC_2(VAR_7))
  return (0);
 VAR_10 = VAR_7->td_wchan;
 FUNC_1(VAR_10 != ((void*)0));
 VAR_9 = FUNC_5(VAR_10);
 FUNC_1(VAR_9 != ((void*)0));


 return (FUNC_6(VAR_9, VAR_7, 0));
}
