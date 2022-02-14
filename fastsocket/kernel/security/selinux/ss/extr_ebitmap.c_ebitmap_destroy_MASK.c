
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {struct ebitmap_node* next; } ;
struct ebitmap {struct ebitmap_node* node; scalar_t__ highbit; } ;


 int FUNC_0 (struct ebitmap_node*) ;

void FUNC_1(struct ebitmap *VAR_0)
{
 struct ebitmap_node *VAR_1, *VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->node;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 VAR_0->highbit = 0;
 VAR_0->node = ((void*)0);
 return;
}
