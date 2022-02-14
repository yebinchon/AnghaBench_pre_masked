
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct filedesc {struct vnode* fd_rdir; struct vnode* fd_cdir; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t,int ,int ) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (struct thread*,struct vnode*,struct vnode*,char*,char**,size_t) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct thread *VAR_8, char *VAR_9, enum uio_seg VAR_10, size_t VAR_11,
    size_t VAR_12)
{
 char *VAR_13, *VAR_14;
 struct filedesc *VAR_15;
 struct vnode *VAR_16, *VAR_17;
 int VAR_18;

 if (FUNC_3(VAR_7))
  return (VAR_1);
 if (FUNC_3(VAR_11 < 2))
  return (VAR_0);
 if (VAR_11 > VAR_12)
  VAR_11 = VAR_12;

 VAR_14 = FUNC_8(VAR_11, VAR_3, VAR_4);
 VAR_15 = VAR_8->td_proc->p_fd;
 FUNC_0(VAR_15);
 VAR_16 = VAR_15->fd_cdir;
 FUNC_11(VAR_16);
 VAR_17 = VAR_15->fd_rdir;
 FUNC_11(VAR_17);
 FUNC_1(VAR_15);
 VAR_18 = FUNC_10(VAR_8, VAR_16, VAR_17, VAR_14, &VAR_13, VAR_11);
 FUNC_12(VAR_17);
 FUNC_12(VAR_16);

 if (!VAR_18) {
  if (VAR_10 == VAR_5)
   FUNC_4(VAR_13, VAR_9, FUNC_9(VAR_13) + 1);
  else
   VAR_18 = FUNC_5(VAR_13, VAR_9, FUNC_9(VAR_13) + 1);




 }
 FUNC_6(VAR_14, VAR_3);
 return (VAR_18);
}
