
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* enumname; char* format; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_1)
{
  const char *VAR_2;
  int VAR_3;




  if (FUNC_0 (VAR_1))

    return;

  FUNC_1 ("#define gen_rtx_%s%s(MODE",
    FUNC_3 (VAR_1) ? "raw_" : "", VAR_0[VAR_1].enumname);

  for (VAR_2 = VAR_0[VAR_1].format, VAR_3 = 0; *VAR_2 != 0; VAR_2++)
    if (*VAR_2 != '0')
      FUNC_1 (", ARG%d", VAR_3++);

  FUNC_1 (") \\\n  gen_rtx_fmt_%s (%s, (MODE)",
   VAR_0[VAR_1].format, VAR_0[VAR_1].enumname);

  for (VAR_2 = VAR_0[VAR_1].format, VAR_3 = 0; *VAR_2 != 0; VAR_2++)
    if (*VAR_2 != '0')
      FUNC_1 (", (ARG%d)", VAR_3++);

  FUNC_2 (")");
}
