
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_node {int dummy; } ;
struct eqn_box {int args; int expectargs; struct eqn_box* parent; int * next; struct eqn_box* first; struct eqn_box* last; int type; struct eqn_box* prev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct eqn_box* FUNC_1 (struct eqn_node*,struct eqn_box*) ;

__attribute__((used)) static struct eqn_box *
FUNC_2(struct eqn_node *VAR_1, struct eqn_box *VAR_2)
{
 struct eqn_box *VAR_3, *VAR_4;

 FUNC_0(((void*)0) != VAR_2->last);
 VAR_3 = VAR_2->last;
 if (VAR_2->last == VAR_2->first)
  VAR_2->first = ((void*)0);
 VAR_2->args--;
 VAR_2->last = VAR_3->prev;
 VAR_3->prev = ((void*)0);
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 VAR_4->type = VAR_0;
 VAR_4->expectargs = 2;
 VAR_4->args = 1;
 VAR_4->first = VAR_4->last = VAR_3;
 VAR_4->first->next = ((void*)0);
 VAR_3->parent = VAR_4;
 return VAR_4;
}
