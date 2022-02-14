
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,char**) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,...) ;
 char* VAR_9 ;
 int * FUNC_6 (int*,int*) ;
 int VAR_10 ;

int
FUNC_7 (int VAR_11, char **VAR_12)
{
  rtx VAR_13;

  VAR_8 = -1;

  VAR_9 = "genpeep";

  if (FUNC_4 (VAR_11, VAR_12) != VAR_6)
    return (VAR_5);

  FUNC_5 ("/* Generated automatically by the program `genpeep'\nfrom the machine description file `md'.  */\n\n");


  FUNC_5 ("#include \"config.h\"\n");
  FUNC_5 ("#include \"system.h\"\n");
  FUNC_5 ("#include \"coretypes.h\"\n");
  FUNC_5 ("#include \"tm.h\"\n");
  FUNC_5 ("#include \"insn-config.h\"\n");
  FUNC_5 ("#include \"rtl.h\"\n");
  FUNC_5 ("#include \"tm_p.h\"\n");
  FUNC_5 ("#include \"regs.h\"\n");
  FUNC_5 ("#include \"output.h\"\n");
  FUNC_5 ("#include \"real.h\"\n");
  FUNC_5 ("#include \"recog.h\"\n");
  FUNC_5 ("#include \"except.h\"\n");
  FUNC_5 ("#include \"function.h\"\n");
  FUNC_5 ("#include \"toplev.h\"\n");
  FUNC_5 ("#include \"flags.h\"\n");
  FUNC_5 ("#include \"tm-constrs.h\"\n\n");

  FUNC_5 ("#ifdef HAVE_peephole\n");
  FUNC_5 ("extern rtx peep_operand[];\n\n");
  FUNC_5 ("#define operands peep_operand\n\n");

  FUNC_5 ("rtx\npeephole (rtx ins1)\n{\n");
  FUNC_5 ("  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;\n\n");


  FUNC_5 ("  if (NEXT_INSN (ins1)\n");
  FUNC_5 ("      && BARRIER_P (NEXT_INSN (ins1)))\n");
  FUNC_5 ("    return 0;\n\n");



  while (1)
    {
      int VAR_14, VAR_15 = 0;

      VAR_13 = FUNC_6 (&VAR_14, &VAR_15);
      if (VAR_13 == ((void*)0))
 break;

       if (FUNC_0 (VAR_13) == VAR_2)
 {
   FUNC_3 (VAR_13);
   VAR_7++;
 }
      if (FUNC_0 (VAR_13) == VAR_1
   || FUNC_0 (VAR_13) == VAR_0
   || FUNC_0 (VAR_13) == VAR_4
   || FUNC_0 (VAR_13) == VAR_3)
 {
   VAR_7++;
 }
    }

  FUNC_5 ("  return 0;\n}\n\n");

  if (VAR_8 == -1)
    VAR_8 = 1;

  FUNC_5 ("rtx peep_operand[%d];\n", VAR_8 + 1);
  FUNC_5 ("#endif\n");

  FUNC_2 (VAR_10);
  return (FUNC_1 (VAR_10) != 0 ? VAR_5 : VAR_6);
}
