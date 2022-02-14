
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (void*,char const*,char const*,int ,scalar_t__,int ,char const*,int *) ;

svn_error_t *
FUNC_4(void *VAR_2, const char *VAR_3, const char *VAR_4,
                     svn_revnum_t VAR_5, svn_depth_t VAR_6,
                     svn_boolean_t VAR_7,
                     const char *VAR_8, apr_pool_t *VAR_9)
{
  if (VAR_6 == VAR_1)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Depth 'exclude' not supported for link"));

  return FUNC_2(
            FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                            VAR_7, VAR_8, VAR_9));
}
