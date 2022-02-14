
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_blame_receiver_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (char const*,int const*,int const*,int const*,int ,void*,int *,int *) ;
 int FUNC_1 (int *,void**,int *) ;

svn_error_t *
FUNC_2(const char *VAR_0,
                 const svn_opt_revision_t *VAR_1,
                 const svn_opt_revision_t *VAR_2,
                 svn_client_blame_receiver_t VAR_3,
                 void *VAR_4,
                 svn_client_ctx_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  FUNC_1(&VAR_3, &VAR_4, VAR_6);
  return FUNC_0(VAR_0, VAR_2, VAR_1, VAR_2,
                           VAR_3, VAR_4, VAR_5, VAR_6);
}
