
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
 int VAR_0 ;


 int FUNC_0 (int *) ;

 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_17 (int,char**) ;
 int FUNC_18 (int,char**) ;
 char* VAR_5 ;
 int FUNC_19 (char*) ;
 int * FUNC_20 (int*,int*) ;
 int VAR_6 ;
 int FUNC_21 () ;

int
FUNC_22 (int VAR_7, char **VAR_8)
{
  rtx VAR_9;

  VAR_5 = "genautomata";

  if (FUNC_17 (VAR_7, VAR_8) != VAR_1)
    return (VAR_0);

  FUNC_18 (VAR_7, VAR_8);
  while (1)
    {
      int VAR_10;
      int VAR_11;

      VAR_9 = FUNC_20 (&VAR_10, &VAR_11);
      if (VAR_9 == ((void*)0))
 break;

      switch (FUNC_0 (VAR_9))
 {
 case 135:
   FUNC_9 (VAR_9);
   break;

 case 133:
   FUNC_15 (VAR_9);
   break;

 case 136:
   FUNC_8 (VAR_9);
   break;

 case 131:
   FUNC_10 (VAR_9);
   break;

 case 128:
   FUNC_14 (VAR_9);
   break;

 case 129:
   FUNC_12 (VAR_9);
   break;

 case 139:
   FUNC_5 (VAR_9);
   break;

 case 130:
   FUNC_11 (VAR_9);
   break;

 case 137:
   FUNC_7 (VAR_9);
   break;

 case 138:
   FUNC_6 (VAR_9);
   break;

 case 132:
   FUNC_16 (VAR_9);
   break;

 case 134:
   FUNC_13 (VAR_9);
   break;

 default:
   break;
 }
    }

  if (VAR_4)
    return VAR_0;

  FUNC_19 ("/* Generated automatically by the program `genautomata'\n"
 "   from the machine description file `md'.  */\n\n"
 "#include \"config.h\"\n"
 "#include \"system.h\"\n"
 "#include \"coretypes.h\"\n"
 "#include \"tm.h\"\n"
 "#include \"rtl.h\"\n"
 "#include \"tm_p.h\"\n"
 "#include \"insn-config.h\"\n"
 "#include \"recog.h\"\n"
 "#include \"regs.h\"\n"
 "#include \"real.h\"\n"
 "#include \"output.h\"\n"
 "#include \"insn-attr.h\"\n"
 "#include \"toplev.h\"\n"
 "#include \"flags.h\"\n"
 "#include \"function.h\"\n");

  if (FUNC_1 (VAR_2, VAR_3) > 0)
    {
      FUNC_2 ();
      FUNC_21 ();
    }

  FUNC_4 (VAR_6);
  return (FUNC_3 (VAR_6) != 0 ? VAR_0 : VAR_1);
}
