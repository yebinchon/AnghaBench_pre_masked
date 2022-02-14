
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; int v_type; } ;
struct mount {int mnt_listmtx; int mnt_activevnodelist; } ;


 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* FUNC_3 (int *) ;
 int FUNC_4 (struct vnode*,struct vnode*,int ) ;
 int VAR_3 ;
 struct vnode* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct vnode**,struct mount*) ;
 struct vnode* FUNC_7 (struct vnode**,struct mount*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;

struct vnode *
FUNC_10(struct vnode **VAR_5, struct mount *VAR_6)
{
 struct vnode *VAR_7;

 *VAR_5 = FUNC_5(sizeof(struct vnode), VAR_0, VAR_1 | VAR_2);
 FUNC_0(VAR_6);
 FUNC_2(VAR_6);
 FUNC_1(VAR_6);
 (*VAR_5)->v_type = VAR_3;
 (*VAR_5)->v_mount = VAR_6;

 FUNC_8(&VAR_6->mnt_listmtx);
 VAR_7 = FUNC_3(&VAR_6->mnt_activevnodelist);
 if (VAR_7 == ((void*)0)) {
  FUNC_9(&VAR_6->mnt_listmtx);
  FUNC_6(VAR_5, VAR_6);
  return (((void*)0));
 }
 FUNC_4(VAR_7, *VAR_5, VAR_4);
 return (FUNC_7(VAR_5, VAR_6));
}
