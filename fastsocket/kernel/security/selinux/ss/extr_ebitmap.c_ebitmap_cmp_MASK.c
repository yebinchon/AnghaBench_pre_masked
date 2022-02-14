
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {scalar_t__ startbit; struct ebitmap_node* next; int maps; } ;
struct ebitmap {scalar_t__ highbit; struct ebitmap_node* node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct ebitmap *VAR_1, struct ebitmap *VAR_2)
{
 struct ebitmap_node *VAR_3, *VAR_4;

 if (VAR_1->highbit != VAR_2->highbit)
  return 0;

 VAR_3 = VAR_1->node;
 VAR_4 = VAR_2->node;
 while (VAR_3 && VAR_4 &&
        (VAR_3->startbit == VAR_4->startbit) &&
        !FUNC_0(VAR_3->maps, VAR_4->maps, VAR_0 / 8)) {
  VAR_3 = VAR_3->next;
  VAR_4 = VAR_4->next;
 }

 if (VAR_3 || VAR_4)
  return 0;

 return 1;
}
