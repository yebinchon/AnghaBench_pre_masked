
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_add_writecount_args {scalar_t__ a_inc; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_writecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (int,struct vnode*,char*) ;

__attribute__((used)) static int
FUNC_3(struct vop_add_writecount_args *VAR_2)
{
 struct vnode *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->a_vp;
 FUNC_0(VAR_3, VAR_1);
 if (VAR_3->v_writecount < 0) {
  VAR_4 = VAR_0;
 } else {
  FUNC_2(VAR_3->v_writecount + VAR_2->a_inc >= 0, VAR_3,
      ("neg writecount increment %d", VAR_2->a_inc));
  VAR_3->v_writecount += VAR_2->a_inc;
  VAR_4 = 0;
 }
 FUNC_1(VAR_3);
 return (VAR_4);
}
