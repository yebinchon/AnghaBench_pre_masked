
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char**) ;

__attribute__((used)) static void FUNC_1(char *VAR_3, char *VAR_4)
{
 char *VAR_5[6];
 char *VAR_6;

 for (VAR_6 = VAR_4; *VAR_6; VAR_6++)
  if (*VAR_6 == '\n')
   *VAR_6 = '\0';

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_0;
 VAR_5[2] = VAR_1;
 VAR_5[3] = VAR_4;
 VAR_5[4] = VAR_3;
 VAR_5[5] = ((void*)0);
 FUNC_0(VAR_5);
}
