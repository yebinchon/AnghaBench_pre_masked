
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(const char *VAR_1) {
 int VAR_2 = VAR_0, VAR_3 = *VAR_1++;

 while (VAR_3 != '\0') {
  int VAR_4 = *VAR_1++;

  if (FUNC_2(VAR_3)) {
   (void)((void*)0);
  } else if (FUNC_2(VAR_2)) {
   if (!FUNC_0(VAR_3))
    return (0);
  } else if (FUNC_2(VAR_4) || VAR_4 == '\0') {
   if (!FUNC_0(VAR_3))
    return (0);
  } else {
   if (!FUNC_1(VAR_3))
    return (0);
  }
  VAR_2 = VAR_3, VAR_3 = VAR_4;
 }
 return (1);
}
