
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {int dummy; } ;
struct rcu_node {scalar_t__ gpnum; } ;
struct rcu_data {scalar_t__ gpnum; int qs_pending; scalar_t__ passed_quiesc; } ;



__attribute__((used)) static void FUNC_0(struct rcu_state *VAR_0, struct rcu_node *VAR_1, struct rcu_data *VAR_2)
{
 if (VAR_2->gpnum != VAR_1->gpnum) {
  VAR_2->qs_pending = 1;
  VAR_2->passed_quiesc = 0;
  VAR_2->gpnum = VAR_1->gpnum;
 }
}
