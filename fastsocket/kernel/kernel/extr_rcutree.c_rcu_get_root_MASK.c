
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {struct rcu_node* node; } ;
struct rcu_node {int dummy; } ;



__attribute__((used)) static struct rcu_node *FUNC_0(struct rcu_state *VAR_0)
{
 return &VAR_0->node[0];
}
