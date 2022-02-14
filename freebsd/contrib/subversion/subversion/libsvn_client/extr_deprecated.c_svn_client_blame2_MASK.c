
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_blame_receiver_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int const*,int const*,int const*,int ,int ,int ,void*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void**,int *) ;

svn_error_t *
FUNC_3(const char *VAR_1,
                  const svn_opt_revision_t *VAR_2,
                  const svn_opt_revision_t *VAR_3,
                  const svn_opt_revision_t *VAR_4,
                  svn_client_blame_receiver_t VAR_5,
                  void *VAR_6,
                  svn_client_ctx_t *VAR_7,
                  apr_pool_t *VAR_8)
{
  FUNC_2(&VAR_5, &VAR_6, VAR_8);
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
                           FUNC_1(VAR_8), VAR_0,
                           VAR_5, VAR_6, VAR_7, VAR_8);
}
