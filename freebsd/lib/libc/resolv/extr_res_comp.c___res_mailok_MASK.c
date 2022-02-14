
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(const char *VAR_0) {
 int VAR_1, VAR_2 = 0;


 if (*VAR_0 == '\0')
  return (1);


 while ((VAR_1 = *VAR_0++) != '\0') {
  if (!FUNC_1(VAR_1))
   return (0);
  if (!VAR_2 && FUNC_2(VAR_1))
   break;
  if (VAR_2)
   VAR_2 = 0;
  else if (FUNC_0(VAR_1))
   VAR_2 = 1;
 }
 if (FUNC_2(VAR_1))
  return (FUNC_3(VAR_0));
 return (0);
}
