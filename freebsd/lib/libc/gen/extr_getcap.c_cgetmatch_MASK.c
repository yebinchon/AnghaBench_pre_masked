
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;

 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return -1;




 VAR_3 = VAR_0;
 for (;;) {



  VAR_2 = VAR_1;
  for (;;)
   if (*VAR_2 == '\0')
    if (*VAR_3 == '|' || *VAR_3 == ':' || *VAR_3 == '\0')
     return (0);
    else
     break;
   else
    if (*VAR_3++ != *VAR_2++)
     break;




  VAR_3--;
  for (;;)
   if (*VAR_3 == '\0' || *VAR_3 == ':')
    return (-1);
   else
    if (*VAR_3++ == '|')
     break;
 }
}
