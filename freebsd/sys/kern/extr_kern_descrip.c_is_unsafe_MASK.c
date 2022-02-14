
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; } ;
struct file {scalar_t__ f_type; struct vnode* f_vnode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct file *VAR_2)
{
 struct vnode *VAR_3;

 if (VAR_2->f_type != VAR_0)
  return (0);

 VAR_3 = VAR_2->f_vnode;
 return ((VAR_3->v_vflag & VAR_1) != 0);
}
