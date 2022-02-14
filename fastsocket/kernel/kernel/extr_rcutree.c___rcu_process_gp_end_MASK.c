
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {int dummy; } ;
struct rcu_node {scalar_t__ completed; } ;
struct rcu_data {scalar_t__ completed; int * nxttail; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct rcu_state *VAR_4, struct rcu_node *VAR_5, struct rcu_data *VAR_6)
{

 if (VAR_6->completed != VAR_5->completed) {


  VAR_6->nxttail[VAR_0] = VAR_6->nxttail[VAR_3];
  VAR_6->nxttail[VAR_3] = VAR_6->nxttail[VAR_1];
  VAR_6->nxttail[VAR_1] = VAR_6->nxttail[VAR_2];


  VAR_6->completed = VAR_5->completed;
 }
}
