
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

size_t
FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_0);

 while (VAR_2 > 1) {
  *VAR_0++ = *VAR_1++;
  VAR_2--;
 }
 if (VAR_2 > 0)
  *VAR_0 = '\0';
 return (VAR_3);
}
