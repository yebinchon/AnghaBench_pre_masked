
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;


 struct vattr* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;

int
FUNC_2(struct vnode *VAR_0, struct vattr *VAR_1, struct ucred *VAR_2,
 struct thread *VAR_3)
{
 struct vattr *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_0)) != ((void*)0)) {
  *VAR_1 = *VAR_4;
  return 0;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
