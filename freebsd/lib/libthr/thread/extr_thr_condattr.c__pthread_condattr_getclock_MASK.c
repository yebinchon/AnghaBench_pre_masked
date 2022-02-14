
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_condattr_t ;
typedef int clockid_t ;
struct TYPE_3__ {int c_clockid; } ;


 int VAR_0 ;

int
FUNC_0(const pthread_condattr_t * __restrict VAR_1,
    clockid_t * __restrict VAR_2)
{
 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
  return (VAR_0);
 *VAR_2 = (*VAR_1)->c_clockid;
 return (0);
}
