
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct direct {int d_ino; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct direct* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char**,char*) ;

struct direct *
FUNC_3(const char *VAR_2)
{
 ino_t VAR_3;
 struct direct *VAR_4;
 char *VAR_5, *VAR_6, VAR_7[VAR_0];

 FUNC_1(VAR_7, VAR_2);
 VAR_5 = VAR_7;
 VAR_3 = VAR_1;
 while (*VAR_5 == '/')
  VAR_5++;
 VAR_4 = ((void*)0);
 while ((VAR_6 = FUNC_2(&VAR_5, "/")) != ((void*)0) && *VAR_6 != '\0') {
  if ((VAR_4 = FUNC_0(VAR_3, VAR_6)) == ((void*)0))
   return (((void*)0));
  VAR_3 = VAR_4->d_ino;
 }
 return (VAR_4);
}
