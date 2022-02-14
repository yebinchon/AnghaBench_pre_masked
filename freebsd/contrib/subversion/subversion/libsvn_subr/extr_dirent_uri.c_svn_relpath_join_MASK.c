
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,scalar_t__) ;
 char* FUNC_1 (int *,char const*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,scalar_t__) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

char *
FUNC_6(const char *VAR_0,
                 const char *VAR_1,
                 apr_pool_t *VAR_2)
{
  apr_size_t VAR_3 = FUNC_5(VAR_0);
  apr_size_t VAR_4 = FUNC_5(VAR_1);
  char *VAR_5;

  FUNC_2(FUNC_4(VAR_0));
  FUNC_2(FUNC_4(VAR_1));


  if (VAR_3 == 0)
    return FUNC_1(VAR_2, VAR_1, VAR_4 + 1);
  if (VAR_4 == 0)
    return FUNC_1(VAR_2, VAR_0, VAR_3 + 1);

  VAR_5 = FUNC_0(VAR_2, VAR_3 + 1 + VAR_4 + 1);
  FUNC_3(VAR_5, VAR_0, VAR_3);
  VAR_5[VAR_3] = '/';
  FUNC_3(VAR_5 + VAR_3 + 1, VAR_1, VAR_4 + 1);

  return VAR_5;
}
