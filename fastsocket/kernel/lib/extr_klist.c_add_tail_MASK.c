
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int n_node; } ;
struct klist {int k_lock; int k_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct klist *VAR_0, struct klist_node *VAR_1)
{
 FUNC_1(&VAR_0->k_lock);
 FUNC_0(&VAR_1->n_node, &VAR_0->k_list);
 FUNC_2(&VAR_0->k_lock);
}
