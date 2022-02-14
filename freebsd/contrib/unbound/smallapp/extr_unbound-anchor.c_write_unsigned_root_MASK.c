
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int HANDLE ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char const*,...) ;
 char* FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_13(const char* VAR_2)
{
 FILE* VAR_3;
 time_t VAR_4 = FUNC_12(((void*)0));
 VAR_3 = FUNC_7(VAR_2, "w");
 if(!VAR_3) {
  if(VAR_1) FUNC_10("%s: %s\n", VAR_2, FUNC_11(VAR_0));
  return;
 }
 if(FUNC_8(VAR_3, "; autotrust trust anchor file\n"
  ";;REVOKED\n"
  ";;id: . 1\n"
  "; This file was written by unbound-anchor on %s"
  "; It indicates that the root does not use DNSSEC\n"
  "; to restart DNSSEC overwrite this file with a\n"
  "; valid trustanchor or (empty-it and run unbound-anchor)\n"
  , FUNC_3(&VAR_4)) < 0) {
  if(VAR_1) FUNC_10("failed to write 'unsigned' to %s\n",
   VAR_2);
  if(VAR_1 && VAR_0 != 0) FUNC_10("%s\n", FUNC_11(VAR_0));
 }
 FUNC_5(VAR_3);



 FUNC_0((HANDLE)FUNC_2(FUNC_1(VAR_3)));

 FUNC_4(VAR_3);
}
