
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_2, int VAR_3)
{
  FUNC_2 (VAR_2, FUNC_0("Usage: %s [option(s)] in-file\n"), VAR_1);
  FUNC_2 (VAR_2, FUNC_0(" Print a human readable interpretation of a SYSROFF object file\n"));
  FUNC_2 (VAR_2, FUNC_0(" The options are:\n  @<file>                Read options from <file>\n  -h --help              Display this information\n  -v --version           Display the program's version\n\n"));





  if (VAR_0[0] && VAR_3 == 0)
    FUNC_2 (VAR_2, FUNC_0("Report bugs to %s\n"), VAR_0);

  FUNC_1 (VAR_3);
}
