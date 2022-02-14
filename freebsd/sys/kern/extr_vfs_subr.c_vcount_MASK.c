
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_rdev; } ;
struct TYPE_2__ {int si_usecount; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(struct vnode *VAR_0)
{
 int VAR_1;

 FUNC_0();
 VAR_1 = VAR_0->v_rdev->si_usecount;
 FUNC_1();
 return (VAR_1);
}
