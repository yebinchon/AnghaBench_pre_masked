
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char **VAR_1, char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2) + 1;
 VAR_5 = (VAR_2[0] != '/') ? 1 : 0;
 VAR_3 = FUNC_0(VAR_4 + VAR_5);
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_3[0] = '/';
 FUNC_1(VAR_3 + VAR_5, VAR_2);

 *VAR_1 = VAR_3;
 return (0);
}
