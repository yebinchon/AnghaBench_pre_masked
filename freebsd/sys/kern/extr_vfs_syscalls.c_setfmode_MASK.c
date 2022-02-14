
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int va_mode; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vattr*) ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct ucred*,struct vnode*,int) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vnode*,int) ;
 int FUNC_6 (struct vnode*,struct mount**,int) ;

int
FUNC_7(struct thread *VAR_5, struct ucred *VAR_6, struct vnode *VAR_7, int VAR_8)
{
 struct mount *VAR_9;
 struct vattr VAR_10;
 int VAR_11;

 if ((VAR_11 = FUNC_6(VAR_7, &VAR_9, VAR_4 | VAR_3)) != 0)
  return (VAR_11);
 FUNC_5(VAR_7, VAR_1 | VAR_2);
 FUNC_0(&VAR_10);
 VAR_10.va_mode = VAR_8 & VAR_0;




  VAR_11 = FUNC_1(VAR_7, &VAR_10, VAR_6);
 FUNC_2(VAR_7, 0);
 FUNC_4(VAR_9);
 return (VAR_11);
}
