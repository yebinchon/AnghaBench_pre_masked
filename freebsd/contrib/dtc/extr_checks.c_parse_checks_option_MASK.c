
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct check {int name; } ;


 int FUNC_0 (struct check**) ;
 struct check** VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct check*,int,int) ;
 int FUNC_3 (struct check*,int,int) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

void FUNC_6(bool VAR_1, bool VAR_2, const char *VAR_3)
{
 int VAR_4;
 const char *VAR_5 = VAR_3;
 bool VAR_6 = 1;

 if ((FUNC_5(VAR_3, "no-", 3) == 0)
     || (FUNC_5(VAR_3, "no_", 3) == 0)) {
  VAR_5 = VAR_3 + 3;
  VAR_6 = 0;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  struct check *VAR_7 = VAR_0[VAR_4];

  if (FUNC_4(VAR_7->name, VAR_5)) {
   if (VAR_6)
    FUNC_3(VAR_7, VAR_1, VAR_2);
   else
    FUNC_2(VAR_7, VAR_1, VAR_2);
   return;
  }
 }

 FUNC_1("Unrecognized check name \"%s\"\n", VAR_5);
}
