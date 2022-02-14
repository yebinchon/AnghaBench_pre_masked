
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytype {int type; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct keytype* VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char**,char*) ;

int
FUNC_6(const char *VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 const struct keytype *VAR_7;
 int VAR_8;

 if (VAR_2 == ((void*)0) || FUNC_3(VAR_2, "") == 0)
  return 0;
 if ((VAR_4 = VAR_5 = FUNC_4(VAR_2)) == ((void*)0))
  return 0;
 for ((VAR_6 = FUNC_5(&VAR_5, ",")); VAR_6 && *VAR_6 != '\0';
     (VAR_6 = FUNC_5(&VAR_5, ","))) {
  VAR_8 = FUNC_2(VAR_6);
  if (VAR_8 == VAR_0) {
   if (VAR_3) {





    for (VAR_7 = VAR_1; VAR_7->type != -1; VAR_7++) {
     if (FUNC_1(VAR_7->name,
         VAR_6, 0) != 0)
      break;
    }
    if (VAR_7->type != -1)
     continue;
   }
   FUNC_0(VAR_4);
   return 0;
  }
 }
 FUNC_0(VAR_4);
 return 1;
}
