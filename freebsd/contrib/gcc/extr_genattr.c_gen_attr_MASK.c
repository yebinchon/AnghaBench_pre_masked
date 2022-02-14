
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const**) ;
 int VAR_1 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (rtx VAR_2)
{
  const char *VAR_3, *VAR_4;
  int VAR_5 = FUNC_0 (FUNC_2 (VAR_2, 2)) == VAR_0;

  FUNC_5 ("#define HAVE_ATTR_%s\n", FUNC_3 (VAR_2, 0));


  VAR_3 = FUNC_3 (VAR_2, 1);
  if (*VAR_3 == '\0')
    FUNC_5 ("extern int get_attr_%s (%s);\n", FUNC_3 (VAR_2, 0),
     (VAR_5 ? "void" : "rtx"));
  else
    {
      FUNC_5 ("enum attr_%s {", FUNC_3 (VAR_2, 0));

      while ((VAR_4 = FUNC_8 (&VAR_3)) != 0)
 {
   FUNC_10 (FUNC_3 (VAR_2, 0));
   FUNC_6 ('_');
   while (VAR_4 != VAR_3)
     FUNC_6 (FUNC_1 (*VAR_4++));
   if (*VAR_3 == ',')
     FUNC_4 (", ", VAR_1);
 }

      FUNC_4 ("};\n", VAR_1);
      FUNC_5 ("extern enum attr_%s get_attr_%s (%s);\n\n",
       FUNC_3 (VAR_2, 0), FUNC_3 (VAR_2, 0), (VAR_5 ? "void" : "rtx"));
    }



  if (! FUNC_9 (FUNC_3 (VAR_2, 0), "length"))
    {
      FUNC_7 ("extern void shorten_branches (rtx);\nextern int insn_default_length (rtx);\nextern int insn_min_length (rtx);\nextern int insn_variable_length_p (rtx);\nextern int insn_current_length (rtx);\n\n#include \"insn-addr.h\"\n");






    }
}
