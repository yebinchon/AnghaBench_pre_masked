
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ initialized; void* rw_owner; } ;
typedef TYPE_1__ krwlock_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

int
FUNC_1(krwlock_t *VAR_1)
{
 FUNC_0(VAR_1->initialized == VAR_0);
 FUNC_0(VAR_1->rw_owner != (void *)-1UL);

 return (0);
}
