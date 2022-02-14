
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_altq_node {struct pf_altq_node* next; struct pf_altq_node* children; } ;


 int FUNC_0 (struct pf_altq_node*) ;

void
FUNC_1(struct pf_altq_node *VAR_0)
{
 while (VAR_0 != ((void*)0)) {
  struct pf_altq_node *VAR_1;

  if (VAR_0->children != ((void*)0))
   FUNC_1(VAR_0->children);
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
