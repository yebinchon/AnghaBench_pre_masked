
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_head {int dummy; } ;
struct linux_epoch_head {int lock; int task; int cb_head; } ;
struct callback_head {int func; } ;
typedef int rcu_callback_t ;


 int FUNC_0 (int *,struct callback_head*,int ) ;
 int VAR_0 ;
 struct linux_epoch_head VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;

void
FUNC_4(struct rcu_head *VAR_3, rcu_callback_t VAR_4)
{
 struct callback_head *VAR_5 = (struct callback_head *)VAR_3;
 struct linux_epoch_head *VAR_6 = &VAR_1;

 FUNC_1(&VAR_6->lock);
 VAR_5->func = VAR_4;
 FUNC_0(&VAR_6->cb_head, VAR_5, VAR_0);
 FUNC_3(VAR_2, &VAR_6->task);
 FUNC_2(&VAR_6->lock);
}
