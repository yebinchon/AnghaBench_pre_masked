
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct fhreadlink_args {scalar_t__ bufsize; int buf; int fhp; } ;
struct TYPE_3__ {int fh_fid; int fh_fsid; } ;
typedef TYPE_1__ fhandle_t ;
typedef int fh ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mount*,int *,int ,struct vnode**) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (struct vnode*,int ,int ,scalar_t__,struct thread*) ;
 int FUNC_3 (struct thread*,int ) ;
 struct mount* FUNC_4 (int *) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct vnode*) ;

int
FUNC_7(struct thread *VAR_6, struct fhreadlink_args *VAR_7)
{
 fhandle_t VAR_8;
 struct mount *VAR_9;
 struct vnode *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_6, VAR_4);
 if (VAR_11 != 0)
  return (VAR_11);
 if (VAR_7->bufsize > VAR_2)
  return (VAR_0);
 VAR_11 = FUNC_1(VAR_7->fhp, &VAR_8, sizeof(VAR_8));
 if (VAR_11 != 0)
  return (VAR_11);
 if ((VAR_9 = FUNC_4(&VAR_8.fh_fsid)) == ((void*)0))
  return (VAR_1);
 VAR_11 = FUNC_0(VAR_9, &VAR_8.fh_fid, VAR_3, &VAR_10);
 FUNC_5(VAR_9);
 if (VAR_11 != 0)
  return (VAR_11);
 VAR_11 = FUNC_2(VAR_10, VAR_7->buf, VAR_5, VAR_7->bufsize, VAR_6);
 FUNC_6(VAR_10);
 return (VAR_11);
}
