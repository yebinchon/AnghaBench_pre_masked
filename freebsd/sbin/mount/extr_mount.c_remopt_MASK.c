
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char**,char*) ;

void
FUNC_2(char *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;

 if (VAR_0 == ((void*)0) || *VAR_0 == '\0' || VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return;

 VAR_4 = VAR_0;

 for (VAR_3 = VAR_0; (VAR_2 = FUNC_1(&VAR_3, ",")) != ((void*)0);) {
  if (FUNC_0(VAR_1, VAR_2) != 0) {
   if (*VAR_4 == ',' && *VAR_2 != '\0')
    VAR_4++;
   while ((*VAR_4++ = *VAR_2++) != '\0')
       ;
   *--VAR_4 = ',';
  }
 }
 *VAR_4 = '\0';
}
