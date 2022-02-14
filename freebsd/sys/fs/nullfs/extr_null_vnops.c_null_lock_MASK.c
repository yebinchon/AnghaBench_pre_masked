
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_lock1_args {int a_flags; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct null_node {int dummy; } ;



 int VAR_0 ;

 int VAR_1 ;

 struct vnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,int) ;
 int FUNC_4 (struct vnode*,int ) ;
 struct null_node* FUNC_5 (struct vnode*) ;
 int FUNC_6 (char*,int const) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vop_lock1_args*) ;

__attribute__((used)) static int
FUNC_10(struct vop_lock1_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 int VAR_4;
 struct null_node *VAR_5;
 struct vnode *VAR_6;
 int VAR_7;

 if ((VAR_2->a_flags & VAR_0) == 0)
  FUNC_1(VAR_3);
 else
  VAR_2->a_flags &= ~VAR_0;
 VAR_4 = VAR_2->a_flags;
 VAR_5 = FUNC_5(VAR_3);





 if (VAR_5 != ((void*)0) && (VAR_6 = FUNC_0(VAR_3)) != ((void*)0)) {
  FUNC_8(VAR_6);
  FUNC_2(VAR_3);
  VAR_7 = FUNC_3(VAR_6, VAR_4);







  if (FUNC_5(VAR_3) == ((void*)0) && VAR_7 == 0) {
   VAR_2->a_flags &= ~VAR_1;
   switch (VAR_4 & VAR_1) {
   case 129:
    VAR_2->a_flags |= 129;
    break;
   case 128:
   case 130:
    VAR_2->a_flags |= 130;
    break;
   default:
    FUNC_6("Unsupported lock request %d\n",
        VAR_2->a_flags);
   }
   FUNC_4(VAR_6, 0);
   VAR_7 = FUNC_9(VAR_2);
  }
  FUNC_7(VAR_6);
 } else {
  FUNC_2(VAR_3);
  VAR_7 = FUNC_9(VAR_2);
 }

 return (VAR_7);
}
