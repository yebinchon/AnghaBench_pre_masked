
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mips_cl_insn {TYPE_1__* insn_mo; int insn_opcode; } ;
typedef int bfd_reloc_code_real_type ;
struct TYPE_10__ {scalar_t__ X_op; } ;
struct TYPE_9__ {scalar_t__ mips16; } ;
struct TYPE_8__ {scalar_t__ X_op; } ;
struct TYPE_7__ {scalar_t__ pinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct mips_cl_insn*,TYPE_2__*,int *) ;
 int FUNC_3 (char*,scalar_t__,char*) ;
 TYPE_5__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct mips_cl_insn*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,struct mips_cl_insn*) ;
 int FUNC_8 (struct mips_cl_insn*) ;
 int FUNC_9 (char*,struct mips_cl_insn*) ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int * VAR_9 ;

void
FUNC_10 (char *VAR_10)
{
  struct mips_cl_insn VAR_11;
  bfd_reloc_code_real_type VAR_12[3]
    = {VAR_0, VAR_0, VAR_0};

  VAR_4.X_op = VAR_2;
  VAR_3.X_op = VAR_2;
  VAR_8.X_op = VAR_2;
  VAR_5[0] = VAR_0;
  VAR_5[1] = VAR_0;
  VAR_5[2] = VAR_0;
  VAR_9[0] = VAR_0;
  VAR_9[1] = VAR_0;
  VAR_9[2] = VAR_0;

  if (VAR_7.mips16)
    FUNC_7 (VAR_10, &VAR_11);
  else
    {
      FUNC_9 (VAR_10, &VAR_11);
      FUNC_0 ((FUNC_1("returned from mips_ip(%s) insn_opcode = 0x%x\n"),
     VAR_10, VAR_11.insn_opcode));
    }

  if (VAR_6)
    {
      FUNC_3 ("%s `%s'", VAR_6, VAR_10);
      return;
    }

  if (VAR_11.insn_mo->pinfo == VAR_1)
    {
      FUNC_6 ();
      if (VAR_7.mips16)
 FUNC_8 (&VAR_11);
      else
 FUNC_4 (&VAR_11);
      FUNC_5 ();
    }
  else
    {
      if (VAR_4.X_op != VAR_2)
 FUNC_2 (&VAR_11, &VAR_4, VAR_5);
      else if (VAR_8.X_op != VAR_2)
 FUNC_2 (&VAR_11, &VAR_8, VAR_9);
      else
 FUNC_2 (&VAR_11, ((void*)0), VAR_12);
    }
}
