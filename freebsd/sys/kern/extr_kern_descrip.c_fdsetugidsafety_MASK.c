
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
struct filedesc {int fd_refcnt; int fd_nfiles; TYPE_1__* fd_ofiles; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct filedesc* p_fd; } ;
struct TYPE_3__ {struct file* fde_file; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct filedesc*,int) ;
 scalar_t__ FUNC_6 (struct file*) ;
 int FUNC_7 (struct thread*,int) ;

void
FUNC_8(struct thread *VAR_0)
{
 struct filedesc *VAR_1;
 struct file *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->td_proc->p_fd;
 FUNC_2(VAR_1->fd_refcnt == 1, ("the fdtable should not be shared"));
 FUNC_3(VAR_1->fd_nfiles >= 3);
 for (VAR_3 = 0; VAR_3 <= 2; VAR_3++) {
  VAR_2 = VAR_1->fd_ofiles[VAR_3].fde_file;
  if (VAR_2 != ((void*)0) && FUNC_6(VAR_2)) {
   FUNC_0(VAR_1);
   FUNC_7(VAR_0, VAR_3);




   FUNC_5(VAR_1, VAR_3);
   FUNC_1(VAR_1);
   (void) FUNC_4(VAR_2, VAR_0);
  }
 }
}
