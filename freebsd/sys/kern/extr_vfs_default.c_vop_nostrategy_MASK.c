
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_strategy_args {TYPE_1__* a_bp; int a_vp; } ;
struct TYPE_3__ {int b_error; int b_ioflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3 (struct vop_strategy_args *VAR_2)
{
 FUNC_1("No strategy for buffer at %p\n", VAR_2->a_bp);
 FUNC_2(VAR_2->a_vp, "vnode ");
 VAR_2->a_bp->b_ioflags |= VAR_0;
 VAR_2->a_bp->b_error = VAR_1;
 FUNC_0(VAR_2->a_bp);
 return (VAR_1);
}
