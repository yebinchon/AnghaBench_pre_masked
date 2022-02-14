
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,int ,int ,int *,int *) ;
 int VAR_0 ;

svn_error_t *
FUNC_2(const char *VAR_1,
                    svn_boolean_t VAR_2,
                    svn_client_ctx_t *VAR_3,
                    apr_pool_t *VAR_4)
{
  svn_depth_t VAR_5 = FUNC_0(VAR_2);
  return FUNC_1(VAR_1, VAR_5,
                            VAR_0, VAR_3, VAR_4);
}
