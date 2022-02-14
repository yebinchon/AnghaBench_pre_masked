
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct et_occ {int depth; int min; struct et_node* of; TYPE_1__* min_occ; struct et_occ* parent; struct et_occ* prev; struct et_occ* next; } ;
struct et_node {struct et_occ* rightmost_occ; } ;
struct TYPE_2__ {struct et_node* of; } ;


 int FUNC_0 (struct et_occ*) ;
 int FUNC_1 (struct et_occ*) ;
 int FUNC_2 (struct et_occ*,struct et_occ*) ;
 int FUNC_3 (struct et_occ*,struct et_occ*) ;

struct et_node *
FUNC_4 (struct et_node *VAR_0, struct et_node *VAR_1)
{
  struct et_occ *VAR_2 = VAR_0->rightmost_occ, *VAR_3 = VAR_1->rightmost_occ, *VAR_4;
  struct et_occ *VAR_5, *VAR_6, *VAR_7;
  int VAR_8;

  if (VAR_0 == VAR_1)
    return VAR_0;

  FUNC_1 (VAR_2);
  VAR_5 = VAR_2->prev;
  VAR_6 = VAR_2->next;
  if (VAR_5)
    VAR_5->parent = ((void*)0);
  if (VAR_6)
    VAR_6->parent = ((void*)0);
  FUNC_1 (VAR_3);

  if (VAR_5 == VAR_3 || (VAR_5 && VAR_5->parent != ((void*)0)))
    {
      VAR_7 = VAR_3->next;

      FUNC_3 (VAR_2, VAR_3);
      if (VAR_6)
 VAR_6->parent = VAR_2;
    }
  else
    {
      VAR_7 = VAR_3->prev;

      FUNC_2 (VAR_2, VAR_3);
      if (VAR_5)
 VAR_5->parent = VAR_2;
    }

  if (0 < VAR_3->depth)
    {
      VAR_4 = VAR_2;
      VAR_8 = VAR_2->depth;
    }
  else
    {
      VAR_4 = VAR_3;
      VAR_8 = VAR_3->depth + VAR_2->depth;
    }





  if (VAR_7 && VAR_7->min + VAR_2->depth + VAR_3->depth < VAR_8)
    return VAR_7->min_occ->of;
  else
    return VAR_4->of;
}
