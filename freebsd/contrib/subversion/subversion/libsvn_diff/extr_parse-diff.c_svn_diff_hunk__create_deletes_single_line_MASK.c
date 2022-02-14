
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reverse; } ;
typedef TYPE_1__ svn_patch_t ;
typedef int svn_error_t ;
typedef int svn_diff_hunk_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,char const*,TYPE_1__ const*,int ,int *,int *) ;

svn_error_t *
FUNC_2(svn_diff_hunk_t **VAR_1,
                                          const char *VAR_2,
                                          const svn_patch_t *VAR_3,
                                          apr_pool_t *VAR_4,
                                          apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3,
                                    VAR_3->reverse,
                                    VAR_4, VAR_5));
  return VAR_0;
}
