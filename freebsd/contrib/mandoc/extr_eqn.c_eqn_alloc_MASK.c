
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_node {int gsize; } ;


 int VAR_0 ;
 struct eqn_node* FUNC_0 (int,int) ;

struct eqn_node *
FUNC_1(void)
{
 struct eqn_node *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 VAR_1->gsize = VAR_0;
 return VAR_1;
}
