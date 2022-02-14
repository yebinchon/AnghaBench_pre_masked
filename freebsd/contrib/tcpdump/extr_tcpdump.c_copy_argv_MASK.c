
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static char *
FUNC_3(register char **VAR_0)
{
 register char **VAR_1;
 register u_int VAR_2 = 0;
 char *VAR_3;
 char *VAR_4, *VAR_5;

 VAR_1 = VAR_0;
 if (*VAR_1 == ((void*)0))
  return 0;

 while (*VAR_1)
  VAR_2 += FUNC_2(*VAR_1++) + 1;

 VAR_3 = (char *)FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_0("copy_argv: malloc");

 VAR_1 = VAR_0;
 VAR_5 = VAR_3;
 while ((VAR_4 = *VAR_1++) != ((void*)0)) {
  while ((*VAR_5++ = *VAR_4++) != '\0')
   ;
  VAR_5[-1] = ' ';
 }
 VAR_5[-1] = '\0';

 return VAR_3;
}
