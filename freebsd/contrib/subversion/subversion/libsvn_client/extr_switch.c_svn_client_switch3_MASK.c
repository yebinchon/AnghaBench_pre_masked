
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
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char const*,char const*,int const*,int const*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int *,int *) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *) ;
 scalar_t__ FUNC_5 (char const*) ;

svn_error_t *
FUNC_6(svn_revnum_t *VAR_2,
                   const char *VAR_3,
                   const char *VAR_4,
                   const svn_opt_revision_t *VAR_5,
                   const svn_opt_revision_t *VAR_6,
                   svn_depth_t VAR_7,
                   svn_boolean_t VAR_8,
                   svn_boolean_t VAR_9,
                   svn_boolean_t VAR_10,
                   svn_boolean_t VAR_11,
                   svn_client_ctx_t *VAR_12,
                   apr_pool_t *VAR_13)
{
  svn_error_t *VAR_14;
  svn_boolean_t VAR_15 = VAR_0;

  if (FUNC_5(VAR_3))
    return FUNC_2(VAR_1, ((void*)0),
                             FUNC_0("'%s' is not a local path"), VAR_3);

  VAR_14 = FUNC_1(VAR_2, VAR_3, VAR_4,
                                    VAR_5, VAR_6, VAR_7,
                                    VAR_8, VAR_9,
                                    VAR_10,
                                    VAR_11, &VAR_15, VAR_12, VAR_13);



  if (VAR_15)
    FUNC_4(VAR_3, VAR_13);

  return FUNC_3(VAR_14);
}
