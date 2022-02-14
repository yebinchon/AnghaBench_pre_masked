
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 char const* VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_3 (const char **VAR_1, const char *VAR_2)
{
  if (*VAR_1 != 0 && FUNC_2 (*VAR_1, VAR_2) != 0)
    FUNC_1 (FUNC_0("A different %s was already specified, is now %s"),
      VAR_1 == &VAR_0 ? "-march" : "-mtune",
      VAR_2);

  *VAR_1 = VAR_2;
}
