
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static void
FUNC_1(const char **VAR_0,
                      const char **VAR_1,
                      const char **VAR_2,
                      const char *VAR_3,
                      const char *VAR_4,
                      const char *VAR_5,
                      apr_pool_t *VAR_6)
{

  if (VAR_3)
    *VAR_0 = FUNC_0(VAR_6, "<<<<<<< %s", VAR_3);
  else
    *VAR_0 = "<<<<<<< .working";

  if (VAR_4)
    *VAR_1 = FUNC_0(VAR_6, "||||||| %s", VAR_4);
  else
    *VAR_1 = "||||||| .old";

  if (VAR_5)
    *VAR_2 = FUNC_0(VAR_6, ">>>>>>> %s", VAR_5);
  else
    *VAR_2 = ">>>>>>> .new";
}
