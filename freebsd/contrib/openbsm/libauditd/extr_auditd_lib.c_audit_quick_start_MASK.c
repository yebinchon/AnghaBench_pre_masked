
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int TS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char**,int ,int *) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int ,char*,int) ;
 int FUNC_14 () ;

int
FUNC_15(void)
{
 int VAR_5;
 char *VAR_6 = ((void*)0);
 time_t VAR_7;
 char VAR_8[VAR_4 + 1];
 int VAR_9 = 0;




 if (FUNC_2() != 0)
  return (-1);




 VAR_5 = FUNC_3(((void*)0), ((void*)0));
 if (VAR_5 != VAR_1 && VAR_5 != VAR_2)
  return (-1);




 (void) FUNC_4();




 if (FUNC_13(VAR_7, VAR_8, sizeof(VAR_8)) != 0)
  return (-1);
 VAR_5 = FUNC_11(VAR_8, &VAR_6, FUNC_14(), ((void*)0));
 if (VAR_5 != VAR_1 && VAR_5 != VAR_0) {
  VAR_9 = -1;
  goto out;
 }




 if (FUNC_1(VAR_6) != 0) {
  VAR_9 = -1;
  goto out;
 }




 if (FUNC_0(VAR_3, ((void*)0)) != 0) {
  VAR_9 = -1;
  goto out;
 }




 (void) FUNC_5();
 (void) FUNC_9();
 (void) FUNC_10();
 (void) FUNC_6();
 (void) FUNC_8();
 (void) FUNC_7();

out:
 if (VAR_6 != ((void*)0))
  FUNC_12(VAR_6);

 return (VAR_9);
}
