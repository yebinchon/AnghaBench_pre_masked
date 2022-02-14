
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int type; struct roff_node* parent; int norm; struct roff_node* tail; struct roff_node* body; int end; struct roff_node* head; struct roff_node* child; struct roff_node* last; struct roff_node* prev; struct roff_node* next; } ;
struct roff_man {int next; struct roff_node* last; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int FUNC_0 () ;
 int FUNC_1 (int) ;

void
FUNC_2(struct roff_man *VAR_2, struct roff_node *VAR_3)
{

 switch (VAR_2->next) {
 case 128:
  if (VAR_2->last->next != ((void*)0)) {
   VAR_3->next = VAR_2->last->next;
   VAR_2->last->next->prev = VAR_3;
  } else
   VAR_2->last->parent->last = VAR_3;
  VAR_2->last->next = VAR_3;
  VAR_3->prev = VAR_2->last;
  VAR_3->parent = VAR_2->last->parent;
  break;
 case 129:
  if (VAR_2->last->child != ((void*)0)) {
   VAR_3->next = VAR_2->last->child;
   VAR_2->last->child->prev = VAR_3;
  } else
   VAR_2->last->last = VAR_3;
  VAR_2->last->child = VAR_3;
  VAR_3->parent = VAR_2->last;
  break;
 default:
  FUNC_0();
 }
 VAR_2->last = VAR_3;

 switch (VAR_3->type) {
 case 131:
  VAR_3->parent->head = VAR_3;
  break;
 case 132:
  if (VAR_3->end != VAR_0)
   return;
  VAR_3->parent->body = VAR_3;
  break;
 case 130:
  VAR_3->parent->tail = VAR_3;
  break;
 default:
  return;
 }






 VAR_3->norm = VAR_3->parent->norm;
 FUNC_1(VAR_3->parent->type == VAR_1);
}
