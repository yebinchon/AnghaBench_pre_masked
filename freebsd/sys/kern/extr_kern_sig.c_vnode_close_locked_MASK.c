
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*,int ,int ,struct thread*) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_1, struct vnode *VAR_2)
{

 FUNC_0(VAR_2, 0);
 FUNC_1(VAR_2, VAR_0, VAR_1->td_ucred, VAR_1);
}
