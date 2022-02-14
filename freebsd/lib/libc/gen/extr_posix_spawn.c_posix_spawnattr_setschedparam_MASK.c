
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sched_param {int dummy; } ;
typedef TYPE_1__* posix_spawnattr_t ;
struct TYPE_3__ {struct sched_param sa_schedparam; } ;



int
FUNC_0(posix_spawnattr_t * __restrict VAR_0,
    const struct sched_param * __restrict VAR_1)
{
 (*VAR_0)->sa_schedparam = *VAR_1;
 return (0);
}
