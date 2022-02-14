
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlockattr_t ;
struct TYPE_3__ {int pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(pthread_rwlockattr_t *VAR_3, int VAR_4)
{

 if (VAR_4 != VAR_1 &&
     VAR_4 != VAR_2)
  return (VAR_0);
 (*VAR_3)->pshared = VAR_4;
 return (0);
}
