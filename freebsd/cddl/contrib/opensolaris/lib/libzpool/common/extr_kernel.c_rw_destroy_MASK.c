
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rw_count; int initialized; void* rw_owner; int rw_lock; } ;
typedef TYPE_1__ krwlock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(krwlock_t *VAR_1)
{
 FUNC_0(VAR_1->rw_count == 0);
 FUNC_1(&VAR_1->rw_lock);
 VAR_1->rw_owner = (void *)-1UL;
 VAR_1->initialized = VAR_0;
}
