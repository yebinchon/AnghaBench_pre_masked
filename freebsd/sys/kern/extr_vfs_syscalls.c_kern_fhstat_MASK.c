
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct stat {int dummy; } ;
struct mount {int dummy; } ;
struct fhandle {int fh_fid; int fh_fsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*,int *,int ,struct vnode**) ;
 int FUNC_1 (struct thread*,int ) ;
 struct mount* FUNC_2 (int *) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct vnode*,struct stat*,int ,int ,struct thread*) ;
 int FUNC_5 (struct vnode*) ;

int
FUNC_6(struct thread *VAR_4, struct fhandle VAR_5, struct stat *VAR_6)
{
 struct mount *VAR_7;
 struct vnode *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_3);
 if (VAR_9 != 0)
  return (VAR_9);
 if ((VAR_7 = FUNC_2(&VAR_5.fh_fsid)) == ((void*)0))
  return (VAR_0);
 VAR_9 = FUNC_0(VAR_7, &VAR_5.fh_fid, VAR_1, &VAR_8);
 FUNC_3(VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_9 = FUNC_4(VAR_8, VAR_6, VAR_4->td_ucred, VAR_2, VAR_4);
 FUNC_5(VAR_8);
 return (VAR_9);
}
