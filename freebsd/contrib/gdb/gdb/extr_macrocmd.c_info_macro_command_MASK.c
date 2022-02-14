
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_source_file {int dummy; } ;
struct macro_scope {int line; struct macro_source_file* file; } ;
struct macro_definition {scalar_t__ kind; int argc; char** argv; char* replacement; } ;
struct cleanup {int dummy; } ;


 struct macro_scope* FUNC_0 () ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct macro_source_file* FUNC_5 (struct macro_source_file*,int,char*,int*) ;
 scalar_t__ VAR_2 ;
 struct macro_definition* FUNC_6 (struct macro_source_file*,int,char*) ;
 struct cleanup* FUNC_7 (int ,struct macro_scope**) ;
 int FUNC_8 (int ,struct macro_source_file*,int) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_3, int VAR_4)
{
  struct macro_scope *VAR_5 = ((void*)0);
  struct cleanup *VAR_6 = FUNC_7 (VAR_0, &VAR_5);
  struct macro_definition *VAR_7;

  if (! VAR_3 || ! *VAR_3)
    FUNC_2 ("You must follow the `info macro' command with the name"
           " of the macro\n"
           "whose definition you want to see.");

  VAR_5 = FUNC_0 ();
  if (! VAR_5)
    FUNC_2 ("GDB has no preprocessor macro information for that code.");

  VAR_7 = FUNC_6 (VAR_5->file, VAR_5->line, VAR_3);
  if (VAR_7)
    {
      int VAR_8;
      struct macro_source_file *VAR_9
        = FUNC_5 (VAR_5->file, VAR_5->line, VAR_3, &VAR_8);

      FUNC_3 (VAR_1, "Defined at ");
      FUNC_8 (VAR_1, VAR_9, VAR_8);
      FUNC_3 (VAR_1, "#define %s", VAR_3);
      if (VAR_7->kind == VAR_2)
        {
          int VAR_10;

          FUNC_4 ("(", VAR_1);
          for (VAR_10 = 0; VAR_10 < VAR_7->argc; VAR_10++)
            {
              FUNC_4 (VAR_7->argv[VAR_10], VAR_1);
              if (VAR_10 + 1 < VAR_7->argc)
                FUNC_4 (", ", VAR_1);
            }
          FUNC_4 (")", VAR_1);
        }
      FUNC_3 (VAR_1, " %s\n", VAR_7->replacement);
    }
  else
    {
      FUNC_3 (VAR_1,
                        "The symbol `%s' has no definition as a C/C++"
                        " preprocessor macro\n"
                        "at ", VAR_3);
      FUNC_8 (VAR_1, VAR_5->file, VAR_5->line);
    }

  FUNC_1 (VAR_6);
}
