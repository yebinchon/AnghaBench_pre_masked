
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {struct filedesc* p_fd; } ;
struct filedesc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 scalar_t__ FUNC_1 (struct thread*,int ,int*) ;
 int FUNC_2 (struct filedesc*,int) ;

int
FUNC_3(struct thread *VAR_1, int VAR_2, int *VAR_3, int VAR_4)
{
 struct proc *VAR_5 = VAR_1->td_proc;
 struct filedesc *VAR_6 = VAR_5->p_fd;
 int VAR_7;

 FUNC_0(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  if (FUNC_1(VAR_1, 0, &VAR_3[VAR_7]) != 0)
   break;

 if (VAR_7 < VAR_4) {
  for (VAR_7--; VAR_7 >= 0; VAR_7--)
   FUNC_2(VAR_6, VAR_3[VAR_7]);
  return (VAR_0);
 }

 return (0);
}
