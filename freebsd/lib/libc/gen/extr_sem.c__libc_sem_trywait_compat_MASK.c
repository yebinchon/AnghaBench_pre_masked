
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_4__ {scalar_t__ syssem; int count; int semid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;

int
FUNC_3(sem_t *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_2) != 0)
  return (-1);

 if ((*VAR_2)->syssem != 0)
   return FUNC_1((*VAR_2)->semid);

 while ((VAR_3 = (*VAR_2)->count) > 0) {
  if (FUNC_0(&(*VAR_2)->count, VAR_3, VAR_3 - 1))
   return (0);
 }
 VAR_1 = VAR_0;
 return (-1);
}
