
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_5 (void)
{
 int VAR_3;

 FUNC_4 ("m4_ifdef( [[M4_YY_USE_LINENO]],[[");
 FUNC_4 ("/* Table of booleans, true if rule could match eol. */");
 FUNC_3 (FUNC_0 (), "yy_rule_can_match_eol",
       VAR_1 + 1);

 if (VAR_0) {
  for (VAR_3 = 1; VAR_3 <= VAR_1; VAR_3++) {
   FUNC_2 ("%d, ", VAR_2[VAR_3] ? 1 : 0);

   if ((VAR_3 % 20) == 19)
    FUNC_1 ("\n    ");
  }
  FUNC_1 ("    };\n");
 }
 FUNC_4 ("]])");
}
