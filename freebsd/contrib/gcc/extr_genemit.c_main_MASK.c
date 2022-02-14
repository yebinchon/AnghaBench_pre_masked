
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,char**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 char* VAR_4 ;
 int * FUNC_10 (int*,scalar_t__*) ;
 char* VAR_5 ;
 int VAR_6 ;

int
FUNC_11 (int VAR_7, char **VAR_8)
{
  rtx VAR_9;

  VAR_4 = "genemit";

  if (FUNC_6 (VAR_7, VAR_8) != VAR_1)
    return (VAR_0);




  VAR_2 = 0;
  VAR_3 = 0;

  FUNC_9 ("/* Generated automatically by the program `genemit'\nfrom the machine description file `md'.  */\n\n");


  FUNC_9 ("#include \"config.h\"\n");
  FUNC_9 ("#include \"system.h\"\n");
  FUNC_9 ("#include \"coretypes.h\"\n");
  FUNC_9 ("#include \"tm.h\"\n");
  FUNC_9 ("#include \"rtl.h\"\n");
  FUNC_9 ("#include \"tm_p.h\"\n");
  FUNC_9 ("#include \"function.h\"\n");
  FUNC_9 ("#include \"expr.h\"\n");
  FUNC_9 ("#include \"optabs.h\"\n");
  FUNC_9 ("#include \"real.h\"\n");
  FUNC_9 ("#include \"flags.h\"\n");
  FUNC_9 ("#include \"output.h\"\n");
  FUNC_9 ("#include \"insn-config.h\"\n");
  FUNC_9 ("#include \"hard-reg-set.h\"\n");
  FUNC_9 ("#include \"recog.h\"\n");
  FUNC_9 ("#include \"resource.h\"\n");
  FUNC_9 ("#include \"reload.h\"\n");
  FUNC_9 ("#include \"toplev.h\"\n");
  FUNC_9 ("#include \"tm-constrs.h\"\n");
  FUNC_9 ("#include \"ggc.h\"\n\n");
  FUNC_9 ("#include \"basic-block.h\"\n\n");
  FUNC_9 ("#define FAIL return (end_sequence (), _val)\n");
  FUNC_9 ("#define DONE return (_val = get_insns (), end_sequence (), _val)\n\n");



  while (1)
    {
      int VAR_10;

      VAR_9 = FUNC_10 (&VAR_10, &VAR_2);
      if (VAR_9 == ((void*)0))
 break;

      switch (FUNC_0 (VAR_9))
 {
 case 130:
   FUNC_4 (VAR_9, VAR_10);
   break;

 case 131:
   FUNC_9 ("/* %s:%d */\n", VAR_5, VAR_10);
   FUNC_3 (VAR_9);
   break;

 case 128:
   FUNC_9 ("/* %s:%d */\n", VAR_5, VAR_10);
   FUNC_5 (VAR_9);
   break;

 case 129:
   FUNC_9 ("/* %s:%d */\n", VAR_5, VAR_10);
   FUNC_5 (VAR_9);
   break;

 default:
   break;
 }
      ++VAR_3;
    }



  FUNC_7 ();
  FUNC_8 ();

  FUNC_2 (VAR_6);
  return (FUNC_1 (VAR_6) != 0 ? VAR_0 : VAR_1);
}
