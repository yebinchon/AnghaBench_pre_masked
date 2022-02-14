
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int,int *) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_4)
{
 char *VAR_5;

 if (FUNC_1(VAR_1, 1024, VAR_4) == ((void*)0))
  return 0;
 for (VAR_5 = VAR_1 ; *VAR_5 != '#' && *VAR_5 != '\n' && *VAR_5 != '\0' ; VAR_5++);
 while (VAR_5 > VAR_1 && (VAR_5[-1] == ' ' || VAR_5[-1] == '\t'))
  VAR_5--;
 *VAR_5 = '\0';
 VAR_2 = VAR_1;
 VAR_3++;
 if (VAR_5 - VAR_1 > VAR_0)
  FUNC_0("Line too long");
 return 1;
}
