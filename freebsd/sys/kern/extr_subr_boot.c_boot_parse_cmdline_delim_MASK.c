
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char**,char const*) ;

int
FUNC_2(char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 VAR_3 = 0;
 while ((VAR_2 = FUNC_1(&VAR_0, VAR_1)) != ((void*)0)) {
  if (*VAR_2 == '\0')
   continue;
  VAR_3 |= FUNC_0(VAR_2);
 }
 return (VAR_3);
}
