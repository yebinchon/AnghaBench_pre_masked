
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,char**) ;
 int FUNC_5 (char*) ;
 char* VAR_4 ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int*,int*) ;
 int VAR_5 ;

int
FUNC_8 (int VAR_6, char **VAR_7)
{
  rtx VAR_8;

  VAR_4 = "genopinit";

  if (FUNC_4 (VAR_6, VAR_7) != VAR_3)
    return (VAR_2);

  FUNC_5 ("/* Generated automatically by the program `genopinit'\nfrom the machine description file `md'.  */\n\n");


  FUNC_5 ("#include \"config.h\"\n");
  FUNC_5 ("#include \"system.h\"\n");
  FUNC_5 ("#include \"coretypes.h\"\n");
  FUNC_5 ("#include \"tm.h\"\n");
  FUNC_5 ("#include \"rtl.h\"\n");
  FUNC_5 ("#include \"flags.h\"\n");
  FUNC_5 ("#include \"insn-config.h\"\n");
  FUNC_5 ("#include \"recog.h\"\n");
  FUNC_5 ("#include \"expr.h\"\n");
  FUNC_5 ("#include \"optabs.h\"\n");
  FUNC_5 ("#include \"reload.h\"\n\n");

  FUNC_5 ("void\ninit_all_optabs (void)\n{\n");

  FUNC_6 ("#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC\n  int i, j;\n#endif\n");






  while (1)
    {
      int VAR_9, VAR_10 = 0;

      VAR_8 = FUNC_7 (&VAR_9, &VAR_10);
      if (VAR_8 == ((void*)0))
 break;

      if (FUNC_0 (VAR_8) == VAR_1 || FUNC_0 (VAR_8) == VAR_0)
 FUNC_3 (VAR_8);
    }

  FUNC_6 ("\n#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC\n  /* This flag says the same insns that convert to a signed fixnum\n     also convert validly to an unsigned one.  */\n  for (i = 0; i < NUM_MACHINE_MODES; i++)\n    for (j = 0; j < NUM_MACHINE_MODES; j++)\n      ufixtrunc_optab->handlers[i][j].insn_code\n      = sfixtrunc_optab->handlers[i][j].insn_code;\n#endif\n}");
  FUNC_2 (VAR_5);
  return (FUNC_1 (VAR_5) != 0 ? VAR_2 : VAR_3);
}
