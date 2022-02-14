
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _count; } ;
struct TYPE_6__ {TYPE_1__ _kern; } ;
typedef TYPE_2__ sem_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

int
FUNC_2(sem_t * __restrict VAR_0, int * __restrict VAR_1)
{

 if (FUNC_1(VAR_0) != 0)
  return (-1);

 *VAR_1 = (int)FUNC_0(VAR_0->_kern._count);
 return (0);
}
