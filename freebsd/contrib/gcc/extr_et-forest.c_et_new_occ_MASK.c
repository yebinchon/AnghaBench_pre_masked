
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_occ {scalar_t__ min; struct et_occ* min_occ; scalar_t__ depth; int * next; int * prev; int * parent; struct et_node* of; } ;
struct et_node {int dummy; } ;


 scalar_t__ FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 struct et_occ* FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct et_occ *
FUNC_2 (struct et_node *VAR_1)
{
  struct et_occ *VAR_2;

  if (!VAR_0)
    VAR_0 = FUNC_0 ("et_occ pool", sizeof (struct et_occ), 300);
  VAR_2 = FUNC_1 (VAR_0);

  VAR_2->of = VAR_1;
  VAR_2->parent = ((void*)0);
  VAR_2->prev = ((void*)0);
  VAR_2->next = ((void*)0);

  VAR_2->depth = 0;
  VAR_2->min_occ = VAR_2;
  VAR_2->min = 0;

  return VAR_2;
}
