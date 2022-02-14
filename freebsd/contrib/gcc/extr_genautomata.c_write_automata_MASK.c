
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int * FUNC_12 (int ,char*) ;
 int FUNC_13 (int *,char*,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int VAR_11 ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 (int *) ;
 int FUNC_38 () ;
 int VAR_12 ;
 int FUNC_39 (int *) ;
 int FUNC_40 () ;
 int FUNC_41 (int ) ;
 int FUNC_42 (int *,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_43 (int ) ;
 int * VAR_14 ;
 int VAR_15 ;
 int FUNC_44 (int *) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void
FUNC_45 (void)
{
  VAR_12 = FUNC_0 ();
  if (VAR_13)
    FUNC_13 (VAR_14, "Forming and outputting automata tables...");
  FUNC_38 ();
  if (VAR_13)
    {
      FUNC_13 (VAR_14, "done\n");
      FUNC_13 (VAR_14, "Output functions to work with automata...");
    }
  FUNC_16 ();
  FUNC_31 ();
  FUNC_28 ();
  FUNC_30 ();

  FUNC_13 (&VAR_11, "\nstatic int *%s;\n", VAR_2);
  FUNC_13 (&VAR_11, "\nstatic int %s;\n\n",
    VAR_1);
  FUNC_22 ();
  FUNC_40 ();
  FUNC_33 ();
  FUNC_26 ();
  FUNC_18 ();
  FUNC_36 ();
  FUNC_29 ();
  FUNC_35 ();
  FUNC_32 ();
  FUNC_27 ();
  FUNC_25 ();
  FUNC_34 ();

  FUNC_13 (&VAR_11, "\n#if %s\n\n", VAR_0);
  FUNC_24 ();
  FUNC_17 ();
  FUNC_13 (&VAR_11, "\n#endif /* #if %s */\n\n",
    VAR_0);
  FUNC_20 ();
  FUNC_23 ();
  FUNC_21 ();
  if (VAR_13)
    FUNC_13 (VAR_14, "done\n");
  if (VAR_17)
    {
      VAR_9 = FUNC_12 (VAR_10, "w");
      if (VAR_9 == ((void*)0))
 {
   FUNC_41 (VAR_10);
   FUNC_1 (VAR_3);
 }
      if (VAR_13)
 FUNC_13 (VAR_14, "Output automata description...");
      FUNC_19 ();
      FUNC_15 ();
      if (VAR_13)
 FUNC_13 (VAR_14, "done\n");
      FUNC_37 (VAR_9);
    }
  FUNC_37 (VAR_14);
  FUNC_44 (&VAR_12);
  FUNC_39 (VAR_14);
  FUNC_11 ();
  FUNC_6 ();
  FUNC_7 ();
  if (VAR_16)
    {
      FUNC_13 (VAR_14, "Summary:\n");
      FUNC_13 (VAR_14, "  check time ");
      FUNC_42 (VAR_14, VAR_5);
      FUNC_13 (VAR_14, ", generation time ");
      FUNC_42 (VAR_14, VAR_6);
      FUNC_13 (VAR_14, ", all time ");
      FUNC_42 (VAR_14, VAR_4);
      FUNC_13 (VAR_14, "\n");
    }

  if (VAR_9 != ((void*)0))
    {
      FUNC_5 (VAR_9);
      if (FUNC_4 (VAR_15) != 0)
 FUNC_2 ("Error in writing DFA description file %s",
               VAR_10);
      FUNC_3 (VAR_9);
    }
  FUNC_8 ();
  FUNC_10 ();
  FUNC_9 ();
  FUNC_14 (&VAR_8, ((void*)0));
  if (VAR_7 && VAR_9 != ((void*)0))
    FUNC_43 (VAR_10);
}
