
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, const char *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 if (VAR_0 == 0)
  return;
 while ((VAR_2 = *VAR_1++) != 0) {
  if (VAR_0 & (1 << (VAR_2-1))) {
   if (VAR_3 == 0)
    VAR_2 = '<';
   else
    VAR_2 = ',';
   FUNC_0(VAR_2);
   VAR_3 = 1;
   for (; (VAR_2 = *VAR_1) > 32; VAR_1++)
    FUNC_0(VAR_2);
  } else
   while (*VAR_1 > 32)
    VAR_1++;
 }
 if (VAR_3)
  FUNC_0('>');
}
