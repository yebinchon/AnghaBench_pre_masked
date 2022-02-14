
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int str ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int *) ;

char *
FUNC_4(void)
{
 static char VAR_0[50];
 size_t VAR_1;
 time_t VAR_2;

 VAR_2 = FUNC_3(((void*)0));
 VAR_1 = FUNC_2(VAR_0, sizeof(VAR_0), "%a, %d %b %Y %T %z",
         FUNC_0(&VAR_2));
 if (VAR_1 == 0)
  FUNC_1(VAR_0, "(date fail)");
 return (VAR_0);
}
