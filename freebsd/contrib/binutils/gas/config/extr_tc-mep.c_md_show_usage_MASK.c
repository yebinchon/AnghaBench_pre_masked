
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_1__* VAR_0 ;

void
FUNC_2 (FILE *VAR_1)
{
  FUNC_1 (VAR_1, FUNC_0("MeP specific command line options:\n  -EB                     assemble for a big endian system (default)\n  -EL                     assemble for a little endian system\n  -mconfig=<name>         specify a chip configuration to use\n  -maverage -mno-average -mmult -mno-mult -mdiv -mno-div\n  -mbitops -mno-bitops -mleadz -mno-leadz -mabsdiff -mno-absdiff\n  -mminmax -mno-minmax -mclip -mno-clip -msatur -mno-satur -mcop32\n                          enable/disable the given opcodes\n\n  If -mconfig is given, the other -m options modify it.  Otherwise,\n  if no -m options are given, all core opcodes are enabled;\n  if any enabling -m options are given, only those are enabled;\n  if only disabling -m options are given, only those are disabled.\n"));
  if (VAR_0[1].name)
    {
      int VAR_2;
      FUNC_1 (VAR_1, "  -mconfig=STR            specify the configuration to use\n");
      FUNC_1 (VAR_1, "  Configurations:");
      for (VAR_2=0; VAR_0[VAR_2].name; VAR_2++)
 FUNC_1 (VAR_1, " %s", VAR_0[VAR_2].name);
      FUNC_1 (VAR_1, "\n");
    }
}
