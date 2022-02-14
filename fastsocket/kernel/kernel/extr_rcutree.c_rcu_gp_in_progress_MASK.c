
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {int gpnum; int completed; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct rcu_state *VAR_0)
{
 return FUNC_0(VAR_0->completed) != FUNC_0(VAR_0->gpnum);
}
