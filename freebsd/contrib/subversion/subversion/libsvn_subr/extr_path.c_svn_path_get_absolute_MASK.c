
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int *,char const*) ;
 int * FUNC_1 (char const**,char const*,int *) ;
 scalar_t__ FUNC_2 (char const*) ;

svn_error_t *
FUNC_3(const char **VAR_1,
                      const char *VAR_2,
                      apr_pool_t *VAR_3)
{
  if (FUNC_2(VAR_2))
    {
      *VAR_1 = FUNC_0(VAR_3, VAR_2);
      return VAR_0;
    }

  return FUNC_1(VAR_1, VAR_2, VAR_3);
}
