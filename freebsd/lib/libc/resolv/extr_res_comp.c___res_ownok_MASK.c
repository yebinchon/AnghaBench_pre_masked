
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0) {
 if (FUNC_0(VAR_0[0])) {
  if (FUNC_1(VAR_0[1]))
   return (FUNC_2(VAR_0+2));
  if (VAR_0[1] == '\0')
   return (1);
 }
 return (FUNC_2(VAR_0));
}
