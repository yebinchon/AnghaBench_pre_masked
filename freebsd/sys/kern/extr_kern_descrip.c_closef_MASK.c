
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {TYPE_2__* td_proc; } ;
struct flock {void* l_type; scalar_t__ l_len; scalar_t__ l_start; void* l_whence; } ;
struct filedesc_to_leader {scalar_t__ fdl_holdcount; scalar_t__ fdl_wakeup; TYPE_3__* fdl_leader; struct filedesc_to_leader* fdl_next; } ;
struct filedesc {int dummy; } ;
struct file {scalar_t__ f_type; struct vnode* f_vnode; } ;
typedef int caddr_t ;
struct TYPE_6__ {int p_flag; } ;
struct TYPE_5__ {struct filedesc_to_leader* p_fdtol; struct filedesc* p_fd; TYPE_1__* p_leader; } ;
struct TYPE_4__ {int p_flag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (struct vnode*,int ,void*,struct flock*,int ) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct filedesc_to_leader*) ;

int
FUNC_5(struct file *VAR_5, struct thread *VAR_6)
{
 struct vnode *VAR_7;
 struct flock VAR_8;
 struct filedesc_to_leader *VAR_9;
 struct filedesc *VAR_10;
 if (VAR_5->f_type == VAR_0 && VAR_6 != ((void*)0)) {
  VAR_7 = VAR_5->f_vnode;
  if ((VAR_6->td_proc->p_leader->p_flag & VAR_3) != 0) {
   VAR_8.l_whence = VAR_4;
   VAR_8.l_start = 0;
   VAR_8.l_len = 0;
   VAR_8.l_type = VAR_2;
   (void) FUNC_2(VAR_7, (caddr_t)VAR_6->td_proc->p_leader,
       VAR_2, &VAR_8, VAR_1);
  }
  VAR_9 = VAR_6->td_proc->p_fdtol;
  if (VAR_9 != ((void*)0)) {




   VAR_10 = VAR_6->td_proc->p_fd;
   FUNC_0(VAR_10);
   for (VAR_9 = VAR_9->fdl_next;
       VAR_9 != VAR_6->td_proc->p_fdtol;
       VAR_9 = VAR_9->fdl_next) {
    if ((VAR_9->fdl_leader->p_flag &
        VAR_3) == 0)
     continue;
    VAR_9->fdl_holdcount++;
    FUNC_1(VAR_10);
    VAR_8.l_whence = VAR_4;
    VAR_8.l_start = 0;
    VAR_8.l_len = 0;
    VAR_8.l_type = VAR_2;
    VAR_7 = VAR_5->f_vnode;
    (void) FUNC_2(VAR_7,
        (caddr_t)VAR_9->fdl_leader, VAR_2, &VAR_8,
        VAR_1);
    FUNC_0(VAR_10);
    VAR_9->fdl_holdcount--;
    if (VAR_9->fdl_holdcount == 0 &&
        VAR_9->fdl_wakeup != 0) {
     VAR_9->fdl_wakeup = 0;
     FUNC_4(VAR_9);
    }
   }
   FUNC_1(VAR_10);
  }
 }
 return (FUNC_3(VAR_5, VAR_6));
}
