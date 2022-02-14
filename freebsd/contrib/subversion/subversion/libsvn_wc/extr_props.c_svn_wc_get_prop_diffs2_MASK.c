
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int **,int **,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_2(apr_array_header_t **VAR_0,
                       apr_hash_t **VAR_1,
                       svn_wc_context_t *VAR_2,
                       const char *VAR_3,
                       apr_pool_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  return FUNC_0(FUNC_1(VAR_0,
                                    VAR_1, VAR_2->db, VAR_3,
                                    VAR_4, VAR_5));
}
