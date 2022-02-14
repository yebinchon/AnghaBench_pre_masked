
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int *) ;
 char* FUNC_3 (char const*,int *) ;
 char* FUNC_4 (char const*,int *) ;

const char *
FUNC_5(const char *VAR_0,
                          apr_pool_t *VAR_1)
{
  if (FUNC_1(VAR_0))
    {
      VAR_0 = FUNC_4(VAR_0, VAR_1);
    }
  else
    {
      VAR_0 = FUNC_0(VAR_0, VAR_1);

      VAR_0 = FUNC_2(VAR_0, VAR_1);
      VAR_0 = FUNC_3(VAR_0, VAR_1);
    }
  return VAR_0;
}
