
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*,...) ;

void
FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3)
{
 if (VAR_0 == ((void*)0))
  FUNC_0("Assertion failed: (%s), file %s, line %d.",
      VAR_3, VAR_1, VAR_2);
 else
  FUNC_0(
      "Assertion failed: (%s), function %s, file %s, line %d.",
      VAR_3, VAR_0, VAR_1, VAR_2);
}
