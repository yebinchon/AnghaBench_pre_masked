
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; struct proc* td_proc; } ;
struct proc {int p_boundary_count; int p_suspcount; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct thread*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_3, struct proc *VAR_4, bool VAR_5)
{

 FUNC_4(VAR_3, VAR_0);
 FUNC_0(FUNC_3(VAR_3), ("Thread not suspended"));
 FUNC_2(VAR_3);
 VAR_3->td_flags &= ~VAR_1;
 if (VAR_3->td_proc == VAR_4) {
  FUNC_1(VAR_4, VAR_0);
  VAR_4->p_suspcount--;
  if (VAR_5 && (VAR_3->td_flags & VAR_2) != 0) {
   VAR_3->td_flags &= ~VAR_2;
   VAR_4->p_boundary_count--;
  }
 }
 return (FUNC_5(VAR_3));
}
