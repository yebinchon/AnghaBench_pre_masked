
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct thread {int dummy; } ;
struct file {struct vnode* f_vnode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct thread*,int,int *,struct file**) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_3, int VAR_4, int VAR_5)
{
 struct vnode *VAR_6;
 struct file *VAR_7;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_3, VAR_4, &VAR_2, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_6 = VAR_7->f_vnode;
 if (VAR_6->v_type != VAR_1) {
  FUNC_0(VAR_7, VAR_3);
  return (VAR_0);
 }
 FUNC_0(VAR_7, VAR_3);
 return (VAR_5);
}
