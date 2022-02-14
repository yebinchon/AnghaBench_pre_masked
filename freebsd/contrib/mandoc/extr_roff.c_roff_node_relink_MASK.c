
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int * next; int prev; } ;
struct roff_man {int dummy; } ;


 int FUNC_0 (struct roff_man*,struct roff_node*) ;
 int FUNC_1 (struct roff_man*,struct roff_node*) ;

void
FUNC_2(struct roff_man *VAR_0, struct roff_node *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 VAR_1->prev = *(VAR_1->next = ((void*)0));
 FUNC_0(VAR_0, VAR_1);
}
