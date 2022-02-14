
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uschar ;



int FUNC_0(int VAR_0, const char *VAR_1)
{
 uschar *VAR_2 = (uschar *) VAR_1;

 while (*VAR_2)
  if (VAR_0 == *VAR_2++)
   return(1);
 return(0);
}
