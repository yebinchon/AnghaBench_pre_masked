
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4)
{
  if (FUNC_1(VAR_4, "2") == 0)
    VAR_0 = VAR_1;
  else if (FUNC_1(VAR_4, "3") == 0)
    VAR_0 = VAR_2;
  else {
    FUNC_0(VAR_3, "conf: bad auto nfs version : \"%s\"\n", VAR_4);
    return 1;
  }
  return 0;
}
