
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct filecaps {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct filedesc*,struct file*,int,int,struct filecaps*) ;
 int FUNC_4 (struct thread*,int ,int*) ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct file*) ;

int
FUNC_7(struct thread *VAR_1, struct file *VAR_2, int *VAR_3, int VAR_4,
    struct filecaps *VAR_5)
{
 struct filedesc *VAR_6 = VAR_1->td_proc->p_fd;
 int VAR_7;

 FUNC_2(VAR_3 != ((void*)0));

 if (!FUNC_6(VAR_2))
  return (VAR_0);
 FUNC_0(VAR_6);
 if ((VAR_7 = FUNC_4(VAR_1, 0, VAR_3))) {
  FUNC_1(VAR_6);
  FUNC_5(VAR_2, VAR_1);
  return (VAR_7);
 }
 FUNC_3(VAR_6, VAR_2, *VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_6);
 return (0);
}
