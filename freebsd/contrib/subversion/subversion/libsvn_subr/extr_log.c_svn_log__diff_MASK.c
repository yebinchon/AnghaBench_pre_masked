
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,int ,int ,int ,int ,char const*,...) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,int *) ;

const char *
FUNC_4(const char *VAR_0, svn_revnum_t VAR_1,
              const char *VAR_2, svn_revnum_t VAR_3,
              svn_depth_t VAR_4, svn_boolean_t VAR_5,
              apr_pool_t *VAR_6)
{
  const char *VAR_7 = (VAR_5
                                     ? " ignore-ancestry"
                                     : "");
  if (FUNC_2(VAR_0, VAR_2) == 0)
    return FUNC_0(VAR_6, "diff %s r%ld:%ld%s%s",
                        FUNC_3(VAR_0, VAR_6), VAR_1, VAR_3,
                        FUNC_1(VAR_4, VAR_6), VAR_7);
  return FUNC_0(VAR_6, "diff %s@%ld %s@%ld%s%s",
                      FUNC_3(VAR_0, VAR_6), VAR_1,
                      FUNC_3(VAR_2, VAR_6), VAR_3,
                      FUNC_1(VAR_4, VAR_6), VAR_7);
}
