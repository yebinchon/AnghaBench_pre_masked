
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {unsigned int startbit; int maps; struct ebitmap_node* next; } ;
struct ebitmap {struct ebitmap_node* node; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct ebitmap*) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ebitmap *VAR_1,
        struct ebitmap_node **VAR_2)
{
 unsigned int VAR_3;

 for (*VAR_2 = VAR_1->node; *VAR_2; *VAR_2 = (*VAR_2)->next) {
  VAR_3 = FUNC_1((*VAR_2)->maps, VAR_0);
  if (VAR_3 < VAR_0)
   return (*VAR_2)->startbit + VAR_3;
 }
 return FUNC_0(VAR_1);
}
