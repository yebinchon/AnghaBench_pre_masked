
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,char const*) ;

__attribute__((used)) static const char *
FUNC_5(const char *VAR_0)
{
 static char VAR_1[1024];
 FILE *VAR_2;
 char *VAR_3, *VAR_4;
 VAR_2 = FUNC_3("/dev/tty", "r+");
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 FUNC_4(VAR_2, "%s (Enter/./(new name))? ", VAR_0);
 FUNC_1(VAR_2);


 VAR_3 = FUNC_2(VAR_1, sizeof(VAR_1), VAR_2);
 FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))

  return (((void*)0));

 while (*VAR_3 == ' ' || *VAR_3 == '\t')
  ++VAR_3;
 if (*VAR_3 == '\n' || *VAR_3 == '\0')

  return (((void*)0));
 if (*VAR_3 == '.' && VAR_3[1] == '\n')

  return (VAR_0);
 VAR_4 = VAR_3;

 while (*VAR_3 != '\0' && *VAR_3 != '\n')
  ++VAR_3;

 *VAR_3 = '\0';
 return (VAR_4);
}
