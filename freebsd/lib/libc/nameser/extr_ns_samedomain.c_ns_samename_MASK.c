
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int
FUNC_2(const char *VAR_1, const char *VAR_2) {
 char VAR_3[VAR_0], VAR_4[VAR_0];

 if (FUNC_0(VAR_1, VAR_3, sizeof VAR_3) < 0 ||
     FUNC_0(VAR_2, VAR_4, sizeof VAR_4) < 0)
  return (-1);
 if (FUNC_1(VAR_3, VAR_4) == 0)
  return (1);
 else
  return (0);
}
