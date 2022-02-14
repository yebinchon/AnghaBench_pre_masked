
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrtree {int size_bytes; int node_count; } ;
struct addrnode {int parent_index; struct addrnode* str; TYPE_1__* parent_node; struct addrnode** edge; struct addrnode* parent_edge; } ;
struct addredge {int parent_index; struct addredge* str; TYPE_1__* parent_node; struct addredge** edge; struct addredge* parent_edge; } ;
struct TYPE_2__ {struct addrnode** edge; } ;


 int FUNC_0 (struct addrtree*,struct addrnode*) ;
 int FUNC_1 (struct addrnode*) ;
 int FUNC_2 (struct addrtree*,struct addrnode*) ;
 scalar_t__ FUNC_3 (struct addrtree*,struct addrnode*) ;

__attribute__((used)) static void
FUNC_4(struct addrtree *VAR_0, struct addrnode *VAR_1)
{
 struct addredge *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4;
 int VAR_5 = VAR_1->edge[0] && VAR_1->edge[1];

 FUNC_0(VAR_0, VAR_1);
 VAR_2 = VAR_1->parent_edge;
 if (VAR_5 || !VAR_2) return;
 VAR_0->node_count--;
 VAR_4 = VAR_2->parent_index;
 VAR_3 = VAR_1->edge[!VAR_1->edge[0]];
 if (VAR_3) {
  VAR_3->parent_node = VAR_2->parent_node;
  VAR_3->parent_index = VAR_4;
 }
 VAR_2->parent_node->edge[VAR_4] = VAR_3;
 VAR_0->size_bytes -= FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_2->str);
 FUNC_1(VAR_2);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_1);
}
