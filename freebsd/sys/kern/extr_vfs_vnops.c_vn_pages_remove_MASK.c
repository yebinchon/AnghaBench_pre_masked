
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int * vm_object_t ;
struct vnode {int * v_object; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

void
FUNC_3(struct vnode *VAR_0, vm_pindex_t VAR_1, vm_pindex_t VAR_2)
{
 vm_object_t VAR_3;

 if ((VAR_3 = VAR_0->v_object) == ((void*)0))
  return;
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_1, VAR_2, 0);
 FUNC_1(VAR_3);
}
