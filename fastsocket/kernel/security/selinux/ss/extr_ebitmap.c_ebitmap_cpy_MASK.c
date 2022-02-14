
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {struct ebitmap_node* next; int maps; int startbit; } ;
struct ebitmap {int highbit; struct ebitmap_node* node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ebitmap*) ;
 int FUNC_1 (struct ebitmap*) ;
 struct ebitmap_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct ebitmap *VAR_3, struct ebitmap *VAR_4)
{
 struct ebitmap_node *VAR_5, *VAR_6, *VAR_7;

 FUNC_1(VAR_3);
 VAR_5 = VAR_4->node;
 VAR_7 = ((void*)0);
 while (VAR_5) {
  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
  if (!VAR_6) {
   FUNC_0(VAR_3);
   return -VAR_1;
  }
  VAR_6->startbit = VAR_5->startbit;
  FUNC_3(VAR_6->maps, VAR_5->maps, VAR_0 / 8);
  VAR_6->next = ((void*)0);
  if (VAR_7)
   VAR_7->next = VAR_6;
  else
   VAR_3->node = VAR_6;
  VAR_7 = VAR_6;
  VAR_5 = VAR_5->next;
 }

 VAR_3->highbit = VAR_4->highbit;
 return 0;
}
