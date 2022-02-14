
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct thread {int td_ucred; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*,int ,int ,struct thread*) ;
 int FUNC_2 (int ,struct vnode*) ;

int
FUNC_3(struct vnode *VAR_3, struct thread *VAR_4)
{




 FUNC_0(VAR_3, "change_dir(): vp not locked");
 if (VAR_3->v_type != VAR_1)
  return (VAR_0);





 return (FUNC_1(VAR_3, VAR_2, VAR_4->td_ucred, VAR_4));
}
