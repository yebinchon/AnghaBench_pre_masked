
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {int dummy; } ;
struct rcu_node {int dummy; } ;
struct rcu_data {int * nxttail; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct rcu_state*,struct rcu_node*,struct rcu_data*) ;
 int FUNC_1 (struct rcu_state*,struct rcu_node*,struct rcu_data*) ;

__attribute__((used)) static void
FUNC_2(struct rcu_state *VAR_3, struct rcu_node *VAR_4, struct rcu_data *VAR_5)
{

 FUNC_1(VAR_3, VAR_4, VAR_5);
 VAR_5->nxttail[VAR_0] = VAR_5->nxttail[VAR_1];
 VAR_5->nxttail[VAR_2] = VAR_5->nxttail[VAR_1];


 FUNC_0(VAR_3, VAR_4, VAR_5);
}
