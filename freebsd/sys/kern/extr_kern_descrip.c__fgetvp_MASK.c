
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int,struct file**,int,int *,int *) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct vnode*) ;

__attribute__((used)) static __inline int
FUNC_3(struct thread *VAR_1, int VAR_2, int VAR_3, cap_rights_t *VAR_4,
    struct vnode **VAR_5)
{
 struct file *VAR_6;
 int VAR_7;

 *VAR_5 = ((void*)0);
 VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_6, VAR_3, VAR_4, ((void*)0));
 if (VAR_7 != 0)
  return (VAR_7);
 if (VAR_6->f_vnode == ((void*)0)) {
  VAR_7 = VAR_0;
 } else {
  *VAR_5 = VAR_6->f_vnode;
  FUNC_2(*VAR_5);
 }
 FUNC_1(VAR_6, VAR_1);

 return (VAR_7);
}
