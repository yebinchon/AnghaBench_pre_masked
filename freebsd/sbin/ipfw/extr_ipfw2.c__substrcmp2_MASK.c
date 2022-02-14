
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int ) ;
 int FUNC_3 (char*,char const*,char const*) ;

int
FUNC_4(const char *VAR_0, const char* VAR_1, const char* VAR_2)
{

 if (FUNC_2(VAR_0, VAR_1, FUNC_1(VAR_1)) != 0)
  return 1;

 if (FUNC_0(VAR_0, VAR_2) != 0)
  FUNC_3("DEPRECATED: '%s' matched '%s'",
      VAR_0, VAR_2);
 return 0;
}
