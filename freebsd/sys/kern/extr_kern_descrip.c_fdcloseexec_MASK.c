
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedescent {int fde_flags; struct file* fde_file; } ;
struct filedesc {int fd_refcnt; int fd_lastfile; struct filedescent* fd_ofiles; } ;
struct file {scalar_t__ f_type; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct filedesc*,int,struct file*,struct thread*,int ) ;
 int FUNC_4 (struct filedesc*,int) ;

void
FUNC_5(struct thread *VAR_2)
{
 struct filedesc *VAR_3;
 struct filedescent *VAR_4;
 struct file *VAR_5;
 int VAR_6;

 VAR_3 = VAR_2->td_proc->p_fd;
 FUNC_2(VAR_3->fd_refcnt == 1, ("the fdtable should not be shared"));
 for (VAR_6 = 0; VAR_6 <= VAR_3->fd_lastfile; VAR_6++) {
  VAR_4 = &VAR_3->fd_ofiles[VAR_6];
  VAR_5 = VAR_4->fde_file;
  if (VAR_5 != ((void*)0) && (VAR_5->f_type == VAR_0 ||
      (VAR_4->fde_flags & VAR_1))) {
   FUNC_1(VAR_3);
   FUNC_4(VAR_3, VAR_6);
   (void) FUNC_3(VAR_3, VAR_6, VAR_5, VAR_2, 0);
   FUNC_0(VAR_3);
  }
 }
}
