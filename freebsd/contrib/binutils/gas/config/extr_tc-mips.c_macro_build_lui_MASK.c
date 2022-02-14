
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mips_opcode {char* name; char* args; } ;
struct mips_cl_insn {int insn_opcode; TYPE_1__* insn_mo; } ;
struct TYPE_7__ {scalar_t__ X_op; int X_add_number; int X_add_symbol; } ;
typedef TYPE_2__ expressionS ;
typedef scalar_t__ bfd_reloc_code_real_type ;
struct TYPE_8__ {int mips16; } ;
struct TYPE_6__ {int match; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mips_cl_insn,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (struct mips_cl_insn*,TYPE_2__*,scalar_t__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mips_cl_insn*,struct mips_opcode const*) ;
 struct mips_opcode* FUNC_5 (int ,char const*) ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static void
FUNC_7 (expressionS *VAR_11, int VAR_12)
{
  expressionS VAR_13;
  const struct mips_opcode *VAR_14;
  struct mips_cl_insn VAR_15;
  bfd_reloc_code_real_type VAR_16[3]
    = {VAR_1, VAR_1, VAR_1};
  const char *VAR_17 = "lui";
  const char *VAR_18 = "t,u";

  FUNC_3 (! VAR_8.mips16);

  VAR_13 = *VAR_11;

  if (VAR_13.X_op == VAR_4)
    {

      VAR_13.X_add_number = ((VAR_13.X_add_number + 0x8000)
    >> 16) & 0xffff;
      *VAR_16 = VAR_1;
    }
  else
    {
      FUNC_3 (VAR_11->X_op == VAR_5);


      FUNC_3 (VAR_9 == VAR_3
       || (! VAR_2
    && FUNC_6 (FUNC_1 (VAR_11->X_add_symbol), "_gp_disp") == 0)
       || (! VAR_7
    && FUNC_6 (FUNC_1 (VAR_11->X_add_symbol),
                             "__gnu_local_gp") == 0));
      *VAR_16 = VAR_0;
    }

  VAR_14 = FUNC_5 (VAR_10, VAR_17);
  FUNC_3 (FUNC_6 (VAR_17, VAR_14->name) == 0);
  FUNC_3 (FUNC_6 (VAR_18, VAR_14->args) == 0);
  FUNC_4 (&VAR_15, VAR_14);

  VAR_15.insn_opcode = VAR_15.insn_mo->match;
  FUNC_0 (VAR_6, VAR_15, VAR_12);
  if (*VAR_16 == VAR_1)
    {
      VAR_15.insn_opcode |= VAR_13.X_add_number;
      FUNC_2 (&VAR_15, ((void*)0), VAR_16);
    }
  else
    FUNC_2 (&VAR_15, &VAR_13, VAR_16);
}
