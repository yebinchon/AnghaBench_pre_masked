
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(register const char *VAR_1, register int VAR_2,
         int *const VAR_3)
{
 char VAR_4;
 int VAR_5 = *VAR_3;

 if (VAR_2 > VAR_0) {
  VAR_2 = VAR_0;
 }
 do {
  VAR_4 = *VAR_1++;
  if ((VAR_4 & 1) == 0)
   VAR_5++;
  if ((VAR_4 & 2) == 0)
   VAR_5++;
  if ((VAR_4 & 4) == 0)
   VAR_5++;
  if ((VAR_4 & 8) == 0)
   VAR_5++;
  if ((VAR_4 & 16) == 0)
   VAR_5++;
  if ((VAR_4 & 32) == 0)
   VAR_5++;
  if ((VAR_4 & 64) == 0)
   VAR_5++;
  if ((VAR_4 & 128) == 0)
   VAR_5++;
  VAR_2--;
 } while (VAR_2 != 0);
 *VAR_3 = VAR_5;
}
