
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {int dummy; } ;
struct rcu_data {scalar_t__** nxttail; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct rcu_state*) ;

__attribute__((used)) static int
FUNC_1(struct rcu_state *VAR_1, struct rcu_data *VAR_2)
{
 return *VAR_2->nxttail[VAR_0] && !FUNC_0(VAR_1);
}
