
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int *) ;

char *
FUNC_4(const char *VAR_1,
                                 const char *VAR_2,
                                 apr_pool_t *VAR_3)
{
  char *VAR_4;
  FUNC_1(FUNC_2(VAR_1));
  FUNC_1(FUNC_2(VAR_2));

  VAR_4 = FUNC_0(VAR_3, "/",
                       FUNC_3(VAR_1 + 1,
                                                        VAR_2 + 1,
                                                        VAR_3),
                       VAR_0);

  FUNC_1(FUNC_2(VAR_4));
  return VAR_4;
}
