
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_5__ {scalar_t__ syssem; scalar_t__ nwaiters; scalar_t__ magic; int semid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(sem_t *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_2) != 0)
  return (-1);





 if ((*VAR_2)->syssem != 0)
  VAR_3 = FUNC_0((*VAR_2)->semid);
 else if ((*VAR_2)->nwaiters > 0) {
  VAR_1 = VAR_0;
  VAR_3 = -1;
 }
 else {
  VAR_3 = 0;
  (*VAR_2)->magic = 0;
 }

 if (VAR_3 == 0)
  FUNC_2(*VAR_2);
 return (VAR_3);
}
