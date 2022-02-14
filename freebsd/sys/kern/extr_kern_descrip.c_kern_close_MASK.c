
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct thread*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*) ;
 int FUNC_3 (struct filedesc*,int,struct file*,struct thread*,int) ;
 int FUNC_4 (struct filedesc*,int) ;
 struct file* FUNC_5 (struct filedesc*,int) ;

int
FUNC_6(struct thread *VAR_1, int VAR_2)
{
 struct filedesc *VAR_3;
 struct file *VAR_4;

 VAR_3 = VAR_1->td_proc->p_fd;

 FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_3);
 if ((VAR_4 = FUNC_5(VAR_3, VAR_2)) == ((void*)0)) {
  FUNC_2(VAR_3);
  return (VAR_0);
 }
 FUNC_4(VAR_3, VAR_2);


 return (FUNC_3(VAR_3, VAR_2, VAR_4, VAR_1, 1));
}
