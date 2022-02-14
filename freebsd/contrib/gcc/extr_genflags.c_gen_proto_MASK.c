
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 char* FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,int,int) ;
 char* VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int FUNC_8 (char const*,char*) ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_2)
{
  int VAR_3 = FUNC_4 (VAR_2);
  int VAR_4;
  const char *VAR_5 = FUNC_0 (VAR_2, 0);
  int VAR_6 = FUNC_3 (FUNC_0 (VAR_2, 2));






  if (VAR_5[0] == 'c' || VAR_5[0] == 's')
    {
      if (!FUNC_8 (VAR_5, "call")
   || !FUNC_8 (VAR_5, "call_pop")
   || !FUNC_8 (VAR_5, "sibcall")
   || !FUNC_8 (VAR_5, "sibcall_pop"))
 FUNC_2 (VAR_5, VAR_3, 4);
      else if (!FUNC_8 (VAR_5, "call_value")
        || !FUNC_8 (VAR_5, "call_value_pop")
        || !FUNC_8 (VAR_5, "sibcall_value")
        || !FUNC_8 (VAR_5, "sibcall_value_pop"))
 FUNC_2 (VAR_5, VAR_3, 5);
    }

  if (VAR_6 != 0)
    FUNC_5 ("extern rtx        gen_%-*s (", VAR_0, VAR_5);
  else
    FUNC_5 ("static inline rtx gen_%-*s (", VAR_0, VAR_5);

  if (VAR_3 == 0)
    FUNC_1 ("void", VAR_1);
  else
    {
      for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++)
 FUNC_1 ("rtx, ", VAR_1);

      FUNC_1 ("rtx", VAR_1);
    }

  FUNC_7 (");");



  if (VAR_6 == 0)
    {
      FUNC_5 ("static inline rtx\ngen_%s", VAR_5);
      if (VAR_3 > 0)
 {
   FUNC_6 ('(');
   for (VAR_4 = 0; VAR_4 < VAR_3-1; VAR_4++)
     FUNC_5 ("rtx ARG_UNUSED (%c), ", 'a' + VAR_4);
   FUNC_5 ("rtx ARG_UNUSED (%c))\n", 'a' + VAR_4);
 }
      else
 FUNC_7 ("(void)");
      FUNC_7 ("{\n  return 0;\n}");
    }

}
