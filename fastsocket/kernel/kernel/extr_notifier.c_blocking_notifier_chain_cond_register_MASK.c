
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct blocking_notifier_head {int rwsem; int head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct blocking_notifier_head *VAR_0,
  struct notifier_block *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->rwsem);
 VAR_2 = FUNC_1(&VAR_0->head, VAR_1);
 FUNC_2(&VAR_0->rwsem);
 return VAR_2;
}
