
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1) - VAR_2;
 int VAR_4 = (VAR_0 ? FUNC_0(VAR_0) : 0) + VAR_3 + 1;
 char *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_4);
 if (VAR_0)
  FUNC_1(VAR_5 + FUNC_0(VAR_5), VAR_1, VAR_3);
 else
  FUNC_1(VAR_5, VAR_1, VAR_3);

 VAR_5[VAR_4 - 1] = '\0';

 return (VAR_5);
}
