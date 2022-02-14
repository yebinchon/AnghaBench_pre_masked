
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlockattr_t ;
struct TYPE_3__ {int pshared; } ;



int
FUNC_0(
    const pthread_rwlockattr_t * __restrict VAR_0,
    int * __restrict VAR_1)
{

 *VAR_1 = (*VAR_0)->pshared;
 return (0);
}
