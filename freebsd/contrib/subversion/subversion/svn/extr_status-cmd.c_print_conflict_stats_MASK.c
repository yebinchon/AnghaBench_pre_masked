
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct status_baton {scalar_t__ text_conflicts; scalar_t__ prop_conflicts; scalar_t__ tree_conflicts; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(struct status_baton *VAR_1, apr_pool_t *VAR_2)
{
  if (VAR_1->text_conflicts > 0 || VAR_1->prop_conflicts > 0 ||
      VAR_1->tree_conflicts > 0)
      FUNC_0(FUNC_2(VAR_2, "%s", FUNC_1("Summary of conflicts:\n")));

  if (VAR_1->text_conflicts > 0)
    FUNC_0(FUNC_2
      (VAR_2, FUNC_1("  Text conflicts: %u\n"), VAR_1->text_conflicts));

  if (VAR_1->prop_conflicts > 0)
    FUNC_0(FUNC_2
      (VAR_2, FUNC_1("  Property conflicts: %u\n"), VAR_1->prop_conflicts));

  if (VAR_1->tree_conflicts > 0)
    FUNC_0(FUNC_2
      (VAR_2, FUNC_1("  Tree conflicts: %u\n"), VAR_1->tree_conflicts));

  return VAR_0;
}
