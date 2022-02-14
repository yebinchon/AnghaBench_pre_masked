
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int n_node; } ;
struct klist {int k_lock; } ;


 int FUNC_0 (struct klist*,struct klist_node*) ;
 struct klist* FUNC_1 (struct klist_node*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct klist_node *VAR_0, struct klist_node *VAR_1)
{
 struct klist *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_0);
 FUNC_3(&VAR_2->k_lock);
 FUNC_2(&VAR_0->n_node, &VAR_1->n_node);
 FUNC_4(&VAR_2->k_lock);
}
