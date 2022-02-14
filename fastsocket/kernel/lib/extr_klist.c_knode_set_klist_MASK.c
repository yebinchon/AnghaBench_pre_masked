
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {struct klist* n_klist; } ;
struct klist {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct klist_node*) ;

__attribute__((used)) static void FUNC_2(struct klist_node *VAR_0, struct klist *VAR_1)
{
 VAR_0->n_klist = VAR_1;

 FUNC_0(FUNC_1(VAR_0));
}
