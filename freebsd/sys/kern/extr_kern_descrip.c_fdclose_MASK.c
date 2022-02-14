
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {TYPE_2__* fd_ofiles; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct file* fde_file; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*,int) ;
 int FUNC_3 (struct file*,struct thread*) ;

void
FUNC_4(struct thread *VAR_0, struct file *VAR_1, int VAR_2)
{
 struct filedesc *VAR_3 = VAR_0->td_proc->p_fd;

 FUNC_0(VAR_3);
 if (VAR_3->fd_ofiles[VAR_2].fde_file == VAR_1) {
  FUNC_2(VAR_3, VAR_2);
  FUNC_1(VAR_3);
  FUNC_3(VAR_1, VAR_0);
 } else
  FUNC_1(VAR_3);
}
