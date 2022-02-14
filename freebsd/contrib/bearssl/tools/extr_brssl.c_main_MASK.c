
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int,char**) ;
 scalar_t__ FUNC_3 (int,char**) ;
 scalar_t__ FUNC_4 (int,char**) ;
 scalar_t__ FUNC_5 (int,char**) ;
 scalar_t__ FUNC_6 (int,char**) ;
 scalar_t__ FUNC_7 (int,char**) ;
 int FUNC_8 (int,char**) ;
 scalar_t__ FUNC_9 (int,char**) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_2, char *VAR_3[])
{
 char *VAR_4;

 if (VAR_2 < 2) {
  FUNC_12();
  return VAR_0;
 }
 VAR_4 = VAR_3[1];
 if (FUNC_10(VAR_4, "client")) {
  if (FUNC_3(VAR_2 - 2, VAR_3 + 2) < 0) {
   return VAR_0;
  }
 } else if (FUNC_10(VAR_4, "server")) {
  if (FUNC_5(VAR_2 - 2, VAR_3 + 2) < 0) {
   return VAR_0;
  }
 } else if (FUNC_10(VAR_4, "verify")) {
  if (FUNC_9(VAR_2 - 2, VAR_3 + 2) < 0) {
   return VAR_0;
  }
 } else if (FUNC_10(VAR_4, "skey")) {
  if (FUNC_6(VAR_2 - 2, VAR_3 + 2) < 0) {
   return VAR_0;
  }
 } else if (FUNC_10(VAR_4, "ta")) {
  if (FUNC_7(VAR_2 - 2, VAR_3 + 2) < 0) {
   return VAR_0;
  }
 } else if (FUNC_10(VAR_4, "chain")) {
  if (FUNC_2(VAR_2 - 2, VAR_3 + 2) < 0) {
   return VAR_0;
  }
 } else if (FUNC_10(VAR_4, "twrch")) {
  int VAR_5;

  VAR_5 = FUNC_8(VAR_2 - 2, VAR_3 + 2);
  if (VAR_5 < 0) {
   return VAR_0;
  } else {
   return VAR_5;
  }
 } else if (FUNC_10(VAR_4, "impl")) {
  if (FUNC_4(VAR_2 - 2, VAR_3 + 2) < 0) {
   return VAR_0;
  }
 } else {
  FUNC_11(VAR_1, "unknown command: '%s'\n", VAR_4);
  FUNC_12();
  return VAR_0;
 }
 return 0;
}
