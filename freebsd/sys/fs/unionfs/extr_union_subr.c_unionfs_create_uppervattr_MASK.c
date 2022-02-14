
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct unionfs_mount {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_1 (struct unionfs_mount*,struct vattr*,struct vattr*,struct thread*) ;

int
FUNC_2(struct unionfs_mount *VAR_0,
     struct vnode *VAR_1,
     struct vattr *VAR_2,
     struct ucred *VAR_3,
     struct thread *VAR_4)
{
 int VAR_5;
 struct vattr VAR_6;

 if ((VAR_5 = FUNC_0(VAR_1, &VAR_6, VAR_3)))
  return (VAR_5);

 FUNC_1(VAR_0, &VAR_6, VAR_2, VAR_4);

 return (VAR_5);
}
