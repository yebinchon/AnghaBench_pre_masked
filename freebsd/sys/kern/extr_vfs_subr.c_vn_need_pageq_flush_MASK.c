
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; struct vm_object* v_object; } ;
struct vm_object {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vm_object*) ;

int
FUNC_4(struct vnode *VAR_1)
{
 struct vm_object *VAR_2;
 int VAR_3;

 FUNC_0(FUNC_2(FUNC_1(VAR_1)));
 VAR_3 = 0;
 if ((VAR_2 = VAR_1->v_object) != ((void*)0) && (VAR_1->v_vflag & VAR_0) == 0 &&
     FUNC_3(VAR_2))
  VAR_3 = 1;
 return (VAR_3);
}
