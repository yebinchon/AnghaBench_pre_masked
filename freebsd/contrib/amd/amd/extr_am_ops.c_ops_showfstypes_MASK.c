
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int FUNC_0 (char*,size_t,int*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;

void
FUNC_3(char *VAR_16, size_t VAR_17)
{
  int VAR_18 = 0;

  VAR_16[0] = '\0';
  if (VAR_16[FUNC_1(VAR_16)-1] == '\n')
    VAR_16[FUNC_1(VAR_16) - 4] = '\0';
  else
    VAR_16[FUNC_1(VAR_16) - 2] = '\0';
  FUNC_2(VAR_16, ".\n", VAR_17);
}
