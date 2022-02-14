
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int fd_nfiles; TYPE_2__* fd_ofiles; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct file* fde_file; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_1, int VAR_2, struct file **VAR_3, struct vnode **VAR_4)
{
 struct filedesc *VAR_5;
 struct file *VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_1->td_proc->p_fd;
 if (VAR_2 < 0 || VAR_2 >= VAR_5->fd_nfiles ||
     (VAR_6 = VAR_5->fd_ofiles[VAR_2].fde_file) == ((void*)0)) {
  VAR_7 = VAR_0;
  goto out;
 }
 *VAR_3 = VAR_6;

out:
 FUNC_0(VAR_7);
 return (VAR_7);
}
