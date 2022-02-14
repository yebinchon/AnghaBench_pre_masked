
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_tristate_t ;
typedef int svn_boolean_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char const*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_boolean_t
FUNC_2(apr_hash_t *VAR_4, const char *VAR_5,
                   svn_boolean_t VAR_6)
{
  const char *VAR_7 = FUNC_0(VAR_4, VAR_5, ((void*)0));
  svn_tristate_t VAR_8 = FUNC_1(VAR_7);

  if (VAR_8 == VAR_3)
    return VAR_1;
  else if (VAR_8 == VAR_2)
    return VAR_0;

  return VAR_6;
}
