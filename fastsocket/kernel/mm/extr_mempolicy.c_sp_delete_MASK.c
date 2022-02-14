
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_node {int policy; int nd; int end; int start; } ;
struct shared_policy {int root; } ;


 int FUNC_0 (int ,struct sp_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct shared_policy *VAR_1, struct sp_node *VAR_2)
{
 FUNC_2("deleting %lx-l%lx\n", VAR_2->start, VAR_2->end);
 FUNC_3(&VAR_2->nd, &VAR_1->root);
 FUNC_1(VAR_2->policy);
 FUNC_0(VAR_0, VAR_2);
}
