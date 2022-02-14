
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int p_flag; } ;


 struct thread* FUNC_0 (struct proc*) ;
 struct proc* FUNC_1 (struct proc*,int ) ;
 int VAR_0 ;
 struct thread* FUNC_2 (struct thread*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

struct thread *
FUNC_3(struct thread *VAR_3)
{
 struct proc *VAR_4;

 VAR_4 = VAR_3->td_proc;
 VAR_3 = FUNC_2(VAR_3, VAR_2);
 do {
  if (VAR_3 != ((void*)0))
   return (VAR_3);
  VAR_4 = FUNC_1(VAR_4, VAR_1);
  if (VAR_4 != ((void*)0) && (VAR_4->p_flag & VAR_0))
   VAR_3 = FUNC_0(VAR_4);
 } while (VAR_4 != ((void*)0));
 return (((void*)0));
}
