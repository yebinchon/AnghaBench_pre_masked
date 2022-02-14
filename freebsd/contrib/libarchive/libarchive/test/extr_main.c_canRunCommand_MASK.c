
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,int ) ;

int
FUNC_1(const char *VAR_1)
{
  static int VAR_2 = 0, VAR_3 = 0;
  if (!VAR_2) {
    VAR_2 = 1;
    if (FUNC_0("%s %s", VAR_1, VAR_0) == 0)
      VAR_3 = 1;
  }
  return (VAR_3);
}
