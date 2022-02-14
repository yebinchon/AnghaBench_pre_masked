
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct sra_elt {struct sra_elt* sibling; int element; TYPE_1__* parent; int is_group; } ;
struct TYPE_2__ {struct sra_elt* children; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct sra_elt *
FUNC_5 (struct sra_elt *VAR_1, struct sra_elt *VAR_2)
{
  FUNC_2 (VAR_2->is_group);


  if (VAR_1)
    VAR_1 = VAR_1->sibling;
  else
    VAR_1 = VAR_2->parent->children;


  while (VAR_1)
    {
      tree VAR_3 = VAR_2->element;
      if (FUNC_0 (VAR_3) == VAR_0)
 {
   if (!FUNC_4 (VAR_1->element, FUNC_1 (VAR_3, 0))
       && !FUNC_4 (FUNC_1 (VAR_3, 1), VAR_1->element))
     break;
 }
      else
 FUNC_3 ();

      VAR_1 = VAR_1->sibling;
    }

  return VAR_1;
}
