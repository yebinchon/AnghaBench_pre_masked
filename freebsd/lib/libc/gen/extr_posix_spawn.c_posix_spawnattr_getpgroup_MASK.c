
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* posix_spawnattr_t ;
typedef int pid_t ;
struct TYPE_3__ {int sa_pgroup; } ;



int
FUNC_0(const posix_spawnattr_t * __restrict VAR_0,
    pid_t * __restrict VAR_1)
{
 *VAR_1 = (*VAR_0)->sa_pgroup;
 return (0);
}
