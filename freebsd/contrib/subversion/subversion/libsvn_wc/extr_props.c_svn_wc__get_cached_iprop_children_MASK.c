
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_2(apr_hash_t **VAR_1,
                                  svn_depth_t VAR_2,
                                  svn_wc_context_t *VAR_3,
                                  const char *VAR_4,
                                  apr_pool_t *VAR_5,
                                  apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_1(VAR_1,
                                                     VAR_2,
                                                     VAR_4,
                                                     VAR_3->db,
                                                     VAR_5,
                                                     VAR_6));
  return VAR_0;
}
