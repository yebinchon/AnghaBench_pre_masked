
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (char*,char const*) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_0,
                        apr_pool_t *VAR_1)
{

  enum {SPECIAL_COUNT = 2};
  static const char *VAR_2[SPECIAL_COUNT] = {"trunk", "branch"};
  char *VAR_3;
  char *VAR_4 = FUNC_0(VAR_1, VAR_0);
  int VAR_5;






  for (VAR_5 = 0; VAR_5 < SPECIAL_COUNT; ++VAR_5)
    for (VAR_3 = FUNC_1(VAR_4, VAR_2[VAR_5]);
         VAR_3;
         VAR_3 = FUNC_1(VAR_3 + 1, VAR_2[VAR_5]))
      {
        *VAR_3 = (char)(VAR_5 + '\1');
      }

   return VAR_4;
}
