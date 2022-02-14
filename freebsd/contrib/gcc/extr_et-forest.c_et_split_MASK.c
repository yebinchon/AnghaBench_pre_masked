
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct et_occ {scalar_t__ min; scalar_t__ depth; int * parent; struct et_occ* next; struct et_occ* prev; } ;
struct et_node {struct et_node* father; struct et_node* right; TYPE_1__* left; struct et_node* son; struct et_occ* parent_occ; struct et_occ* rightmost_occ; } ;
struct TYPE_2__ {struct et_node* right; } ;


 int FUNC_0 (struct et_occ*) ;
 int VAR_0 ;
 int FUNC_1 (struct et_occ*) ;
 int FUNC_2 (struct et_occ*) ;
 int FUNC_3 (int ,struct et_occ*) ;
 int FUNC_4 (struct et_occ*) ;
 int FUNC_5 (struct et_occ*,struct et_occ*) ;

void
FUNC_6 (struct et_node *VAR_1)
{
  struct et_node *VAR_2 = VAR_1->father;
  struct et_occ *VAR_3, *VAR_4, *VAR_5, *VAR_6;


  VAR_5 = VAR_1->rightmost_occ;
  FUNC_2 (VAR_5);

  for (VAR_3 = VAR_5->next; VAR_3->prev; VAR_3 = VAR_3->prev)
    continue;
  FUNC_2 (VAR_3);

  VAR_3->prev->parent = ((void*)0);
  VAR_6 = VAR_1->parent_occ;
  FUNC_2 (VAR_6);
  VAR_1->parent_occ = ((void*)0);

  VAR_4 = VAR_6->prev;
  VAR_6->next->parent = ((void*)0);

  FUNC_5 (VAR_3, VAR_4);

  FUNC_1 (VAR_3);

  FUNC_2 (VAR_5);
  VAR_5->depth = 0;
  VAR_5->min = 0;

  FUNC_3 (VAR_0, VAR_6);


  if (VAR_2->son == VAR_1)
    VAR_2->son = VAR_1->right;
  if (VAR_2->son == VAR_1)
    VAR_2->son = ((void*)0);
  else
    {
      VAR_1->left->right = VAR_1->right;
      VAR_1->right->left = VAR_1->left;
    }
  VAR_1->left = VAR_1->right = ((void*)0);
  VAR_1->father = ((void*)0);
}
