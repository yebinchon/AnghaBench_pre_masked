
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
                          const svn_string_t *VAR_5,
                          const svn_diff_file_options_t *VAR_6,
                          apr_pool_t *VAR_7)
{
  diff_mem_baton_t VAR_8;

  FUNC_1(&(VAR_8.sources[0]), VAR_2, VAR_7);
  FUNC_1(&(VAR_8.sources[1]), VAR_3, VAR_7);
  FUNC_1(&(VAR_8.sources[2]), VAR_4, VAR_7);
  FUNC_1(&(VAR_8.sources[3]), VAR_5, VAR_7);
  FUNC_0(&VAR_8, 4, VAR_7);

  VAR_8.normalization_options = VAR_6;

  return FUNC_2(VAR_1, &VAR_8, &VAR_0, VAR_7);
}
