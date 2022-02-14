
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_7__ {scalar_t__ syssem; int semid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(sem_t *VAR_4)
{

 if (FUNC_5(VAR_4) != 0)
  return (-1);

 if ((*VAR_4)->syssem == 0) {
  VAR_2 = VAR_0;
  return (-1);
 }

 FUNC_1(&VAR_3);
 if (FUNC_4((*VAR_4)->semid) != 0) {
  FUNC_2(&VAR_3);
  return (-1);
 }
 FUNC_0((*VAR_4), VAR_1);
 FUNC_2(&VAR_3);
 FUNC_6(*VAR_4);
 *VAR_4 = ((void*)0);
 FUNC_3(VAR_4);
 return (0);
}
