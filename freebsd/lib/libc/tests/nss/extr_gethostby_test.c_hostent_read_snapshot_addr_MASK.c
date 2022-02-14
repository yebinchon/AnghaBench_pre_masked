
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,char*) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;

 VAR_4 = VAR_0;
 while ( (VAR_3 = FUNC_0(&VAR_4, ".")) != ((void*)0)) {
  if (VAR_2 == 0)
   return (-1);

  *VAR_1 = (unsigned char)FUNC_1(VAR_3, &VAR_5, 10);
  ++VAR_1;
  if (*VAR_5 != '\0')
   return (-1);

  --VAR_2;
 }
 if (VAR_2 != 0)
  return (-1);
 else
  return (0);
}
