
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int *,int ,char const*,int ,int *) ;

svn_error_t *
FUNC_1(svn_revnum_t *VAR_0,
                             svn_revnum_t *VAR_1,
                             const char *VAR_2,
                             svn_boolean_t VAR_3,
                             svn_client_ctx_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  return FUNC_0(VAR_0, VAR_1, VAR_4->wc_ctx,
                                   VAR_2, VAR_3, VAR_5);
}
