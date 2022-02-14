
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_3, int VAR_4)
{
  FUNC_2 (VAR_3, "Usage: %s [options] [mangled names]\n", VAR_2);

  FUNC_2 (VAR_3, "Options are:\n  [-_|--strip-underscore]     Ignore first leading underscore%s\n",


    VAR_1 ? " (default)" : "");
  FUNC_2 (VAR_3, "  [-n|--no-strip-underscore]  Do not ignore a leading underscore%s\n",

    VAR_1 ? "" : " (default)");
  FUNC_2 (VAR_3, "  [-p|--no-params]            Do not display function arguments\n  [-i|--no-verbose]           Do not show implementation details (if any)\n  [-t|--types]                Also attempt to demangle type encodings\n  [-s|--format ");




  FUNC_3 (VAR_3);
  FUNC_2 (VAR_3, "]\n");

  FUNC_2 (VAR_3, "  [@<file>]                   Read extra options from <file>\n  [-h|--help]                 Display this information\n  [-v|--version]              Show the version information\nDemangled names are displayed to stdout.\nIf a name cannot be demangled it is just echoed to stdout.\nIf no names are provided on the command line, stdin is read.\n");






  if (VAR_0[0] && VAR_4 == 0)
    FUNC_2 (VAR_3, FUNC_0("Report bugs to %s.\n"), VAR_0);
  FUNC_1 (VAR_4);
}
