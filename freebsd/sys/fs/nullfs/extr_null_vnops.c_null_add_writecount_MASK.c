
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_add_writecount_args {scalar_t__ a_inc; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_writecount; } ;


 struct vnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (int,struct vnode*,char*) ;
 int FUNC_4 (struct vnode*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct vop_add_writecount_args *VAR_0)
{
 struct vnode *VAR_1, *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->a_vp;
 VAR_1 = FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 FUNC_3(VAR_2->v_writecount >= 0, VAR_2, ("wrong null writecount"));
 FUNC_3(VAR_2->v_writecount + VAR_0->a_inc >= 0, VAR_2,
     ("wrong writecount inc %d", VAR_0->a_inc));
 VAR_3 = FUNC_4(VAR_1, VAR_0->a_inc);
 if (VAR_3 == 0)
  VAR_2->v_writecount += VAR_0->a_inc;
 FUNC_2(VAR_2);
 return (VAR_3);
}
