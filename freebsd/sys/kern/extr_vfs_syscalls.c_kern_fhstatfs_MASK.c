
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct statfs {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_3__ {int fh_fid; int fh_fsid; } ;
typedef TYPE_1__ fhandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mount*,int *,int ,struct vnode**) ;
 int FUNC_1 (struct mount*,struct statfs*) ;
 int FUNC_2 (int ,struct mount*) ;
 int FUNC_3 (int ,struct mount*) ;
 int FUNC_4 (struct thread*,int ) ;
 struct mount* FUNC_5 (int *) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(struct thread *VAR_3, fhandle_t VAR_4, struct statfs *VAR_5)
{
 struct mount *VAR_6;
 struct vnode *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3, VAR_2);
 if (VAR_8 != 0)
  return (VAR_8);
 if ((VAR_6 = FUNC_5(&VAR_4.fh_fsid)) == ((void*)0))
  return (VAR_0);
 VAR_8 = FUNC_0(VAR_6, &VAR_4.fh_fid, VAR_1, &VAR_7);
 if (VAR_8 != 0) {
  FUNC_6(VAR_6);
  return (VAR_8);
 }
 FUNC_7(VAR_7);
 VAR_8 = FUNC_3(VAR_3->td_ucred, VAR_6);
 if (VAR_8 != 0)
  goto out;





 VAR_8 = FUNC_1(VAR_6, VAR_5);
out:
 FUNC_6(VAR_6);
 return (VAR_8);
}
