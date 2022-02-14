
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_3__ {int tree_conflicted_abspaths; int added_abspaths; int skipped_abspaths; int merged_abspaths; } ;
typedef TYPE_1__ merge_cmd_baton_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const char *VAR_0,
                         merge_cmd_baton_t *VAR_1,
                         apr_pool_t *VAR_2)
{
  return (FUNC_0(VAR_0, VAR_1->merged_abspaths, VAR_2)
          || FUNC_0(VAR_0, VAR_1->skipped_abspaths, VAR_2)
          || FUNC_0(VAR_0, VAR_1->added_abspaths, VAR_2)
          || FUNC_0(VAR_0, VAR_1->tree_conflicted_abspaths,
                             VAR_2));
}
