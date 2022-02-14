
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0(void *VAR_0, int VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3 = VAR_0;

 while (VAR_2) {
  if (*VAR_3 == VAR_1)
   return (void *)VAR_3;
  VAR_3++;
  VAR_2--;
 }
   return (void *)VAR_3;
}
