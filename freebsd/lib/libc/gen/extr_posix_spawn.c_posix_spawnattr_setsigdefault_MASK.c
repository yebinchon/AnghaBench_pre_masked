
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigset_t ;
typedef TYPE_1__* posix_spawnattr_t ;
struct TYPE_3__ {int sa_sigdefault; } ;



int
FUNC_0(posix_spawnattr_t * __restrict VAR_0,
    const sigset_t * __restrict VAR_1)
{
 (*VAR_0)->sa_sigdefault = *VAR_1;
 return (0);
}
