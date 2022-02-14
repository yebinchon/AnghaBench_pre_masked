
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,char const*,int ) ;
 char* FUNC_1 (char const*,int *) ;

const char *
FUNC_2(const char *VAR_0,
                             svn_revnum_t VAR_1,
                             apr_pool_t *VAR_2)
{
  const char *VAR_3;

  if (VAR_0 && VAR_0[0] != '\0')
    VAR_3 = FUNC_1(VAR_0, VAR_2);
  else
    VAR_3 = "/";
  return FUNC_0(VAR_2, "get-inherited-props %s r%ld", VAR_3, VAR_1);
}
