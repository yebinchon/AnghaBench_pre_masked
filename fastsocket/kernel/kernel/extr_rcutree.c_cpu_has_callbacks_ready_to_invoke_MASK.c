
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {int ** nxttail; int nxtlist; } ;


 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct rcu_data *VAR_1)
{
 return &VAR_1->nxtlist != VAR_1->nxttail[VAR_0];
}
