
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int *) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,int ) ;

char *
FUNC_6(const char *VAR_0, apr_pool_t *VAR_1)
{
  apr_size_t VAR_2 = FUNC_2(VAR_0);

  FUNC_1(FUNC_3(VAR_0, VAR_1));

  if (FUNC_4(VAR_0, VAR_2))
    return FUNC_0(VAR_1, VAR_0, VAR_2);
  else
    return FUNC_0(VAR_1, VAR_0, FUNC_5(VAR_0, VAR_2));
}
