
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_usecount; int v_iflag; } ;
struct null_node {int null_flags; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vnode*,int ) ;
 struct null_node* FUNC_3 (struct vnode*) ;
 struct vnode* FUNC_4 (struct mount*,struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

__attribute__((used)) static void
FUNC_8(struct mount *VAR_3, struct vnode *VAR_4)
{
 struct vnode *VAR_5;
 struct null_node *VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0))
  return;
 VAR_6 = FUNC_3(VAR_5);
 VAR_6->null_flags |= VAR_0 | VAR_1;
 FUNC_6(VAR_5);
 FUNC_7(VAR_5);

 if (VAR_5->v_usecount == 0) {







  FUNC_1((VAR_5->v_iflag & VAR_2) != 0,
      ("not reclaimed nullfs vnode %p", VAR_5));
  FUNC_2(VAR_5, 0);
 } else {






  FUNC_0(VAR_5, "unlink_lowervp");
  FUNC_1((VAR_5->v_iflag & VAR_2) == 0,
      ("reclaimed nullfs vnode %p", VAR_5));
  VAR_6->null_flags &= ~VAR_1;
 }
 FUNC_5(VAR_5);
}
