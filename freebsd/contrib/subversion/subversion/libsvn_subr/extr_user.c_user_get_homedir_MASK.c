
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int *) ;
 scalar_t__ FUNC_1 (char**,char const*,int *) ;
 char* FUNC_2 (int *) ;
 char const* FUNC_3 (char*,int *) ;

__attribute__((used)) static const char *
FUNC_4(apr_pool_t *VAR_1)
{
  const char *VAR_2;
  char *VAR_3;

  if (FUNC_0(&VAR_3, "HOME", VAR_1) == VAR_0)
    return FUNC_3(VAR_3, VAR_1);

  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 != ((void*)0) &&
      FUNC_1(&VAR_3, VAR_2, VAR_1) == VAR_0)
    return FUNC_3(VAR_3, VAR_1);

  return ((void*)0);
}
