
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_node {int gsize; } ;
struct eqn_box {struct eqn_box* last; struct eqn_box* first; struct eqn_box* prev; struct eqn_box* next; int size; int font; struct eqn_box* parent; int args; } ;


 struct eqn_box* FUNC_0 () ;

__attribute__((used)) static struct eqn_box *
FUNC_1(struct eqn_node *VAR_0, struct eqn_box *VAR_1)
{
 struct eqn_box *VAR_2;

 VAR_2 = FUNC_0();
 VAR_2->parent = VAR_1;
 VAR_2->parent->args++;
 VAR_2->font = VAR_2->parent->font;
 VAR_2->size = VAR_0->gsize;

 if (((void*)0) != VAR_1->first) {
  VAR_1->last->next = VAR_2;
  VAR_2->prev = VAR_1->last;
 } else
  VAR_1->first = VAR_2;

 VAR_1->last = VAR_2;
 return VAR_2;
}
