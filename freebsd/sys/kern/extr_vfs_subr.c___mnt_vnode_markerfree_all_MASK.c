
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct mount {int mnt_nvnodelist; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_1 ;
 int FUNC_4 (int *,struct vnode*,int ) ;
 int FUNC_5 (struct vnode*,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;

void
FUNC_7(struct vnode **VAR_3, struct mount *VAR_4)
{

 if (*VAR_3 == ((void*)0)) {
  FUNC_1(VAR_4);
  return;
 }

 FUNC_6(FUNC_2(VAR_4), VAR_0);

 FUNC_0((*VAR_3)->v_mount == VAR_4, ("marker vnode mount list mismatch"));
 FUNC_4(&VAR_4->mnt_nvnodelist, *VAR_3, VAR_2);
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);
 FUNC_5(*VAR_3, VAR_1);
 *VAR_3 = ((void*)0);
}
