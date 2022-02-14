
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; struct roff_node* string; int eqn; struct roff_node* norm; int * args; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct roff_node*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct roff_node *VAR_2)
{

 if (VAR_2->args != ((void*)0))
  FUNC_2(VAR_2->args);
 if (VAR_2->type == VAR_0 || VAR_2->type == VAR_1)
  FUNC_1(VAR_2->norm);
 FUNC_0(VAR_2->eqn);
 FUNC_1(VAR_2->string);
 FUNC_1(VAR_2);
}
