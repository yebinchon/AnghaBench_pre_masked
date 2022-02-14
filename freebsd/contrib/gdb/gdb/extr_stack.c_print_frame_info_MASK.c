
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ pc; scalar_t__ line; scalar_t__ symtab; } ;
struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct cleanup*) ;
 int FUNC_7 (struct frame_info*,struct symtab_and_line*) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 struct symtab_and_line FUNC_9 () ;
 scalar_t__ FUNC_10 (struct frame_info*) ;
 scalar_t__ FUNC_11 (struct frame_info*) ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,scalar_t__,int,scalar_t__) ;
 struct cleanup* FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (struct frame_info*,int,int,int,struct symtab_and_line) ;
 int FUNC_17 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_19 (struct symtab_and_line*) ;
 int FUNC_20 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 () ;
 int VAR_9 ;
 int FUNC_22 (int ,char*,scalar_t__) ;
 int FUNC_23 (int ,int,int ,char*,int) ;
 int FUNC_24 (int ,char*,char*) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ,char*) ;
 int VAR_10 ;

void
FUNC_27 (struct frame_info *VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
  struct symtab_and_line VAR_15;
  int VAR_16;
  int VAR_17;

  if (FUNC_11 (VAR_11) == VAR_0
      || FUNC_11 (VAR_11) == VAR_3)
    {
      struct cleanup *VAR_18
 = FUNC_14 (VAR_10, "frame");

      FUNC_2 (VAR_12 == -1 ? 0 : VAR_12, FUNC_10 (VAR_11));



      if (VAR_12 >= 0)
        {
          FUNC_26 (VAR_10, "#");
          FUNC_23 (VAR_10, 2, VAR_9, "level", VAR_12);
        }
      if (FUNC_25 (VAR_10))
        {
          FUNC_0 ();
          FUNC_22 (VAR_10, "addr", FUNC_10 (VAR_11));
          FUNC_1 ();
        }

      if (FUNC_11 (VAR_11) == VAR_0)
        {
          FUNC_4 ();
          FUNC_24 (VAR_10, "func", "<function called from gdb>");
 }
      else if (FUNC_11 (VAR_11) == VAR_3)
        {
   FUNC_5 ();
          FUNC_24 (VAR_10, "func", "<signal handler called>");
        }
      FUNC_26 (VAR_10, "\n");
      FUNC_3 ();

      FUNC_6 (VAR_18);
      return;
    }







  FUNC_7 (VAR_11, &VAR_15);

  VAR_17 = (VAR_13 == VAR_1
      || VAR_13 == VAR_2
      || VAR_13 == VAR_4);

  if (VAR_17 || !VAR_15.symtab)
    FUNC_16 (VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

  VAR_16 = (VAR_13 == VAR_5 || VAR_13 == VAR_4);

  if (VAR_15.symtab)
    FUNC_19 (&VAR_15);

  if (VAR_16 && VAR_15.symtab)
    {
      struct symtab_and_line VAR_19;
      int VAR_20 = 0;
      int VAR_21 = (VAR_13 == VAR_5) && (FUNC_10 (VAR_11) != VAR_15.pc);

      if (VAR_7)
 VAR_20 = FUNC_13 (VAR_15.symtab, VAR_15.line, VAR_21,
         FUNC_10 (VAR_11));
      if (!VAR_20)
 {
   if (&FUNC_17)
     FUNC_17 (VAR_15.symtab, VAR_15.line, VAR_15.line + 1, 0);
   else
     {
       if (VAR_6 && VAR_21)
  {
    FUNC_22 (VAR_10, "addr", FUNC_10 (VAR_11));
    FUNC_26 (VAR_10, "\t");
  }

       FUNC_18 (VAR_15.symtab, VAR_15.line, VAR_15.line + 1, 0);
     }
 }

      FUNC_21 ();
      VAR_19 = FUNC_9 ();
      VAR_19.line = FUNC_15 (VAR_15.line - FUNC_12 () / 2, 1);
      FUNC_19 (&VAR_19);
    }

  if (VAR_13 != 0)
    FUNC_20 (1, FUNC_10 (VAR_11), VAR_15.symtab, VAR_15.line);

  FUNC_3 ();

  FUNC_8 (VAR_8);
}
