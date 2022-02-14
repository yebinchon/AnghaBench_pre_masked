
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 const char *VAR_3 = VAR_1;
 size_t VAR_4 = VAR_2;

 if (VAR_4) {

  while (--VAR_4 != 0) {
   if ((*VAR_0++ = *VAR_3++) == '\0')
    break;
  }
 }

 if (VAR_4 == 0) {

  if (VAR_2 != 0)
   *VAR_0 = '\0';
  while (*VAR_3++)
   ;
 }

 return VAR_3 - VAR_1 - 1;
}
