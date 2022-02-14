
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct thread {int dummy; } ;
struct mount {int mnt_flag; } ;
struct linux_syncfs_args {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct thread*,int ,int *,struct vnode**) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mount*,int ) ;
 int FUNC_7 (struct mount*,int ) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct mount*) ;
 scalar_t__ FUNC_10 (int *,struct mount**,int ) ;
 int FUNC_11 (struct vnode*) ;

int
FUNC_12(struct thread *VAR_7, struct linux_syncfs_args *VAR_8)
{
 struct mount *VAR_9;
 struct vnode *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_3(VAR_7, VAR_8->fd, &VAR_5, &VAR_10);
 if (VAR_11 != 0)





  return (VAR_11);

 VAR_9 = VAR_10->v_mount;
 FUNC_4(&VAR_6);
 VAR_11 = FUNC_6(VAR_9, VAR_0);
 if (VAR_11 != 0) {

  FUNC_5(&VAR_6);
  goto out;
 }
 if ((VAR_9->mnt_flag & VAR_2) == 0 &&
     FUNC_10(((void*)0), &VAR_9, VAR_4) == 0) {
  VAR_12 = FUNC_2(VAR_3);
  FUNC_7(VAR_9, VAR_1);
  FUNC_0(VAR_9, VAR_1);
  FUNC_1(VAR_12);
  FUNC_9(VAR_9);
 }
 FUNC_8(VAR_9);

 out:
 FUNC_11(VAR_10);
 return (VAR_11);
}
