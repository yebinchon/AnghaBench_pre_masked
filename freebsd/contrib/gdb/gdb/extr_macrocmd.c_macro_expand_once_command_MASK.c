
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char macro_scope ;
struct cleanup {int dummy; } ;


 char* FUNC_0 () ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (char*,int ,char*) ;
 struct cleanup* FUNC_5 (int ,char**) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6 (char *VAR_3, int VAR_4)
{
  struct macro_scope *VAR_5 = ((void*)0);
  char *VAR_6 = ((void*)0);
  struct cleanup *VAR_7 = FUNC_5 (VAR_0, &VAR_5);
  FUNC_5 (VAR_0, &VAR_6);






  if (! VAR_3 || ! *VAR_3)
    FUNC_2 ("You must follow the `macro expand-once' command with"
           " the expression\n"
           "you want to expand.");

  VAR_5 = FUNC_0 ();
  if (VAR_5)
    {
      VAR_6 = FUNC_4 (VAR_3, VAR_2, VAR_5);
      FUNC_3 ("expands to: ", VAR_1);
      FUNC_3 (VAR_6, VAR_1);
      FUNC_3 ("\n", VAR_1);
    }
  else
    FUNC_3 ("GDB has no preprocessor macro information for "
                    "that code.\n",
                    VAR_1);

  FUNC_1 (VAR_7);
  return;
}
