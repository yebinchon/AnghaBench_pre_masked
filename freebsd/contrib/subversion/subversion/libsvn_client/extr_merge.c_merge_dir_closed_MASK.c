
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_diff_source_t ;
struct svn_diff_tree_processor_t {int * baton; } ;
struct merge_dir_baton_t {int dummy; } ;
typedef int merge_cmd_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,struct merge_dir_baton_t*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
                 const svn_diff_source_t *VAR_2,
                 const svn_diff_source_t *VAR_3,
                 void *VAR_4,
                 const struct svn_diff_tree_processor_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  merge_cmd_baton_t *VAR_7 = VAR_5->baton;
  struct merge_dir_baton_t *VAR_8 = VAR_4;

  FUNC_0(FUNC_1(VAR_7, VAR_8, VAR_6));

  return VAR_0;
}
