
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_proplist_item_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct proplist_receiver_baton {int * pool; int * props; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int,int) ;
 int VAR_0 ;
 int * FUNC_2 (char const*,int const*,int const*,int ,int *,int ,struct proplist_receiver_baton*,int *,int *) ;

svn_error_t *
FUNC_3(apr_array_header_t **VAR_1,
                     const char *VAR_2,
                     const svn_opt_revision_t *VAR_3,
                     const svn_opt_revision_t *VAR_4,
                     svn_boolean_t VAR_5,
                     svn_client_ctx_t *VAR_6,
                     apr_pool_t *VAR_7)
{
  struct proplist_receiver_baton VAR_8;

  *VAR_1 = FUNC_1(VAR_7, 5, sizeof(svn_client_proplist_item_t *));
  VAR_8.props = *VAR_1;
  VAR_8.pool = VAR_7;

  return FUNC_2(VAR_2, VAR_3, VAR_4,
                              FUNC_0(VAR_5), ((void*)0),
                              VAR_0, &VAR_8, VAR_6, VAR_7);
}
