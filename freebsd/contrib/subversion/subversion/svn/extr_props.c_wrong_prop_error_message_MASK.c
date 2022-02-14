
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_cl__prop_use_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char const* FUNC_1 (int *,int ,char const*,int ) ;




__attribute__((used)) static const char*
FUNC_2(svn_cl__prop_use_t VAR_1, const char *VAR_2,
                         apr_pool_t *VAR_3)
{
  switch (VAR_1)
    {
    case 129:
      return FUNC_1(
          VAR_3,
          FUNC_0("'%s' is not a valid %s property name; use '--force' to set it"),
          VAR_2, VAR_0);
    case 130:
      return FUNC_1(
          VAR_3,
          FUNC_0("'%s' is not a valid %s property name; use '--force' to edit it"),
          VAR_2, VAR_0);
    case 128:
    default:
      return FUNC_1(
          VAR_3,
          FUNC_0("'%s' is not a valid %s property name; use '--force' to use it"),
          VAR_2, VAR_0);
    }
}
