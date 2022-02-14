
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutexattr_t ;
struct TYPE_3__ {scalar_t__ m_protocol; int m_ceiling; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(pthread_mutexattr_t *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
  VAR_4 = VAR_0;
 else if ((*VAR_2)->m_protocol != VAR_1)
  VAR_4 = VAR_0;
 else
  (*VAR_2)->m_ceiling = VAR_3;

 return (VAR_4);
}
