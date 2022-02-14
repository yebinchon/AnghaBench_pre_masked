
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_list; int prio_list; } ;
struct plist_node {TYPE_1__ plist; } ;
struct plist_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct plist_head*) ;
 struct plist_node* FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct plist_node *VAR_0, struct plist_head *VAR_1)
{
 FUNC_3(VAR_1);

 if (!FUNC_1(&VAR_0->plist.prio_list)) {
  struct plist_node *VAR_2 = FUNC_4(&VAR_0->plist);

  FUNC_2(&VAR_2->plist.prio_list, &VAR_0->plist.prio_list);
  FUNC_0(&VAR_0->plist.prio_list);
 }

 FUNC_0(&VAR_0->plist.node_list);

 FUNC_3(VAR_1);
}
