
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; struct mount* v_mount; } ;
struct null_node {int null_flags; } ;
struct null_mount {int nullm_flags; } ;
struct mount {int dummy; } ;


 struct null_mount* FUNC_0 (struct mount*) ;
 int VAR_0 ;
 struct vnode* FUNC_1 (struct vnode*) ;
 int VAR_1 ;
 struct null_node* FUNC_2 (struct vnode*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_3)
{
 struct vnode *VAR_4;
 struct null_node *VAR_5;
 struct mount *VAR_6;
 struct null_mount *VAR_7;

 VAR_5 = FUNC_2(VAR_3);
 VAR_4 = FUNC_1(VAR_3);
 VAR_6 = VAR_3->v_mount;
 VAR_7 = FUNC_0(VAR_6);
 if ((VAR_7->nullm_flags & VAR_0) == 0 ||
     (VAR_5->null_flags & VAR_1) != 0 ||
     (VAR_4->v_vflag & VAR_2) != 0) {






  return (1);
 }
 return (0);
}
