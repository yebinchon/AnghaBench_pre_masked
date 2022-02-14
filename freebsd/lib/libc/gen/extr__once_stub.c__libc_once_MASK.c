
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
typedef TYPE_1__ pthread_once_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(pthread_once_t *VAR_1, void (*VAR_2)(void))
{

 if (VAR_1->state == VAR_0)
  return (0);
 VAR_2();
 VAR_1->state = VAR_0;
 return (0);
}
