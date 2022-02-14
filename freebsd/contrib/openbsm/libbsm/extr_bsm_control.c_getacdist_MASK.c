
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char**) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(void)
{
 char *VAR_2;
 int VAR_3;




 FUNC_3();
 if (FUNC_0(VAR_0, &VAR_2) < 0) {



  return (-2);
 }
 if (VAR_2 == ((void*)0)) {



  return (0);
 }
 if (FUNC_4(VAR_2, "on") == 0 || FUNC_4(VAR_2, "yes") == 0)
  VAR_3 = 1;
 else
  VAR_3 = 0;



 return (VAR_3);
}
