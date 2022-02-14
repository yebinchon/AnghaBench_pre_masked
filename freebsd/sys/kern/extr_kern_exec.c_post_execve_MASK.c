
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct thread {int td_pflags; struct proc* td_proc; } ;
struct proc {int p_flag; struct vmspace* p_vmspace; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct thread* VAR_5 ;
 int FUNC_3 (struct proc*,int ) ;
 int FUNC_4 (struct proc*,int ) ;
 int FUNC_5 (struct vmspace*) ;

void
FUNC_6(struct thread *VAR_6, int VAR_7, struct vmspace *VAR_8)
{
 struct proc *VAR_9;

 FUNC_0(VAR_6 == VAR_5, ("non-current thread %p", VAR_6));
 VAR_9 = VAR_6->td_proc;
 if ((VAR_9->p_flag & VAR_1) != 0) {
  FUNC_1(VAR_9);




  if (VAR_7 == VAR_0)
   FUNC_3(VAR_9, VAR_3);
  else
   FUNC_4(VAR_9, VAR_2);
  FUNC_2(VAR_9);
 }
 if ((VAR_6->td_pflags & VAR_4) != 0) {
  FUNC_0(VAR_9->p_vmspace != VAR_8,
      ("oldvmspace still used"));
  FUNC_5(VAR_8);
  VAR_6->td_pflags &= ~VAR_4;
 }
}
