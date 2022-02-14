
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,char*,int ,int,int *) ;
 int FUNC_1 (char*,int ,int ,char*,int *) ;
 int FUNC_2 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;

void
FUNC_4 (void)
{
  struct cmd_list_element *VAR_13;



  FUNC_2
    ("macro", VAR_0, VAR_4,
     "Prefix for commands dealing with C preprocessor macros.",
     &VAR_10, "macro ", 0, &VAR_1);

  FUNC_1
    ("expand", VAR_11, VAR_6,
     "Fully expand any C/C++ preprocessor macro invocations in EXPRESSION.\n"
     "Show the expanded expression.",
     &VAR_10);
  FUNC_0 ("exp", "expand", VAR_11, 1, &VAR_10);
  FUNC_1
    ("expand-once", VAR_11, VAR_7,
     "Expand C/C++ preprocessor macro invocations appearing directly in"
     " EXPRESSION.\n"
     "Show the expanded expression.\n"
     "\n"
     "This command differs from `macro expand' in that it only expands macro\n"
     "invocations that appear directly in EXPRESSION; if expanding a macro\n"
     "introduces further macro invocations, those are left unexpanded.\n"
     "\n"
     "`macro expand-once' helps you see how a particular macro expands,\n"
     "whereas `macro expand' shows you how all the macros involved in an\n"
     "expression work together to yield a pre-processed expression.",
     &VAR_10);
  FUNC_0 ("exp1", "expand-once", VAR_11, 1, &VAR_10);

  FUNC_1
    ("macro", VAR_11, VAR_2,
     "Show the definition of MACRO, and its source location.",
     &VAR_3);

  FUNC_1
    ("define", VAR_11, VAR_5,
     "Define a new C/C++ preprocessor macro.\n"
     "The GDB command `macro define DEFINITION' is equivalent to placing a\n"
     "preprocessor directive of the form `#define DEFINITION' such that the\n"
     "definition is visible in all the inferior's source files.\n"
     "For example:\n"
     "  (gdb) macro define PI (3.1415926)\n"
     "  (gdb) macro define MIN(x,y) ((x) < (y) ? (x) : (y))",
     &VAR_10);

  FUNC_1
    ("undef", VAR_11, VAR_9,
     "Remove the definition of the C/C++ preprocessor macro with the"
     " given name.",
     &VAR_10);

  FUNC_1
    ("list", VAR_11, VAR_8,
     "List all the macros defined using the `macro define' command.",
     &VAR_10);

  VAR_12 = FUNC_3 (0, 0);
}
