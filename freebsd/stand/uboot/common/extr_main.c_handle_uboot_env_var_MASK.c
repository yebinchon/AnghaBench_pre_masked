
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldvar ;
typedef enum ubenv_action { ____Placeholder_ubenv_action } ubenv_action ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(enum ubenv_action VAR_2, const char * VAR_3)
{
 char VAR_4[128];
 const char *VAR_5;
 char *VAR_6;
 int VAR_7;






 if (VAR_2 == VAR_0) {
  VAR_7 = FUNC_4(VAR_3, "=");
  if (VAR_7 == 0) {
   FUNC_1("name cannot start with '=': '%s'\n", VAR_3);
   return;
  }
  if (VAR_3[VAR_7] == 0) {
   FUNC_3(VAR_4, "uboot.");
   FUNC_5(VAR_4, VAR_3, sizeof(VAR_4) - 7);
  } else {
   VAR_7 = FUNC_0(VAR_7, sizeof(VAR_4) - 1);
   FUNC_7(VAR_4, VAR_3, VAR_7);
   VAR_4[VAR_7] = 0;
   VAR_3 = &VAR_3[VAR_7 + 1];
  }
 }





 if (FUNC_6(VAR_3, "uboot.", 6) == 0) {
  VAR_3 = &VAR_3[6];
 }


 if (VAR_3[0] == 0) {
  FUNC_1("empty variable name\n");
  return;
 }

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_2 == VAR_1) {
  if (VAR_5 == ((void*)0))
   FUNC_1("uboot.%s is not set\n", VAR_3);
  else
   FUNC_1("uboot.%s=%s\n", VAR_3, VAR_5);
 } else if (VAR_2 == VAR_0) {
  if (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_4, VAR_5, 1);
  }
 }
}
