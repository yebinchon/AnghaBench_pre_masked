
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ss_flags; scalar_t__ ss_size; } ;
struct thread {int td_pflags; TYPE_2__ td_sigstk; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sysent; } ;
typedef TYPE_2__ stack_t ;
struct TYPE_5__ {scalar_t__ sv_minsigstksz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct thread *VAR_6, stack_t *VAR_7, stack_t *VAR_8)
{
 struct proc *VAR_9 = VAR_6->td_proc;
 int VAR_10;

 VAR_10 = FUNC_1(FUNC_0(VAR_6));

 if (VAR_8 != ((void*)0)) {
  *VAR_8 = VAR_6->td_sigstk;
  VAR_8->ss_flags = (VAR_6->td_pflags & VAR_5)
      ? ((VAR_10) ? VAR_4 : 0) : VAR_3;
 }

 if (VAR_7 != ((void*)0)) {
  if (VAR_10)
   return (VAR_2);
  if ((VAR_7->ss_flags & ~VAR_3) != 0)
   return (VAR_0);
  if (!(VAR_7->ss_flags & VAR_3)) {
   if (VAR_7->ss_size < VAR_9->p_sysent->sv_minsigstksz)
    return (VAR_1);

   VAR_6->td_sigstk = *VAR_7;
   VAR_6->td_pflags |= VAR_5;
  } else {
   VAR_6->td_pflags &= ~VAR_5;
  }
 }
 return (0);
}
