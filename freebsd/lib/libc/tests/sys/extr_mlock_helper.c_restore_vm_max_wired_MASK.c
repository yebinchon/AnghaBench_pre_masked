
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,scalar_t__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__*) ;

void
FUNC_6(void)
{
 FILE *VAR_1;
 u_long VAR_2;

 VAR_1 = FUNC_1(VAR_0, "r");
 if (VAR_1 == ((void*)0)) {
  FUNC_3("fopen failed\n");
  return;
 }

 if (FUNC_2(VAR_1, "%lu", &VAR_2) != 1) {
  FUNC_3("fscanf failed\n");
  FUNC_0(VAR_1);
  return;
 }

 FUNC_0(VAR_1);
 FUNC_4("old value in %s: %lu\n", VAR_0, VAR_2);

 if (VAR_2 == 0)
  return;

 FUNC_5(((void*)0), &VAR_2);
}
