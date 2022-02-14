
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (char const **VAR_0, char const *VAR_1, char const *VAR_2)
{
  if (*VAR_0 && FUNC_2 (*VAR_0, VAR_1) != 0)
    {
      FUNC_1 (0, 0, FUNC_0("conflicting %s option value `%s'"), VAR_2, VAR_1);
      FUNC_3 (0, 0);
    }
  *VAR_0 = VAR_1;
}
