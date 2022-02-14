
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time_t ;
typedef int line ;
typedef int int32_t ;
typedef int FILE ;


 char* FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int32_t
FUNC_8(const char* VAR_2)
{
 FILE* VAR_3 = FUNC_3(VAR_2, "r");
 char VAR_4[1024];
 if(!VAR_3) {
  if(VAR_1) FUNC_4("%s: %s\n", VAR_2, FUNC_5(VAR_0));
  return 0;
 }
 while(FUNC_2(VAR_4, (int)sizeof(VAR_4), VAR_3)) {
  if(FUNC_6(VAR_4, ";;last_success: ", 16) == 0) {
   char* VAR_5;
   time_t VAR_6 = (unsigned int)FUNC_7(VAR_4+16, &VAR_5, 10);
   FUNC_1(VAR_3);
   if(VAR_4+16 == VAR_5) {
    if(VAR_1) FUNC_4("failed to parse "
     "last_success probe time\n");
    return 0;
   }
   if(VAR_1) FUNC_4("last successful probe: %s", FUNC_0(&VAR_6));
   return (int32_t)VAR_6;
  }
 }
 FUNC_1(VAR_3);
 if(VAR_1) FUNC_4("no last_success probe time in anchor file\n");
 return 0;
}
