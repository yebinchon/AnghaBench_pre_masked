
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int n_ref; int n_node; } ;
struct klist {int (* get ) (struct klist_node*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct klist_node*,struct klist*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct klist_node*) ;

__attribute__((used)) static void FUNC_4(struct klist *VAR_0, struct klist_node *VAR_1)
{
 FUNC_0(&VAR_1->n_node);
 FUNC_2(&VAR_1->n_ref);
 FUNC_1(VAR_1, VAR_0);
 if (VAR_0->get)
  VAR_0->get(VAR_1);
}
