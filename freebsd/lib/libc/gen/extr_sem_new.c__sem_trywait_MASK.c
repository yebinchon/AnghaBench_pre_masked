
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _count; } ;
struct TYPE_6__ {TYPE_1__ _kern; } ;
typedef TYPE_2__ sem_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

int
FUNC_3(sem_t *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_2) != 0)
  return (-1);

 while (FUNC_0(VAR_3 = VAR_2->_kern._count) > 0) {
  if (FUNC_1(&VAR_2->_kern._count, VAR_3, VAR_3 - 1))
   return (0);
 }
 VAR_1 = VAR_0;
 return (-1);
}
