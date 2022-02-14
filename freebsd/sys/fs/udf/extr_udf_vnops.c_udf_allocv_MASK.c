
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;


 int FUNC_0 (char*,struct mount*,int *,struct vnode**) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

int
FUNC_2(struct mount *VAR_1, struct vnode **VAR_2, struct thread *VAR_3)
{
 int VAR_4;
 struct vnode *VAR_5;

 VAR_4 = FUNC_0("udf", VAR_1, &VAR_0, &VAR_5);
 if (VAR_4) {
  FUNC_1("udf_allocv: failed to allocate new vnode\n");
  return (VAR_4);
 }

 *VAR_2 = VAR_5;
 return (0);
}
