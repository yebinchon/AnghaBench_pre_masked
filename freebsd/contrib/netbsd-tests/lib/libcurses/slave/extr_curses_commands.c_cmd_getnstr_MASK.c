
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int*) ;

void
FUNC_9(int VAR_0, char **VAR_1)
{
 int VAR_2;
 char *VAR_3;

 if (FUNC_0(VAR_0, 1) == 1)
  return;

 if (FUNC_8(VAR_1[0], "%d", &VAR_2) == 0) {
  FUNC_4(1);
  FUNC_5("BAD ARGUMENT");
  return;
 }

 if ((VAR_3 = FUNC_3(VAR_2 + 1)) == ((void*)0)) {
  FUNC_4(1);
  FUNC_5("MALLOC_FAILED");
  return;
 }


 FUNC_4(2);
 FUNC_6(FUNC_2(VAR_3, VAR_2));
 FUNC_7(VAR_3);
 FUNC_1(VAR_3);
}
