
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpname ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(char *VAR_3, int VAR_4)
{
 char VAR_5[VAR_1];
 int VAR_6;

 if (VAR_4 < 1)
  return (VAR_0);
 VAR_3[0] = '\0';

 if (FUNC_0(VAR_5, sizeof(VAR_5)) < 0)
  return (VAR_2);
 VAR_6 = FUNC_2(VAR_5) + 1;
 if (VAR_6 > VAR_4)
  return (VAR_0);
 FUNC_1(VAR_3, VAR_5, VAR_6);
 return (0);
}
