
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static const char *
FUNC_6(const char *VAR_0,
                         const char *VAR_1,
                         apr_pool_t *VAR_2,
                         apr_pool_t *VAR_3)
{
  char *VAR_4 = FUNC_1(VAR_2, VAR_0);
  char *VAR_5;
  const char *VAR_6;

  FUNC_0(FUNC_3(VAR_0));
  FUNC_0(FUNC_5(VAR_1));

  if (VAR_1[0] == 0)
    return VAR_4;

  VAR_1 = FUNC_4(VAR_1, VAR_3);
  VAR_5 = VAR_4 + FUNC_2(VAR_4) - 1;
  VAR_6 = VAR_1 + FUNC_2(VAR_1) - 1;

  while (VAR_6 >= VAR_1)
    {
      if (*VAR_5 != *VAR_6)
        return ((void*)0);

      VAR_6--;
      VAR_5--;
    }

  if (*VAR_5 != '/')
    return ((void*)0);

  *VAR_5 = 0;

  return VAR_4;
}
