
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int description; } ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*) ;

void
FUNC_3 (FILE *VAR_2)
{
  int VAR_3;

  FUNC_1 (VAR_2, FUNC_0("\nThe following ARM specific disassembler options are supported for use with\nthe -M switch:\n"));



  for (VAR_3 = VAR_0; VAR_3--;)
    FUNC_1 (VAR_2, "  reg-names-%s %*c%s\n",
      VAR_1[VAR_3].name,
      (int)(14 - FUNC_2 (VAR_1[VAR_3].name)), ' ',
      VAR_1[VAR_3].description);

  FUNC_1 (VAR_2, "  force-thumb              Assume all insns are Thumb insns\n");
  FUNC_1 (VAR_2, "  no-force-thumb           Examine preceeding label to determine an insn's type\n\n");
}
