
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_notifier_head {int * head; int srcu; int mutex; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct srcu_notifier_head *VAR_0)
{
 FUNC_2(&VAR_0->mutex);
 if (FUNC_1(&VAR_0->srcu) < 0)
  FUNC_0();
 VAR_0->head = ((void*)0);
}
