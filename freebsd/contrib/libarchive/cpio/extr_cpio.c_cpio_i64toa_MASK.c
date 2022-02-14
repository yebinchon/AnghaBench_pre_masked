
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int buff ;



const char *
FUNC_0(int64_t VAR_0)
{



 static char VAR_1[22];
 int64_t VAR_2 = VAR_0 < 0 ? -VAR_0 : VAR_0;
 char *VAR_3 = VAR_1 + sizeof(VAR_1);

 *--VAR_3 = '\0';
 do {
  *--VAR_3 = '0' + (int)(VAR_2 % 10);
  VAR_2 /= 10;
 } while (VAR_2 > 0);
 if (VAR_0 < 0)
  *--VAR_3 = '-';
 return VAR_3;
}
