
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx {scalar_t__ sx_lock; scalar_t__ sx_recurse; int lock_object; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct sx *VAR_2)
{

 FUNC_0(VAR_2->sx_lock == VAR_1, ("sx lock still held"));
 FUNC_0(VAR_2->sx_recurse == 0, ("sx lock still recursed"));
 VAR_2->sx_lock = VAR_0;
 FUNC_1(&VAR_2->lock_object);
}
