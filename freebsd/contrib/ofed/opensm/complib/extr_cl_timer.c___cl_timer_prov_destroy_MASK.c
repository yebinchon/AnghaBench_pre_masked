
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_3__ {int cond; int mutex; int exit; int thread; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 pthread_t VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->thread;
 FUNC_5(&VAR_1->mutex);
 VAR_1->exit = VAR_0;
 FUNC_1(&VAR_1->cond);
 FUNC_6(&VAR_1->mutex);
 FUNC_3(VAR_2, ((void*)0));


 FUNC_4(&VAR_1->mutex);
 FUNC_2(&VAR_1->cond);


 FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
}
