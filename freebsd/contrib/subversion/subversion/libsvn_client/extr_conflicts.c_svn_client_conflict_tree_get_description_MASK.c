
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_5__ {int (* tree_conflict_get_local_description_func ) (char const**,TYPE_1__*,int *,int *,int *) ;int (* tree_conflict_get_incoming_description_func ) (char const**,TYPE_1__*,int *,int *,int *) ;} ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,TYPE_1__*,int *,int *,int *) ;
 int FUNC_2 (char const**,TYPE_1__*,int *,int *,int *) ;

svn_error_t *
FUNC_3(
  const char **VAR_1,
  const char **VAR_2,
  svn_client_conflict_t *VAR_3,
  svn_client_ctx_t *VAR_4,
  apr_pool_t *VAR_5,
  apr_pool_t *VAR_6)
{
  FUNC_0(VAR_3->tree_conflict_get_incoming_description_func(
            VAR_1,
            VAR_3, VAR_4, VAR_5, VAR_6));

  FUNC_0(VAR_3->tree_conflict_get_local_description_func(
            VAR_2,
            VAR_3, VAR_4, VAR_5, VAR_6));

  return VAR_0;
}
