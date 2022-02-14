
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {int dummy; } ;
struct rcu_node {int lock; int gpnum; } ;
struct rcu_data {scalar_t__ gpnum; struct rcu_node* mynode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rcu_state*,struct rcu_node*,struct rcu_data*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct rcu_state *VAR_0, struct rcu_data *VAR_1)
{
 unsigned long VAR_2;
 struct rcu_node *VAR_3;

 FUNC_3(VAR_2);
 VAR_3 = VAR_1->mynode;
 if (VAR_1->gpnum == FUNC_0(VAR_3->gpnum) ||
     !FUNC_4(&VAR_3->lock)) {
  FUNC_2(VAR_2);
  return;
 }
 FUNC_1(VAR_0, VAR_3, VAR_1);
 FUNC_5(&VAR_3->lock, VAR_2);
}
