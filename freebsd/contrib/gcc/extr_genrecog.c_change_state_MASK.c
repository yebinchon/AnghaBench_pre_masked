
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*,char const,...) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
  int VAR_3 = FUNC_3 (VAR_0);
  int VAR_4 = FUNC_3 (VAR_1);
  int VAR_5;
  int VAR_6, VAR_7;


  for (VAR_5 = VAR_3; FUNC_4 (VAR_0, VAR_1, VAR_5) != 0; --VAR_5)
    continue;


  for (VAR_6 = VAR_3 - 1; VAR_6 >= 0; --VAR_6)
    if (FUNC_1 (VAR_0[VAR_6]))
      break;
  for (VAR_7 = VAR_4 - 1; VAR_7 >= 0; --VAR_7)
    if (FUNC_1 (VAR_1[VAR_7]))
      break;


  while (VAR_5 < VAR_4)
    {

      if (FUNC_1 (VAR_1[VAR_5]))
 {
   FUNC_2 ("%stem = peep2_next_insn (%d);\n",
    VAR_2, VAR_1[VAR_5] - 'A');
   FUNC_2 ("%sx%d = PATTERN (tem);\n", VAR_2, VAR_5 + 1);
 }
      else if (FUNC_0 (VAR_1[VAR_5]))
 FUNC_2 ("%sx%d = XVECEXP (x%d, 0, %d);\n",
  VAR_2, VAR_5 + 1, VAR_5, VAR_1[VAR_5] - 'a');
      else
 FUNC_2 ("%sx%d = XEXP (x%d, %c);\n",
  VAR_2, VAR_5 + 1, VAR_5, VAR_1[VAR_5]);
      ++VAR_5;
    }
}
