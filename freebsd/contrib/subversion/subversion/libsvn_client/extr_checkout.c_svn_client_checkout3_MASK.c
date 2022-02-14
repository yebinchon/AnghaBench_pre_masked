
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,scalar_t__*,char const*,char const*,int const*,int const*,int ,scalar_t__,scalar_t__,int *,int *,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *) ;

svn_error_t *
FUNC_5(svn_revnum_t *VAR_1,
                     const char *VAR_2,
                     const char *VAR_3,
                     const svn_opt_revision_t *VAR_4,
                     const svn_opt_revision_t *VAR_5,
                     svn_depth_t VAR_6,
                     svn_boolean_t VAR_7,
                     svn_boolean_t VAR_8,
                     svn_client_ctx_t *VAR_9,
                     apr_pool_t *VAR_10)
{
  const char *VAR_11;
  svn_error_t *VAR_12;
  svn_boolean_t VAR_13 = VAR_0;

  FUNC_0(FUNC_2(&VAR_11, VAR_3, VAR_10));

  VAR_12 = FUNC_1(VAR_1, &VAR_13,
                                      VAR_2, VAR_11,
                                      VAR_4, VAR_5, VAR_6,
                                      VAR_7,
                                      VAR_8,
                                      ((void*)0) ,
                                      VAR_9, VAR_10);
  if (VAR_13)
    FUNC_4(VAR_11, VAR_10);

  return FUNC_3(VAR_12);
}
