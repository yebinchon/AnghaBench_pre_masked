
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 char* FUNC_1 (int ,char) ;

void
FUNC_2(char *VAR_2)
{
 char *VAR_3;

 if (VAR_1)
     return;

 if ((VAR_3 = FUNC_1(VAR_0,'\n')))
  *VAR_3 = '\0';
 FUNC_0(500, "'%s': command not understood.", VAR_0);
 VAR_1 = 1;
}
