
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrtree {int size_bytes; struct addrtree* parent_edge; struct addrtree* str; struct addrtree* next; struct addrtree* first; struct addrtree* root; } ;
struct addrnode {int size_bytes; struct addrnode* parent_edge; struct addrnode* str; struct addrnode* next; struct addrnode* first; struct addrnode* root; } ;


 int FUNC_0 (struct addrtree*) ;
 int FUNC_1 (struct addrtree*,struct addrtree*) ;
 int FUNC_2 (struct addrtree*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct addrtree*,struct addrtree*) ;

void FUNC_5(struct addrtree *VAR_0)
{
 struct addrnode *VAR_1;
 if (!VAR_0) return;
 FUNC_1(VAR_0, VAR_0->root);
 FUNC_2(VAR_0->root);
 VAR_0->size_bytes -= sizeof(struct addrnode);
 while ((VAR_1 = VAR_0->first)) {
  VAR_0->first = VAR_1->next;
  FUNC_1(VAR_0, VAR_1);
  VAR_0->size_bytes -= FUNC_4(VAR_0, VAR_1);
  FUNC_2(VAR_1->parent_edge->str);
  FUNC_2(VAR_1->parent_edge);
  FUNC_2(VAR_1);
 }
 FUNC_3(sizeof *VAR_0 == FUNC_0(VAR_0));
 FUNC_2(VAR_0);
}
