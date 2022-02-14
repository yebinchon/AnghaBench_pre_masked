
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char FUNC_0 () ;

void
FUNC_1 (char *VAR_1)
{
  char *VAR_2 = VAR_1;

  VAR_0++;
  while (1)
    {
      if (FUNC_0 () == *VAR_2)
 {
   VAR_2++;
   if (*VAR_2 == '\0')
     {
       VAR_0--;
       return;
     }
 }
      else
 VAR_2 = VAR_1;
    }
}
