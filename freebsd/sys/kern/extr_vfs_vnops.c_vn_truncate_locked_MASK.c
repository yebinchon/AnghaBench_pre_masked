
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int va_vaflags; int va_size; } ;
struct ucred {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (struct vattr*) ;
 int VAR_0 ;
 int FUNC_1 (struct vnode*,int) ;
 int FUNC_2 (struct vnode*,int) ;
 int FUNC_3 (struct vnode*,struct vattr*,struct ucred*) ;

int
FUNC_4(struct vnode *VAR_1, off_t VAR_2, bool VAR_3,
    struct ucred *VAR_4)
{
 struct vattr VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, 1);
 if (VAR_6 == 0) {
  FUNC_0(&VAR_5);
  VAR_5.va_size = VAR_2;
  if (VAR_3)
   VAR_5.va_vaflags |= VAR_0;
  VAR_6 = FUNC_3(VAR_1, &VAR_5, VAR_4);
  FUNC_2(VAR_1, -1);
 }
 return (VAR_6);
}
