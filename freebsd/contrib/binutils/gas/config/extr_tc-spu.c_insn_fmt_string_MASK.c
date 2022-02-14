
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_opcode {char* mnemonic; int* arg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_1 (struct spu_opcode *VAR_2)
{
  static char VAR_3[64];
  int VAR_4 = 0;
  int VAR_5;

  VAR_4 += FUNC_0 (&VAR_3[VAR_4], "%s\t", VAR_2->mnemonic);
  for (VAR_5 = 1; VAR_5 <= VAR_2->arg[0]; VAR_5++)
    {
      int VAR_6 = VAR_2->arg[VAR_5];
      char *VAR_7;
      if (VAR_5 > 1 && VAR_6 != VAR_0 && VAR_2->arg[VAR_5-1] != VAR_0)
 VAR_3[VAR_4++] = ',';
      if (VAR_6 == VAR_0)
 VAR_7 = "(";
      else if (VAR_6 < VAR_0)
 VAR_7 = VAR_5 == VAR_1 ? "REG" : "reg";
      else
 VAR_7 = VAR_5 == VAR_1 ? "IMM" : "imm";
      VAR_4 += FUNC_0 (&VAR_3[VAR_4], "%s", VAR_7);
      if (VAR_5 > 1 && VAR_2->arg[VAR_5-1] == VAR_0)
 VAR_3[VAR_4++] = ')';
    }
  VAR_3[VAR_4] = 0;
  return VAR_3;
}
