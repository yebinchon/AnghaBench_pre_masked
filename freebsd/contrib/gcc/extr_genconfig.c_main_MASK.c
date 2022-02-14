
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;







 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int,char**) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (char*,...) ;
 char* VAR_12 ;
 int FUNC_11 (char*) ;
 int * FUNC_12 (int*,int*) ;
 int VAR_13 ;

int
FUNC_13 (int VAR_14, char **VAR_15)
{
  rtx VAR_16;

  VAR_12 = "genconfig";

  if (FUNC_9 (VAR_14, VAR_15) != VAR_1)
    return (VAR_0);

  FUNC_11 ("/* Generated automatically by the program `genconfig'");
  FUNC_11 ("   from the machine description file `md'.  */\n");
  FUNC_11 ("#ifndef GCC_INSN_CONFIG_H");
  FUNC_11 ("#define GCC_INSN_CONFIG_H\n");




  VAR_11 = 29;
  VAR_8 = 1;



  while (1)
    {
      int VAR_17, VAR_18 = 0;

      VAR_16 = FUNC_12 (&VAR_17, &VAR_18);
      if (VAR_16 == ((void*)0))
 break;

      switch (FUNC_0 (VAR_16))
 {
     case 131:
     FUNC_5 (VAR_16);
     break;

   case 132:
     FUNC_4 (VAR_16);
     break;

   case 128:
     FUNC_8 (VAR_16);
     break;

   case 129:
     VAR_6 = 1;
     FUNC_7 (VAR_16);
     break;

   case 130:
     VAR_7 = 1;
     FUNC_6 (VAR_16);
     break;

   default:
     break;
 }
    }

  FUNC_10 ("#define MAX_RECOG_OPERANDS %d\n", VAR_11 + 1);
  FUNC_10 ("#define MAX_DUP_OPERANDS %d\n", VAR_8);



  FUNC_10 ("#ifndef MAX_INSNS_PER_SPLIT\n");
  FUNC_10 ("#define MAX_INSNS_PER_SPLIT %d\n", VAR_10);
  FUNC_10 ("#endif\n");

  if (VAR_2)
    {
      FUNC_10 ("#define HAVE_cc0 1\n");
      FUNC_10 ("#define CC0_P(X) ((X) == cc0_rtx)\n");
    }
  else
    {


      FUNC_10 ("#define CC0_P(X) ((X) ? 0 : 0)\n");
    }

  if (VAR_3)
    FUNC_10 ("#define HAVE_conditional_move 1\n");

  if (VAR_4)
    FUNC_10 ("#define HAVE_conditional_execution 1\n");

  if (VAR_5)
    FUNC_10 ("#define HAVE_lo_sum 1\n");

  if (VAR_7)
    FUNC_10 ("#define HAVE_peephole 1\n");

  if (VAR_6)
    {
      FUNC_10 ("#define HAVE_peephole2 1\n");
      FUNC_10 ("#define MAX_INSNS_PER_PEEP2 %d\n", VAR_9);
    }

  FUNC_11("\n#endif /* GCC_INSN_CONFIG_H */");

  if (FUNC_2 (VAR_13) || FUNC_3 (VAR_13) || FUNC_1 (VAR_13))
    return VAR_0;

  return VAR_1;
}
