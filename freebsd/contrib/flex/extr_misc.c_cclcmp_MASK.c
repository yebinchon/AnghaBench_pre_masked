
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;



int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  if (!*(const Char *) VAR_0)
 return 1;
  else
 if (!*(const Char *) VAR_1)
   return - 1;
 else
   return *(const Char *) VAR_0 - *(const Char *) VAR_1;
}
