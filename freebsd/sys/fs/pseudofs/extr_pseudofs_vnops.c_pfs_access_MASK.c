
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_access_args {int a_cred; int a_accmode; struct vnode* a_vp; } ;
struct vnode {int v_type; struct pfs_vdata* v_data; } ;
struct vattr {int va_gid; int va_uid; int va_mode; } ;
struct pfs_vdata {TYPE_1__* pvd_pn; } ;
struct TYPE_2__ {int pn_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vnode*,struct vattr*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct vop_access_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;
 struct pfs_vdata *VAR_2 = VAR_1->v_data;
 struct vattr VAR_3;
 int VAR_4;

 FUNC_1(("%s", VAR_2->pvd_pn->pn_name));
 (void)VAR_2;

 VAR_4 = FUNC_2(VAR_1, &VAR_3, VAR_0->a_cred);
 if (VAR_4)
  FUNC_0 (VAR_4);
 VAR_4 = FUNC_3(VAR_1->v_type, VAR_3.va_mode, VAR_3.va_uid,
     VAR_3.va_gid, VAR_0->a_accmode, VAR_0->a_cred, ((void*)0));
 FUNC_0 (VAR_4);
}
