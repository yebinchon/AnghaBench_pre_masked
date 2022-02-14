
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_file_options_t ;
struct TYPE_4__ {int const* normalization_options; int * sources; } ;
typedef TYPE_1__ diff_mem_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,int,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int VAR_0 ;
 int * FUNC_2 (int **,TYPE_1__*,int *,int *) ;

svn_error_t *
FUNC_3(svn_diff_t **VAR_1,
                          const svn_string_t *VAR_2,
                          const svn_string_t *VAR_3,
                          const svn_string_t *VAR_4,
                          const svn_diff_file_options_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  diff_mem_baton_t VAR_7;

  FUNC_1(&(VAR_7.sources[0]), VAR_2, VAR_6);
  FUNC_1(&(VAR_7.sources[1]), VAR_3, VAR_6);
  FUNC_1(&(VAR_7.sources[2]), VAR_4, VAR_6);
  FUNC_0(&VAR_7, 3, VAR_6);

  VAR_7.normalization_options = VAR_5;

  return FUNC_2(VAR_1, &VAR_7, &VAR_0, VAR_6);
}
