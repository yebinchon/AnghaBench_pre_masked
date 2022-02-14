
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int children; } ;
typedef TYPE_1__ lang_wild_statement_type ;
struct TYPE_7__ {struct TYPE_7__* right; int section; struct TYPE_7__* left; } ;
typedef TYPE_2__ lang_section_bst_type ;
typedef int lang_output_section_statement_type ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_2 (lang_wild_statement_type *VAR_0,
          lang_section_bst_type *VAR_1,
          void *VAR_2)
{
  if (VAR_1->left)
    FUNC_2 (VAR_0, VAR_1->left, VAR_2);

  FUNC_1 (&VAR_0->children, VAR_1->section,
      (lang_output_section_statement_type *) VAR_2);

  if (VAR_1->right)
    FUNC_2 (VAR_0, VAR_1->right, VAR_2);

  FUNC_0 (VAR_1);
}
