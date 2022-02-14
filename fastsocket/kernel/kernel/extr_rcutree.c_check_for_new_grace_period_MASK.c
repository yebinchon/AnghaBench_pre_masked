
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {scalar_t__ gpnum; } ;
struct rcu_data {scalar_t__ gpnum; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct rcu_state*,struct rcu_data*) ;

__attribute__((used)) static int
FUNC_3(struct rcu_state *VAR_0, struct rcu_data *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_1(VAR_2);
 if (VAR_1->gpnum != VAR_0->gpnum) {
  FUNC_2(VAR_0, VAR_1);
  VAR_3 = 1;
 }
 FUNC_0(VAR_2);
 return VAR_3;
}
