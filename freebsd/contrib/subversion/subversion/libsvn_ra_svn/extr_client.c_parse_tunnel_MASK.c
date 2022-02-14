
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const char **VAR_1,
                         apr_pool_t *VAR_2)
{
  *VAR_1 = ((void*)0);

  if (FUNC_2(VAR_0, "svn", 3) != 0)
    return;
  VAR_0 += 3;


  if (*VAR_0 == '+')
    {
      const char *VAR_3;

      VAR_0++;
      VAR_3 = FUNC_1(VAR_0, ':');
      if (!VAR_3)
        return;
      *VAR_1 = FUNC_0(VAR_2, VAR_0, VAR_3 - VAR_0);
    }
}
