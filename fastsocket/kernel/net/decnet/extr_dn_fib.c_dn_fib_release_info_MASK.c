
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_fib_info {scalar_t__ fib_treeref; int fib_dead; struct dn_fib_info* fib_next; TYPE_1__* fib_prev; } ;
struct TYPE_2__ {struct dn_fib_info* fib_next; } ;


 struct dn_fib_info* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dn_fib_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dn_fib_info *VAR_2)
{
 FUNC_1(&VAR_1);
 if (VAR_2 && --VAR_2->fib_treeref == 0) {
  if (VAR_2->fib_next)
   VAR_2->fib_next->fib_prev = VAR_2->fib_prev;
  if (VAR_2->fib_prev)
   VAR_2->fib_prev->fib_next = VAR_2->fib_next;
  if (VAR_2 == VAR_0)
   VAR_0 = VAR_2->fib_next;
  VAR_2->fib_dead = 1;
  FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_1);
}
