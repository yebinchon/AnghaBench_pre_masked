
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 char* FUNC_0 (int *,char const*,char const*,char const*,...) ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

char *
FUNC_5(const char *VAR_1,
                 const char *VAR_2,
                 apr_pool_t *VAR_3)
{
  char *VAR_4;
  FUNC_2(FUNC_3(VAR_1));
  FUNC_2(FUNC_4(VAR_2));

  if (VAR_2[0] == '\0')
    VAR_4 = FUNC_1(VAR_3, VAR_1);
  else if (VAR_1[1] == '\0')
    VAR_4 = FUNC_0(VAR_3, "/", VAR_2, VAR_0);
  else
    VAR_4 = FUNC_0(VAR_3, VAR_1, "/", VAR_2, VAR_0);

  FUNC_2(FUNC_3(VAR_4));
  return VAR_4;
}
