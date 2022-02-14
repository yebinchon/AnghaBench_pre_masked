
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,int,char const*,int,int *) ;
 char* VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 int VAR_6;


 if (FUNC_1(VAR_2, '/'))
  return (FUNC_2(VAR_2, VAR_0));


 VAR_6 = FUNC_3(VAR_2);
 for (VAR_4 = VAR_1; *VAR_4; VAR_4++) {
  VAR_3 = VAR_4;

  for (; *VAR_4 != 0 && *VAR_4 != ';'; VAR_4++);
  VAR_5 = FUNC_0(VAR_3, VAR_4 - VAR_3, VAR_2, VAR_6, ((void*)0));
  if (VAR_5 != ((void*)0))
   return (VAR_5);
 }
 return (((void*)0));
}
