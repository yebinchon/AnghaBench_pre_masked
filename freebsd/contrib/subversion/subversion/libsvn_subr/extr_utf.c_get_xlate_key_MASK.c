
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int *,char*,char const*,char*,char const*,char*,int ) ;

__attribute__((used)) static const char*
FUNC_1(const char *VAR_3,
              const char *VAR_4,
              apr_pool_t *VAR_5)
{



  if (VAR_4 == VAR_1)
    VAR_4 = "APR_LOCALE_CHARSET";
  else if (VAR_4 == VAR_0)
    VAR_4 = "APR_DEFAULT_CHARSET";

  if (VAR_3 == VAR_1)
    VAR_3 = "APR_LOCALE_CHARSET";
  else if (VAR_3 == VAR_0)
    VAR_3 = "APR_DEFAULT_CHARSET";

  return FUNC_0(VAR_5, "svn-utf-", VAR_4, "to", VAR_3,
                     "-xlate-handle", VAR_2);
}
