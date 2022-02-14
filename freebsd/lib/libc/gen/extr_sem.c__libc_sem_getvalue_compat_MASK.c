
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_4__ {scalar_t__ syssem; scalar_t__ count; int semid; } ;


 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (TYPE_1__**) ;

int
FUNC_2(sem_t * __restrict VAR_0, int * __restrict VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_0) != 0)
  return (-1);

 if ((*VAR_0)->syssem != 0)
  VAR_2 = FUNC_0((*VAR_0)->semid, VAR_1);
 else {
  *VAR_1 = (int)(*VAR_0)->count;
  VAR_2 = 0;
 }
 return (VAR_2);
}
