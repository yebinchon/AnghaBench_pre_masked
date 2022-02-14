
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int va_vaflags; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int FUNC_1 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_2(struct vnode *VAR_3, struct vattr *VAR_4, struct ucred *VAR_5,
    struct thread *VAR_6)
{
 int VAR_7;
 VAR_7 = FUNC_1(VAR_3, VAR_2, VAR_5, VAR_6);
 if (VAR_7 != 0 && (VAR_4->va_vaflags & VAR_0) != 0)
  VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_5, VAR_6);
 return (VAR_7);
}
