
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_occ {scalar_t__ depth; scalar_t__ min; int min_occ; struct et_occ* prev; } ;
struct et_node {struct et_node* son; struct et_node* right; struct et_node* left; struct et_node* father; struct et_occ* parent_occ; struct et_occ* rightmost_occ; } ;


 int FUNC_0 (struct et_occ*) ;
 struct et_occ* FUNC_1 (struct et_node*) ;
 int FUNC_2 (struct et_occ*) ;
 int FUNC_3 (struct et_occ*) ;
 int FUNC_4 (struct et_occ*) ;
 int FUNC_5 (struct et_occ*,struct et_occ*) ;
 int FUNC_6 (struct et_occ*,struct et_occ*) ;

void
FUNC_7 (struct et_node *VAR_0, struct et_node *VAR_1)
{
  struct et_node *VAR_2, *VAR_3;
  struct et_occ *VAR_4, *VAR_5, *VAR_6, *VAR_7;


  VAR_6 = FUNC_1 (VAR_1);

  VAR_4 = VAR_1->rightmost_occ;
  FUNC_3 (VAR_4);

  VAR_5 = VAR_4->prev;

  VAR_7 = VAR_0->rightmost_occ;
  FUNC_3 (VAR_7);

  FUNC_6 (VAR_6, VAR_5);
  FUNC_5 (VAR_6, VAR_7);

  VAR_7->depth++;
  VAR_7->min++;
  FUNC_2 (VAR_6);

  FUNC_6 (VAR_4, VAR_6);

  if (VAR_6->min + VAR_4->depth < VAR_4->min)
    {
      VAR_4->min = VAR_6->min + VAR_4->depth;
      VAR_4->min_occ = VAR_6->min_occ;
    }

  VAR_0->parent_occ = VAR_6;


  VAR_0->father = VAR_1;
  VAR_3 = VAR_1->son;
  if (VAR_3)
    VAR_2 = VAR_3->left;
  else
    VAR_2 = VAR_3 = VAR_0;

  VAR_2->right = VAR_0;
  VAR_3->left = VAR_0;
  VAR_0->left = VAR_2;
  VAR_0->right = VAR_3;

  VAR_1->son = VAR_0;





}
