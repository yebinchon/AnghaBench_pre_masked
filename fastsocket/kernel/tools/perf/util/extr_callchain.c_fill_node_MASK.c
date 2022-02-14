
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct callchain_node {int val; scalar_t__ val_nr; } ;
struct TYPE_2__ {int map; int sym; } ;
struct callchain_list {int list; TYPE_1__ ms; int ip; } ;
struct callchain_cursor_node {int map; int sym; int ip; } ;
struct callchain_cursor {scalar_t__ pos; scalar_t__ nr; } ;


 int FUNC_0 (struct callchain_cursor*) ;
 struct callchain_cursor_node* FUNC_1 (struct callchain_cursor*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 struct callchain_list* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct callchain_node *VAR_0, struct callchain_cursor *VAR_1)
{
 struct callchain_cursor_node *VAR_2;

 VAR_0->val_nr = VAR_1->nr - VAR_1->pos;
 if (!VAR_0->val_nr)
  FUNC_4("Warning: empty node in callchain tree\n");

 VAR_2 = FUNC_1(VAR_1);

 while (VAR_2) {
  struct callchain_list *VAR_3;

  VAR_3 = FUNC_5(sizeof(*VAR_3));
  if (!VAR_3) {
   FUNC_3("not enough memory for the code path tree");
   return;
  }
  VAR_3->ip = VAR_2->ip;
  VAR_3->ms.sym = VAR_2->sym;
  VAR_3->ms.map = VAR_2->map;
  FUNC_2(&VAR_3->list, &VAR_0->val);

  FUNC_0(VAR_1);
  VAR_2 = FUNC_1(VAR_1);
 }
}
