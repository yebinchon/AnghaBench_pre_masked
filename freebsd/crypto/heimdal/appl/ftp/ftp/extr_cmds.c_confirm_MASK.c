
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(char *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_0];

 if (!VAR_1)
  return (1);
 FUNC_2("%s %s? ", VAR_4, VAR_5);
 FUNC_0(VAR_3);
 if (FUNC_1(VAR_6, sizeof VAR_6, VAR_2) == ((void*)0))
  return (0);
 return (*VAR_6 == 'y' || *VAR_6 == 'Y');
}
