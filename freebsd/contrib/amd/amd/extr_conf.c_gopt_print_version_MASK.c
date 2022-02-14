
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 () ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1)
{
  if (FUNC_0(VAR_1, "yes")) {
    char *VAR_2 = FUNC_4();
    FUNC_3(VAR_2, VAR_0);
    FUNC_1(VAR_2);
    return 0;
  } else if (FUNC_0(VAR_1, "no")) {
    return 0;
  }

  FUNC_2(VAR_0, "conf: unknown value to print_version \"%s\"\n", VAR_1);
  return 1;
}
