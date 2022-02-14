
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_unset_text_args {struct vnode* a_vp; } ;
struct vnode {int v_writecount; int v_iflag; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_unset_text_args *VAR_2)
{
 struct vnode *VAR_3;
 int VAR_4;
 bool VAR_5;

 VAR_3 = VAR_2->a_vp;
 VAR_5 = 0;
 FUNC_0(VAR_3);
 if (VAR_3->v_writecount < 0) {
  if ((VAR_3->v_iflag & VAR_1) != 0 &&
      VAR_3->v_writecount == -1) {
   VAR_5 = 1;
   VAR_3->v_iflag &= ~VAR_1;
  }
  VAR_3->v_writecount++;
  VAR_4 = 0;
 } else {
  VAR_4 = VAR_0;
 }
 FUNC_1(VAR_3);
 if (VAR_5)
  FUNC_2(VAR_3);
 return (VAR_4);
}
