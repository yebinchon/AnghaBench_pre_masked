
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1)
{
 FILE *VAR_2;
 char VAR_3[VAR_0], *VAR_4;

 VAR_2 = FUNC_2(VAR_1, "r");
 if (VAR_2 == ((void*)0))
  return;

 while (FUNC_1(VAR_3, VAR_0, VAR_2)) {
  for (VAR_4 = VAR_3; *VAR_4; VAR_4++) {
   if (*VAR_4 == '\r' || *VAR_4 == '\n') {
    *VAR_4 = '\0';
    break;
   }
  }
  FUNC_3(VAR_3);
 }

 FUNC_0(VAR_2);
}
