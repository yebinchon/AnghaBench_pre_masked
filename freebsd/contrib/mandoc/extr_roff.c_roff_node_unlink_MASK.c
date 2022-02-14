
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {struct roff_node* prev; struct roff_node* parent; struct roff_node* last; struct roff_node* next; struct roff_node* child; } ;
struct TYPE_2__ {struct roff_node* first; } ;
struct roff_man {TYPE_1__ meta; int next; struct roff_node* last; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct roff_man *VAR_2, struct roff_node *VAR_3)
{



 if (VAR_3->prev)
  VAR_3->prev->next = VAR_3->next;
 if (VAR_3->next)
  VAR_3->next->prev = VAR_3->prev;



 if (VAR_3->parent != ((void*)0)) {
  if (VAR_3->parent->child == VAR_3)
   VAR_3->parent->child = VAR_3->next;
  if (VAR_3->parent->last == VAR_3)
   VAR_3->parent->last = VAR_3->prev;
 }



 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->last == VAR_3) {
  if (VAR_3->prev == ((void*)0)) {
   VAR_2->last = VAR_3->parent;
   VAR_2->next = VAR_0;
  } else {
   VAR_2->last = VAR_3->prev;
   VAR_2->next = VAR_1;
  }
 }
 if (VAR_2->meta.first == VAR_3)
  VAR_2->meta.first = ((void*)0);
}
