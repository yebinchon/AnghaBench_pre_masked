
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(char *VAR_0, char *VAR_1[], int VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_0;
 char VAR_5;
 char VAR_6 = VAR_3[0];
 char VAR_7;
 int VAR_8;
 char **VAR_9 = VAR_1;
 char *VAR_10;
 int VAR_11;


 if (VAR_6 == '\0') {
  while ((VAR_5 = *VAR_4++) == ' ' || VAR_5 == '\t')
   continue;
  VAR_4--;
  VAR_11 = 1;
  VAR_3 = " \t";
  VAR_6 = ' ';
 } else
  VAR_11 = 0;
 VAR_7 = VAR_3[1];


 if (*VAR_4 == '\0')
  return(0);


 if (VAR_7 == '\0') {
  VAR_8 = VAR_2;
  for (;;) {
   *VAR_9++ = VAR_4;
   VAR_8--;
   if (VAR_8 == 0)
    break;
   while ((VAR_5 = *VAR_4++) != VAR_6)
    if (VAR_5 == '\0')
     return(VAR_2 - VAR_8);
   *(VAR_4-1) = '\0';
  }

  VAR_8 = VAR_2;
  for (;;) {
   while ((VAR_5 = *VAR_4++) != VAR_6)
    if (VAR_5 == '\0')
     return(VAR_8);
   VAR_8++;
  }

 }


 if (VAR_3[2] == '\0') {
  VAR_8 = VAR_2;
  for (;;) {
   *VAR_9++ = VAR_4;
   VAR_8--;
   while ((VAR_5 = *VAR_4++) != VAR_6 && VAR_5 != VAR_7)
    if (VAR_5 == '\0') {
     if (VAR_11 && **(VAR_9-1) == '\0')
      VAR_8++;
     return(VAR_2 - VAR_8);
    }
   if (VAR_8 == 0)
    break;
   *(VAR_4-1) = '\0';
   while ((VAR_5 = *VAR_4++) == VAR_6 || VAR_5 == VAR_7)
    continue;
   VAR_4--;
  }

  VAR_8 = VAR_2;
  while (VAR_5 != '\0') {
   while ((VAR_5 = *VAR_4++) == VAR_6 || VAR_5 == VAR_7)
    continue;
   VAR_4--;
   VAR_8++;
   while ((VAR_5 = *VAR_4++) != '\0' && VAR_5 != VAR_6 && VAR_5 != VAR_7)
    continue;
  }

  if (VAR_11) {
   VAR_4--;
   while ((VAR_5 = *--VAR_4) == VAR_6 || VAR_5 == VAR_7)
    continue;
   VAR_4++;
   if (*VAR_4 != '\0') {
    if (VAR_8 == VAR_2+1)
     *VAR_4 = '\0';
    VAR_8--;
   }
  }
  return(VAR_8);
 }


 VAR_8 = 0;
 for (;;) {
  if (VAR_8 < VAR_2)
   *VAR_9++ = VAR_4;
  VAR_8++;
  for (;;) {
   VAR_5 = *VAR_4++;
   if (VAR_5 == '\0')
    return(VAR_8);
   VAR_10 = VAR_3;
   while ((VAR_6 = *VAR_10++) != '\0' && VAR_6 != VAR_5)
    continue;
   if (VAR_6 != '\0')
    break;
  }
  if (VAR_8 < VAR_2)
   *(VAR_4-1) = '\0';
  for (;;) {
   VAR_5 = *VAR_4++;
   VAR_10 = VAR_3;
   while ((VAR_6 = *VAR_10++) != '\0' && VAR_6 != VAR_5)
    continue;
   if (VAR_6 == '\0')
    break;
  }
  VAR_4--;
 }


}
