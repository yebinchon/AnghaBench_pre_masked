
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;

apr_size_t
FUNC_3(const char *VAR_0)
{
  apr_size_t VAR_1 = 0;

  FUNC_0(FUNC_1(VAR_0, FUNC_2(VAR_0)));

  while (*VAR_0)
    {
      const char *VAR_2;

      while (*VAR_0 == '/')
        ++VAR_0;

      VAR_2 = VAR_0;

      while (*VAR_0 && *VAR_0 != '/')
        ++VAR_0;

      if (VAR_0 != VAR_2)
        ++VAR_1;
    }

  return VAR_1;
}
