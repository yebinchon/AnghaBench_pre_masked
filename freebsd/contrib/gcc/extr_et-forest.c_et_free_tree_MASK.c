
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_node {struct et_node* rightmost_occ; scalar_t__ father; struct et_node* son; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct et_node*) ;
 int FUNC_1 (int ,struct et_node*) ;

void
FUNC_2 (struct et_node *VAR_2)
{
  while (VAR_2->son)
    FUNC_0 (VAR_2->son);

  if (VAR_2->father)
    FUNC_0 (VAR_2);

  FUNC_1 (VAR_1, VAR_2->rightmost_occ);
  FUNC_1 (VAR_0, VAR_2);
}
