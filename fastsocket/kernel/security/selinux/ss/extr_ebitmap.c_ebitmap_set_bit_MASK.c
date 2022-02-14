
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {unsigned long startbit; struct ebitmap_node* next; int maps; } ;
struct ebitmap {unsigned long highbit; struct ebitmap_node* node; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ebitmap_node*,unsigned long) ;
 int FUNC_1 (struct ebitmap_node*,unsigned long) ;
 unsigned int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct ebitmap_node*) ;
 struct ebitmap_node* FUNC_4 (int,int ) ;

int FUNC_5(struct ebitmap *VAR_3, unsigned long VAR_4, int VAR_5)
{
 struct ebitmap_node *VAR_6, *VAR_7, *VAR_8;

 VAR_7 = ((void*)0);
 VAR_6 = VAR_3->node;
 while (VAR_6 && VAR_6->startbit <= VAR_4) {
  if ((VAR_6->startbit + VAR_0) > VAR_4) {
   if (VAR_5) {
    FUNC_1(VAR_6, VAR_4);
   } else {
    unsigned int VAR_9;

    FUNC_0(VAR_6, VAR_4);

    VAR_9 = FUNC_2(VAR_6->maps, VAR_0);
    if (VAR_9 < VAR_0)
     return 0;


    if (!VAR_6->next) {




     if (VAR_7)
      VAR_3->highbit = VAR_7->startbit
            + VAR_0;
     else
      VAR_3->highbit = 0;
    }
    if (VAR_7)
     VAR_7->next = VAR_6->next;
    else
     VAR_3->node = VAR_6->next;
    FUNC_3(VAR_6);
   }
   return 0;
  }
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
 }

 if (!VAR_5)
  return 0;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->startbit = VAR_4 - (VAR_4 % VAR_0);
 FUNC_1(VAR_8, VAR_4);

 if (!VAR_6)

  VAR_3->highbit = VAR_8->startbit + VAR_0;

 if (VAR_7) {
  VAR_8->next = VAR_7->next;
  VAR_7->next = VAR_8;
 } else {
  VAR_8->next = VAR_3->node;
  VAR_3->node = VAR_8;
 }

 return 0;
}
