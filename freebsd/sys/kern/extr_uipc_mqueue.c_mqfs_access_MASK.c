
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_access_args {int a_cred; int a_accmode; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;
struct vattr {int va_gid; int va_uid; int va_mode; } ;


 int FUNC_0 (struct vnode*,struct vattr*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_access_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;
 struct vattr VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_2, VAR_0->a_cred);
 if (VAR_3)
  return (VAR_3);
 VAR_3 = FUNC_1(VAR_1->v_type, VAR_2.va_mode, VAR_2.va_uid,
     VAR_2.va_gid, VAR_0->a_accmode, VAR_0->a_cred, ((void*)0));
 return (VAR_3);
}
