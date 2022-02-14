
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,int ,int ,int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char const*,int *) ;

const char *
FUNC_3(const char *VAR_0, svn_revnum_t VAR_1, svn_depth_t VAR_2,
                svn_boolean_t VAR_3,
                apr_pool_t *VAR_4)
{
  return FUNC_0(VAR_4, "update %s r%ld%s%s",
                      FUNC_2(VAR_0, VAR_4), VAR_1,
                      FUNC_1(VAR_2, VAR_4),
                      (VAR_3
                       ? " send-copyfrom-args"
                       : ""));
}
