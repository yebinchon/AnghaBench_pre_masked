
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,scalar_t__) ;
 int FUNC_2 (char*,char const*,char const*) ;

int
FUNC_3(const char *VAR_0, const char* VAR_1)
{

 if (FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0)) != 0)
  return 1;

 if (FUNC_0(VAR_0) != FUNC_0(VAR_1))
  FUNC_2("DEPRECATED: '%s' matched '%s' as a sub-string",
      VAR_0, VAR_1);
 return 0;
}
