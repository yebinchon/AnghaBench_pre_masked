
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {unsigned long startbit; struct ebitmap_node* next; } ;
struct ebitmap {unsigned long highbit; struct ebitmap_node* node; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct ebitmap_node*,unsigned long) ;

int FUNC_1(struct ebitmap *VAR_1, unsigned long VAR_2)
{
 struct ebitmap_node *VAR_3;

 if (VAR_1->highbit < VAR_2)
  return 0;

 VAR_3 = VAR_1->node;
 while (VAR_3 && (VAR_3->startbit <= VAR_2)) {
  if ((VAR_3->startbit + VAR_0) > VAR_2)
   return FUNC_0(VAR_3, VAR_2);
  VAR_3 = VAR_3->next;
 }

 return 0;
}
