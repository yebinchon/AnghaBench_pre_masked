
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct flock_args {int how; int fd; } ;
struct flock {int l_type; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
struct file {scalar_t__ f_type; int f_flag; struct vnode* f_vnode; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct vnode*,int ,int ,struct flock*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_15 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int ,int *,struct file**) ;

int
FUNC_5(struct thread *VAR_16, struct flock_args *VAR_17)
{
 struct file *VAR_18;
 struct vnode *VAR_19;
 struct flock VAR_20;
 int VAR_21;

 VAR_21 = FUNC_4(VAR_16, VAR_17->fd, &VAR_15, &VAR_18);
 if (VAR_21 != 0)
  return (VAR_21);
 if (VAR_18->f_type != VAR_0) {
  FUNC_3(VAR_18, VAR_16);
  return (VAR_2);
 }

 VAR_19 = VAR_18->f_vnode;
 VAR_20.l_whence = VAR_14;
 VAR_20.l_start = 0;
 VAR_20.l_len = 0;
 if (VAR_17->how & VAR_13) {
  VAR_20.l_type = VAR_7;
  FUNC_1(&VAR_18->f_flag, VAR_3);
  VAR_21 = FUNC_0(VAR_19, (caddr_t)VAR_18, VAR_7, &VAR_20, VAR_4);
  goto done2;
 }
 if (VAR_17->how & VAR_10)
  VAR_20.l_type = VAR_9;
 else if (VAR_17->how & VAR_12)
  VAR_20.l_type = VAR_5;
 else {
  VAR_21 = VAR_1;
  goto done2;
 }
 FUNC_2(&VAR_18->f_flag, VAR_3);
 VAR_21 = FUNC_0(VAR_19, (caddr_t)VAR_18, VAR_6, &VAR_20,
     (VAR_17->how & VAR_11) ? VAR_4 : VAR_4 | VAR_8);
done2:
 FUNC_3(VAR_18, VAR_16);
 return (VAR_21);
}
