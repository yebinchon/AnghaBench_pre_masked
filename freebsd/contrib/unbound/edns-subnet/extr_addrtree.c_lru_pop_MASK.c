
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrtree {struct addrnode* last; struct addrnode* first; } ;
struct addrnode {struct addrnode* prev; struct addrnode* next; } ;



__attribute__((used)) static void
FUNC_0(struct addrtree *VAR_0, struct addrnode *VAR_1)
{
 if (VAR_1 == VAR_0->first) {
  if (!VAR_1->next) {
   VAR_0->first = ((void*)0);
   VAR_0->last = ((void*)0);
  } else {
   VAR_0->first = VAR_1->next;
   VAR_0->first->prev = ((void*)0);
  }
 } else if (VAR_1 == VAR_0->last) {
  VAR_0->last = VAR_1->prev;
  VAR_0->last->next = ((void*)0);
 } else {
  VAR_1->prev->next = VAR_1->next;
  VAR_1->next->prev = VAR_1->prev;
 }
}
