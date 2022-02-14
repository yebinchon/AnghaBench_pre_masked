
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_cl__prop_use_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (int *,int ,char const*) ;




__attribute__((used)) static const char*
FUNC_2(svn_cl__prop_use_t VAR_0, const char *VAR_1,
                          apr_pool_t *VAR_2)
{
  switch (VAR_0)
    {
    case 129:
      return FUNC_1(
          VAR_2,
          FUNC_0("Use '--force' to set the '%s' property."),
          VAR_1);
    case 130:
      return FUNC_1(
          VAR_2,
          FUNC_0("Use '--force' to edit the '%s' property."),
          VAR_1);
    case 128:
    default:
      return FUNC_1(
          VAR_2,
          FUNC_0("Use '--force' to use the '%s' property'."),
          VAR_1);
    }
}
