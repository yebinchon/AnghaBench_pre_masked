
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char**) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int*) ;

int
FUNC_5(int *VAR_6)
{
 char *VAR_7;
 int VAR_8;




 FUNC_3();
 if (FUNC_0(VAR_2, &VAR_7) < 0) {



  return (-2);
 }
 if (VAR_7 == ((void*)0)) {



  *VAR_6 = VAR_3;
  return (0);
 }


 while (*VAR_7 == ' ' || *VAR_7 == '\t')
  VAR_7++;

 VAR_8 = FUNC_4(VAR_7, "%d", (int *)VAR_6);

 if (VAR_8 != 1) {
  VAR_4 = VAR_1;



  return (-1);
 }


 if (*VAR_6 < 0 || *VAR_6 > VAR_0) {



  VAR_6 = 0L;
  VAR_4 = VAR_1;
  return (-1);
 }



 return (0);
}
