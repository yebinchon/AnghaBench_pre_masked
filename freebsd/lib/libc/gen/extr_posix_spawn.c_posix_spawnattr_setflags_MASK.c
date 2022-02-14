
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* posix_spawnattr_t ;
struct TYPE_3__ {short sa_flags; } ;



int
FUNC_0(posix_spawnattr_t *VAR_0, short VAR_1)
{
 (*VAR_0)->sa_flags = VAR_1;
 return (0);
}
