
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rw_count; } ;
typedef TYPE_1__ krwlock_t ;



int
FUNC_0(krwlock_t *VAR_0)
{

 return (VAR_0->rw_count != 0);
}
