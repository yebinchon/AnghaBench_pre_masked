
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ initialized; void* rw_owner; int rw_count; int rw_lock; } ;
typedef TYPE_1__ krwlock_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int) ;
 void* VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(krwlock_t *VAR_2)
{
 FUNC_0(VAR_2->initialized == VAR_0);
 FUNC_0(VAR_2->rw_owner != (void *)-1UL);

 if (VAR_2->rw_owner == VAR_1) {

  FUNC_0(VAR_2->rw_count == -1);
  VAR_2->rw_count = 0;
  VAR_2->rw_owner = ((void*)0);
 } else {

  FUNC_0(VAR_2->rw_count > 0);
  FUNC_2(&VAR_2->rw_count, -1);
 }
 FUNC_1(FUNC_3(&VAR_2->rw_lock) == 0);
}
