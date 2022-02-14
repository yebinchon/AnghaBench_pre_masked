
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {char* filename; char* dirname; char* fullname; int nlines; char* debugformat; scalar_t__ macro_table; int language; } ;


 struct symtab* VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_1, int VAR_2)
{
  struct symtab *VAR_3 = VAR_0;

  if (!VAR_3)
    {
      FUNC_1 ("No current source file.\n");
      return;
    }
  FUNC_1 ("Current source file is %s\n", VAR_3->filename);
  if (VAR_3->dirname)
    FUNC_1 ("Compilation directory is %s\n", VAR_3->dirname);
  if (VAR_3->fullname)
    FUNC_1 ("Located in %s\n", VAR_3->fullname);
  if (VAR_3->nlines)
    FUNC_1 ("Contains %d line%s.\n", VAR_3->nlines,
       VAR_3->nlines == 1 ? "" : "s");

  FUNC_1 ("Source language is %s.\n", FUNC_0 (VAR_3->language));
  FUNC_1 ("Compiled with %s debugging format.\n", VAR_3->debugformat);
  FUNC_1 ("%s preprocessor macro info.\n",
                   VAR_3->macro_table ? "Includes" : "Does not include");
}
