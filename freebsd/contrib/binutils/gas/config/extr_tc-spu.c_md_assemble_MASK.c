
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct spu_opcode {char* mnemonic; int* arg; int opcode; } ;
struct spu_insn {int* reloc_arg; int* flag; int tag; TYPE_6__* exp; int opcode; } ;
struct TYPE_8__ {size_t arg_format; scalar_t__ insn_tag; } ;
struct TYPE_9__ {TYPE_1__ tc_fix_data; } ;
typedef TYPE_2__ fixS ;
typedef enum spu_insns { ____Placeholder_spu_insns } spu_insns ;
typedef scalar_t__ bfd_reloc_code_real_type ;
struct TYPE_12__ {scalar_t__ reloc; } ;
struct TYPE_11__ {int X_op; scalar_t__ X_add_number; scalar_t__ X_op_symbol; scalar_t__ X_add_symbol; } ;
struct TYPE_10__ {int fr_literal; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 TYPE_7__* VAR_11 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct spu_opcode*,char*,struct spu_insn*) ;
 int FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,char*,int,TYPE_6__*,int,scalar_t__) ;
 char* FUNC_9 (int) ;
 TYPE_3__* VAR_12 ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (struct spu_opcode*) ;
 int FUNC_12 (char*,int ,int) ;
 int VAR_13 ;
 struct spu_opcode* VAR_14 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int VAR_15 ;
 char const* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_14 (char *VAR_19)
{
  char *VAR_20, *VAR_21;
  char VAR_22;
  struct spu_opcode *VAR_23;
  struct spu_insn VAR_24;
  int VAR_25;

  FUNC_5 (VAR_19);



  for (VAR_20 = VAR_19; *VAR_20 != 0 && !FUNC_0 (*VAR_20); VAR_20++)
    ;
  VAR_22 = *VAR_20;
  *VAR_20 = 0;

  if (VAR_22 != 0 && VAR_22 != '\n')
    VAR_20++;



  if ((VAR_23 = (struct spu_opcode *) FUNC_10 (VAR_13, VAR_19)) == ((void*)0))
    {
      FUNC_2 (FUNC_1("Invalid mnemonic '%s'"), VAR_19);
      return;
    }

  if (!VAR_18 && FUNC_13 (VAR_23->mnemonic, "orx") == 0)
    {
      FUNC_2 (FUNC_1("'%s' is only available in DD2.0 or higher."), VAR_19);
      return;
    }

  while (1)
    {

      for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
 {
   VAR_24.exp[VAR_25].X_add_symbol = 0;
   VAR_24.exp[VAR_25].X_op_symbol = 0;
   VAR_24.exp[VAR_25].X_add_number = 0;
   VAR_24.exp[VAR_25].X_op = VAR_10;
   VAR_24.reloc_arg[VAR_25] = -1;
   VAR_24.flag[VAR_25] = 0;
 }
      VAR_24.opcode = VAR_23->opcode;
      VAR_24.tag = (enum spu_insns) (VAR_23 - VAR_14);

      VAR_15 = 0;
      VAR_16 = 0;
      VAR_17 = 0;
      if (FUNC_6 (VAR_23, VAR_20, &VAR_24))
 break;


      if (!FUNC_13 (VAR_23[0].mnemonic, VAR_23[1].mnemonic))
 VAR_23++;
      else
 {
   int VAR_26 = VAR_23[0].arg[VAR_15-1];

   FUNC_3 (FUNC_1("Error in argument %d.  Expecting:  \"%s\""),
      VAR_15 - (VAR_26 == VAR_0),
      FUNC_11 (VAR_23));
   return;
 }
    }

  if ((VAR_17 & 4)
      && ! (VAR_24.tag == VAR_8
     || VAR_24.tag == VAR_7
     || VAR_24.tag == VAR_9))
    FUNC_4 (FUNC_1("Mixing register syntax, with and without '$'."));
  if (VAR_16)
    {
      const char *VAR_27 = VAR_16;
      while (*VAR_27 != '$')
 VAR_27--;
      FUNC_4 (FUNC_1("Treating '%-*s' as a symbol."), (int)(VAR_16 - VAR_27), VAR_27);
    }



  VAR_21 = FUNC_9 (4);
  FUNC_12 (VAR_21, VAR_24.opcode, 4);



  for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
    if (VAR_24.reloc_arg[VAR_25] >= 0)
      {
        fixS *VAR_28;
        bfd_reloc_code_real_type VAR_29 = VAR_11[VAR_24.reloc_arg[VAR_25]].reloc;
 int VAR_30 = 0;

        if (VAR_29 == VAR_4
     || VAR_29 == VAR_5
            || VAR_29 == VAR_3)
   VAR_30 = 1;
 if (VAR_24.flag[VAR_25] == 1)
   VAR_29 = VAR_1;
 else if (VAR_24.flag[VAR_25] == 2)
   VAR_29 = VAR_2;
 VAR_28 = FUNC_8 (VAR_12,
       VAR_21 - VAR_12->fr_literal,
       4,
       &VAR_24.exp[VAR_25],
       VAR_30,
       VAR_29);
 VAR_28->tc_fix_data.arg_format = VAR_24.reloc_arg[VAR_25];
 VAR_28->tc_fix_data.insn_tag = VAR_24.tag;
      }
  FUNC_7 (4);
}
