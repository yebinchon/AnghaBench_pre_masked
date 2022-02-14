
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(const char* VAR_2)
{
 FILE* VAR_3 = FUNC_2(VAR_2, "r");
 char VAR_4[8192];
 if(!VAR_3) {
  if(VAR_1>=2) FUNC_3("%s: %s\n", VAR_2, FUNC_4(VAR_0));
  return 0;
 }
 while(FUNC_1(VAR_4, (int)sizeof(VAR_4), VAR_3)) {
  if(VAR_4[0]==';') continue;
  if(FUNC_5(VAR_4, "[ ADDPEND ]")) {
   FUNC_0(VAR_3);
   if(VAR_1) FUNC_3("RFC5011-state has ADDPEND keys\n");
   return 1;
  }
 }
 FUNC_0(VAR_3);
 return 0;
}
