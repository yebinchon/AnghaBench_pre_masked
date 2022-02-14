
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, char *VAR_1)
{
 char VAR_2[32];
 int VAR_3 = VAR_0 < 0;
 char *VAR_4 = VAR_2 + 31;

 VAR_2[31] = '\0';

 do {
  *--VAR_4 = VAR_0 % 10 + '0';
 } while ((VAR_0 /= 10) != 0);

 if (VAR_3)
  *--VAR_4 = '-';

 FUNC_0(VAR_1, VAR_4, VAR_2 + 32 - VAR_4);
}
