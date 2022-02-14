
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 int * FUNC_1 (char const*,char) ;

int
FUNC_2(const char *VAR_3)
{
 char **VAR_4;
 int VAR_5;

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0' || FUNC_1(VAR_3, '=') != ((void*)0)) {
  VAR_2 = VAR_0;
  return -1;
 }

 while (FUNC_0(VAR_3, &VAR_5)) {
  for (VAR_4 = &VAR_1[VAR_5];; ++VAR_4)
   if (!(*VAR_4 = *(VAR_4 + 1)))
    break;
 }
 return 0;
}
