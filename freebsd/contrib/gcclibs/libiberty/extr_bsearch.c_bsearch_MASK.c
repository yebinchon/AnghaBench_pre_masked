
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,void const*) ;

void *
FUNC_1 (register const void *VAR_0, const void *VAR_1,
         size_t VAR_2, register size_t VAR_3,
         register int (*VAR_4)(const void *, const void *))
{
 register const char *VAR_5 = (const char *) VAR_1;
 register int VAR_6, VAR_7;
 register const void *VAR_8;

 for (VAR_6 = VAR_2; VAR_6 != 0; VAR_6 >>= 1) {
  VAR_8 = VAR_5 + (VAR_6 >> 1) * VAR_3;
  VAR_7 = (*VAR_4)(VAR_0, VAR_8);
  if (VAR_7 == 0)
   return (void *)VAR_8;
  if (VAR_7 > 0) {
   VAR_5 = (const char *)VAR_8 + VAR_3;
   VAR_6--;
  }
 }
 return (((void*)0));
}
