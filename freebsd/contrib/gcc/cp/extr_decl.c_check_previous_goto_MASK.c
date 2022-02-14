
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct named_label_use_entry {int o_goto_locus; int in_omp_scope; int names_in_scope; int binding_level; } ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1 (tree VAR_0, struct named_label_use_entry *VAR_1)
{
  FUNC_0 (VAR_0, VAR_1->binding_level,
    VAR_1->names_in_scope, VAR_1->in_omp_scope,
    &VAR_1->o_goto_locus);
}
