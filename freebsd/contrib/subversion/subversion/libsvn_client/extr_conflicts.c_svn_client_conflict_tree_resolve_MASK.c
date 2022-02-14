
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
struct TYPE_4__ {int (* do_resolve_func ) (TYPE_1__*,int *,int *,int *) ;} ;
typedef TYPE_1__ svn_client_conflict_option_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int *) ;

svn_error_t *
FUNC_3(svn_client_conflict_t *VAR_1,
                                 svn_client_conflict_option_t *VAR_2,
                                 svn_client_ctx_t *VAR_3,
                                 apr_pool_t *VAR_4)
{
  FUNC_0(FUNC_1(VAR_1, VAR_4));
  FUNC_0(VAR_2->do_resolve_func(VAR_2, VAR_1, VAR_3, VAR_4));

  return VAR_0;
}
