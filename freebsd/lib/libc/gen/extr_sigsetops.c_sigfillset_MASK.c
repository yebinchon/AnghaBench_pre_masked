
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* __bits; } ;
typedef TYPE_1__ sigset_t ;


 int VAR_0 ;

int
FUNC_0(sigset_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->__bits[VAR_2] = ~0U;
 return (0);
}
