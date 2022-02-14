
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_notifier_head {int srcu; int mutex; int head; } ;
struct notifier_block {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct notifier_block*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct srcu_notifier_head *VAR_2,
  struct notifier_block *VAR_3)
{
 int VAR_4;






 if (FUNC_4(VAR_1 == VAR_0))
  return FUNC_2(&VAR_2->head, VAR_3);

 FUNC_0(&VAR_2->mutex);
 VAR_4 = FUNC_2(&VAR_2->head, VAR_3);
 FUNC_1(&VAR_2->mutex);
 FUNC_3(&VAR_2->srcu);
 return VAR_4;
}
