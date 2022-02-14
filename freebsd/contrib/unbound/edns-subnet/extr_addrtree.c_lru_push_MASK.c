
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrtree {struct addrnode* last; struct addrnode* first; } ;
struct addrnode {struct addrnode* next; struct addrnode* prev; } ;



__attribute__((used)) static void
FUNC_0(struct addrtree *VAR_0, struct addrnode *VAR_1)
{
 if (!VAR_0->first) {
  VAR_0->first = VAR_1;
  VAR_1->prev = ((void*)0);
 } else {
  VAR_0->last->next = VAR_1;
  VAR_1->prev = VAR_0->last;
 }
 VAR_0->last = VAR_1;
 VAR_1->next = ((void*)0);
}
