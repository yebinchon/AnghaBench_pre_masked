
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pthread_rwlockattr {int dummy; } ;
typedef TYPE_1__* pthread_rwlockattr_t ;
struct TYPE_4__ {int pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;

int
FUNC_1(pthread_rwlockattr_t *VAR_3)
{
 pthread_rwlockattr_t VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_0(sizeof(struct pthread_rwlockattr));
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_4->pshared = VAR_2;
 *VAR_3 = VAR_4;
 return (0);
}
