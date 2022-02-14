
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int,int,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int*) ;

void
FUNC_9(int VAR_0, char **VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 char *VAR_5;

 if (FUNC_0(VAR_0, 3) == 1)
  return;

 if (FUNC_8(VAR_1[0], "%d", &VAR_2) == 0) {
  FUNC_4(1);
  FUNC_5("BAD ARGUMENT");
  return;
 }

 if (FUNC_8(VAR_1[1], "%d", &VAR_3) == 0) {
  FUNC_4(1);
  FUNC_5("BAD ARGUMENT");
  return;
 }

 if (FUNC_8(VAR_1[2], "%d", &VAR_4) == 0) {
  FUNC_4(1);
  FUNC_5("BAD ARGUMENT");
  return;
 }

 if ((VAR_5 = FUNC_2(VAR_4 + 1)) == ((void*)0)) {
  FUNC_4(1);
  FUNC_5("MALLOC_FAILED");
  return;
 }


 FUNC_4(2);
 FUNC_6(FUNC_3(VAR_2, VAR_3, VAR_5, VAR_4));
 FUNC_7(VAR_5);
 FUNC_1(VAR_5);
}
