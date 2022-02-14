
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutexattr_t ;
struct TYPE_3__ {int m_pshared; } ;


 int VAR_0 ;

int
FUNC_0(const pthread_mutexattr_t *VAR_1,
 int *VAR_2)
{

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
  return (VAR_0);
 *VAR_2 = (*VAR_1)->m_pshared;
 return (0);
}
