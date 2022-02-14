
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct map {int dummy; } ;
struct callchain_cursor_node {struct callchain_cursor_node* next; struct symbol* sym; struct map* map; int ip; } ;
struct callchain_cursor {struct callchain_cursor_node** last; int nr; } ;


 int VAR_0 ;
 struct callchain_cursor_node* FUNC_0 (int,int) ;

int FUNC_1(struct callchain_cursor *VAR_1,
       u64 VAR_2, struct map *VAR_3, struct symbol *VAR_4)
{
 struct callchain_cursor_node *VAR_5 = *VAR_1->last;

 if (!VAR_5) {
  VAR_5 = FUNC_0(sizeof(*VAR_5), 1);
  if (!VAR_5)
   return -VAR_0;

  *VAR_1->last = VAR_5;
 }

 VAR_5->ip = VAR_2;
 VAR_5->map = VAR_3;
 VAR_5->sym = VAR_4;

 VAR_1->nr++;

 VAR_1->last = &VAR_5->next;

 return 0;
}
