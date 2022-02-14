
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_uid; int va_gid; } ;
struct ucred {scalar_t__ cr_uid; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_1 (int ,struct ucred*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_3, struct ucred *VAR_4)
{
 struct vattr VAR_5;
 int VAR_6;

 if (!VAR_2 && !VAR_1)
  return (0);

 VAR_6 = FUNC_0(VAR_3, &VAR_5, VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);

 if (VAR_2 && VAR_4->cr_uid != VAR_5.va_uid) {
  VAR_6 = FUNC_2(VAR_4, VAR_0);
  if (VAR_6 != 0)
   return (VAR_6);
 }

 if (VAR_1 && !FUNC_1(VAR_5.va_gid, VAR_4)) {
  VAR_6 = FUNC_2(VAR_4, VAR_0);
  if (VAR_6 != 0)
   return (VAR_6);
 }

 return (0);
}
