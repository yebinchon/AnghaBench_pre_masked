
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

int
FUNC_4(int VAR_0, char *VAR_1[])
{
 char VAR_2[10];
 char *VAR_3 = FUNC_2(VAR_2, VAR_1[1]);

 if ((size_t)(VAR_3 - VAR_2) != FUNC_3(VAR_1[1]))
  FUNC_0();

 (void)FUNC_1("%s\n", VAR_2);
 return 0;
}
