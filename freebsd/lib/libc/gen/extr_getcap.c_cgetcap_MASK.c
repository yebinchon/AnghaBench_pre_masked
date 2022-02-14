
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, const char *VAR_1, int VAR_2)
{
 char *VAR_3;
 const char *VAR_4;

 VAR_3 = VAR_0;
 for (;;) {





  for (;;)
   if (*VAR_3 == '\0')
    return (((void*)0));
   else
    if (*VAR_3++ == ':')
     break;




  for (VAR_4 = VAR_1; *VAR_4 == *VAR_3 && *VAR_3 != '\0'; VAR_4++, VAR_3++)
   continue;
  if (*VAR_4 != '\0')
   continue;
  if (*VAR_3 == '@')
   return (((void*)0));
  if (VAR_2 == ':') {
   if (*VAR_3 != '\0' && *VAR_3 != ':')
    continue;
   return(VAR_3);
  }
  if (*VAR_3 != VAR_2)
   continue;
  VAR_3++;
  return (*VAR_3 == '@' ? ((void*)0) : VAR_3);
 }

}
