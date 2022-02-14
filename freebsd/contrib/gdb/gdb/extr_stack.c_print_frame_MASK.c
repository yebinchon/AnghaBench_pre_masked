
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_stream {int stream; } ;
struct symtab_and_line {scalar_t__ pc; TYPE_1__* symtab; int line; } ;
struct symbol {int dummy; } ;
struct print_args_args {int stream; struct symbol* func; struct frame_info* fi; } ;
typedef struct symbol minimal_symbol ;
struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum language { ____Placeholder_language } language ;
struct TYPE_2__ {char* filename; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (struct symbol*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct symbol*) ;
 int FUNC_4 (struct symbol*) ;
 char* FUNC_5 (struct symbol*) ;
 scalar_t__ FUNC_6 (struct symbol*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,struct print_args_args*,char*,int ) ;
 char* FUNC_19 (char*,int ) ;
 int FUNC_20 (struct cleanup*) ;
 struct symbol* FUNC_21 (int ) ;
 int FUNC_22 (int ,char*,int,int ) ;
 int VAR_5 ;
 int FUNC_23 (struct frame_info*) ;
 scalar_t__ FUNC_24 (struct frame_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct symbol* FUNC_25 (int ) ;
 struct cleanup* FUNC_26 (int ,char*) ;
 struct cleanup* FUNC_27 (struct ui_stream*) ;
 struct cleanup* FUNC_28 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_29 (int ,char*,scalar_t__) ;
 int FUNC_30 (int ,int,int ,char*,int) ;
 int FUNC_31 (int ,char*,int ) ;
 int FUNC_32 (int ,char*,struct ui_stream*) ;
 int FUNC_33 (int ,char*,char*) ;
 struct ui_stream* FUNC_34 (int ) ;
 int FUNC_35 (int ,char*) ;
 int FUNC_36 (int ,char*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_37 (struct frame_info *VAR_11,
      int VAR_12,
      int VAR_13,
      int VAR_14,
      struct symtab_and_line VAR_15)
{
  struct symbol *VAR_16;
  char *VAR_17 = 0;
  enum language VAR_18 = VAR_7;
  struct ui_stream *VAR_19;
  struct cleanup *VAR_20;
  struct cleanup *VAR_21;

  VAR_19 = FUNC_34 (VAR_10);
  VAR_20 = FUNC_27 (VAR_19);

  VAR_16 = FUNC_21 (FUNC_23 (VAR_11));
  if (VAR_16)
    {
      struct minimal_symbol *VAR_22 = FUNC_25 (FUNC_23 (VAR_11));
      if (VAR_22 != ((void*)0)
   && (FUNC_6 (VAR_22)
       > FUNC_0 (FUNC_3 (VAR_16))))
 {
   VAR_16 = 0;
   VAR_17 = FUNC_1 (VAR_22);
   VAR_18 = FUNC_4 (VAR_22);
 }
      else
 {
   char *VAR_23;
   VAR_17 = FUNC_1 (VAR_16);
   VAR_18 = FUNC_4 (VAR_16);
   if (VAR_18 == VAR_6)
     {
       VAR_23 = FUNC_19 (VAR_17, VAR_0);
       if (VAR_23 == ((void*)0))



  VAR_17 = FUNC_5 (VAR_16);
     }
 }
    }
  else
    {
      struct minimal_symbol *VAR_24 = FUNC_25 (FUNC_23 (VAR_11));
      if (VAR_24 != ((void*)0))
 {
   VAR_17 = FUNC_1 (VAR_24);
   VAR_18 = FUNC_4 (VAR_24);
 }
    }

  FUNC_10 (VAR_12 == -1 ? 0 : VAR_12, FUNC_24 (VAR_11));

  VAR_21 = FUNC_28 (VAR_10, "frame");

  if (VAR_12 >= 0)
    {
      FUNC_35 (VAR_10, "#");
      FUNC_30 (VAR_10, 2, VAR_9, "level", VAR_12);
    }
  if (VAR_4)
    if (FUNC_24 (VAR_11) != VAR_15.pc
 || !VAR_15.symtab
 || VAR_13 == VAR_1)
      {
 FUNC_7 ();
 FUNC_29 (VAR_10, "addr", FUNC_24 (VAR_11));
 FUNC_8 ();
 FUNC_35 (VAR_10, " in ");
      }
  FUNC_11 ();
  FUNC_22 (VAR_19->stream, VAR_17 ? VAR_17 : "??", VAR_18,
      VAR_0);
  FUNC_32 (VAR_10, "func", VAR_19);
  FUNC_36 (VAR_10, "   ");
  FUNC_9 ();

  FUNC_35 (VAR_10, " (");
  if (VAR_14)
    {
      struct print_args_args VAR_25;
      struct cleanup *VAR_26;
      VAR_25.fi = VAR_11;
      VAR_25.func = VAR_16;
      VAR_25.stream = VAR_5;
      VAR_26 = FUNC_26 (VAR_10, "args");
      FUNC_18 (VAR_8, &VAR_25, "", VAR_3);



      FUNC_20 (VAR_26);
      VAR_2;
    }
  FUNC_35 (VAR_10, ")");
  if (VAR_15.symtab && VAR_15.symtab->filename)
    {
      FUNC_12 ();
      FUNC_36 (VAR_10, "   ");
      FUNC_35 (VAR_10, " at ");
      FUNC_14 ();
      FUNC_33 (VAR_10, "file", VAR_15.symtab->filename);
      FUNC_15 ();
      FUNC_35 (VAR_10, ":");
      FUNC_16 ();
      FUNC_31 (VAR_10, "line", VAR_15.line);
      FUNC_13 ();
    }
  FUNC_20 (VAR_21);
  FUNC_35 (VAR_10, "\n");
  FUNC_20 (VAR_20);
}
