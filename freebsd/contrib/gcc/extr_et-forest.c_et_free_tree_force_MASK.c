
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_node {struct et_node* parent_occ; struct et_node* rightmost_occ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct et_node*) ;

void
FUNC_1 (struct et_node *VAR_2)
{
  FUNC_0 (VAR_1, VAR_2->rightmost_occ);
  if (VAR_2->parent_occ)
    FUNC_0 (VAR_1, VAR_2->parent_occ);
  FUNC_0 (VAR_0, VAR_2);
}
