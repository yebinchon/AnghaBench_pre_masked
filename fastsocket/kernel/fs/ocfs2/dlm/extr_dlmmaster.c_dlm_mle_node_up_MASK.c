
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int dummy; } ;
struct dlm_master_list_entry {int spinlock; int node_map; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct dlm_ctxt *VAR_0,
       struct dlm_master_list_entry *VAR_1,
       struct o2nm_node *VAR_2, int VAR_3)
{
 FUNC_2(&VAR_1->spinlock);

 if (FUNC_4(VAR_3, VAR_1->node_map))
  FUNC_0(0, "node %u already in node map!\n", VAR_3);
 else
  FUNC_1(VAR_3, VAR_1->node_map);

 FUNC_3(&VAR_1->spinlock);
}
