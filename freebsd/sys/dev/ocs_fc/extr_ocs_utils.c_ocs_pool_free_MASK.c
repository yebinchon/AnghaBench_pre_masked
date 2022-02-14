
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os; int lock; scalar_t__ use_lock; int * a; } ;
typedef TYPE_1__ ocs_pool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

void
FUNC_3(ocs_pool_t *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->a != ((void*)0)) {
   FUNC_0(VAR_0->a);
  }
  if (VAR_0->use_lock) {
   FUNC_2(&VAR_0->lock);
  }
  FUNC_1(VAR_0->os, VAR_0, sizeof(*VAR_0));
 }
}
