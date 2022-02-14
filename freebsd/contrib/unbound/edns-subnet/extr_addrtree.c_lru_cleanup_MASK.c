
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrtree {scalar_t__ max_node_count; scalar_t__ node_count; struct addrnode* first; } ;
struct addrnode {TYPE_1__* parent_edge; int elem; int ** edge; } ;
struct TYPE_2__ {struct addrnode* parent_node; } ;


 int FUNC_0 (struct addrtree*,struct addrnode*) ;
 int FUNC_1 (struct addrtree*,struct addrnode*) ;

__attribute__((used)) static void
FUNC_2(struct addrtree *VAR_0)
{
 struct addrnode *VAR_1, *VAR_2;
 int VAR_3;
 if (VAR_0->max_node_count == 0) return;
 while (VAR_0->node_count > VAR_0->max_node_count) {
  VAR_1 = VAR_0->first;
  if (!VAR_1) break;
  VAR_3 = (VAR_1->edge[0] != ((void*)0)) + (VAR_1->edge[1] != ((void*)0));


  if (VAR_3 == 2 || !VAR_1->parent_edge) {
   FUNC_0(VAR_0, VAR_1);
   continue;
  }
  VAR_2 = VAR_1->parent_edge->parent_node;
  FUNC_1(VAR_0, VAR_1);



  VAR_3 = (VAR_2->edge[0] != ((void*)0)) + (VAR_2->edge[1] != ((void*)0));
  if (!VAR_2->elem && VAR_3 == 1 && VAR_2->parent_edge) {
   FUNC_1(VAR_0, VAR_2);
  }
 }
}
