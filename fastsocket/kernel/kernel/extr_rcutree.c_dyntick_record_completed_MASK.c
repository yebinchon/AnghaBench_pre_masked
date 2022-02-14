
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {long dynticks_completed; } ;



__attribute__((used)) static void FUNC_0(struct rcu_state *VAR_0, long VAR_1)
{
 VAR_0->dynticks_completed = VAR_1;
}
