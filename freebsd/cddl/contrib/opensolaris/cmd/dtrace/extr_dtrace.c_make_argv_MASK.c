
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static char **
FUNC_3(char *VAR_0)
{
 const char *VAR_1 = "\f\n\r\t\v ";
 char **VAR_2 = FUNC_0(sizeof (char *) * (FUNC_1(VAR_0) / 2 + 1));
 int VAR_3 = 0;
 char *VAR_4 = VAR_0;

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 for (VAR_4 = FUNC_2(VAR_0, VAR_1); VAR_4 != ((void*)0); VAR_4 = FUNC_2(((void*)0), VAR_1))
  VAR_2[VAR_3++] = VAR_4;

 if (VAR_3 == 0)
  VAR_2[VAR_3++] = VAR_0;

 VAR_2[VAR_3] = ((void*)0);
 return (VAR_2);
}
