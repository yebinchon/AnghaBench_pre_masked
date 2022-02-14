
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_4__ {scalar_t__ syssem; int count; scalar_t__ nwaiters; int semid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__**) ;

int
FUNC_5(sem_t *VAR_0)
{

 if (FUNC_4(VAR_0) != 0)
  return (-1);

 if ((*VAR_0)->syssem != 0)
  return FUNC_2((*VAR_0)->semid);

 FUNC_1(&(*VAR_0)->count, 1);
 FUNC_3();
 if ((*VAR_0)->nwaiters)
  return FUNC_0(&(*VAR_0)->count);
 return (0);
}
