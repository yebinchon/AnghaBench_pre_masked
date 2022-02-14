
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char**,char*) ;

int
FUNC_5(const char *VAR_3)
{
 char VAR_4[VAR_0];
 char *VAR_5, *VAR_6;
 int VAR_7;

 if ((VAR_5 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_3(VAR_4, VAR_5, sizeof VAR_4);
 } else {
  if ((VAR_7 = FUNC_1(VAR_2, VAR_4, sizeof(VAR_4) - 1)) < 0)
   return 0;
  VAR_4[VAR_7] = '\0';
 }
 if (VAR_4[0] == '\0')
  return 1;

 VAR_6 = VAR_4;
 while ((VAR_5 = FUNC_4(&VAR_6, ",")) != ((void*)0)) {
  if (FUNC_2(VAR_5, VAR_3) == 0)
   return 1;
 }
 return 0;
}
