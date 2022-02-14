
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int *) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_2, int VAR_3)
{
  FUNC_2 (VAR_2, FUNC_0("Usage: %s [option(s)] [addr(s)]\n"), VAR_1);
  FUNC_2 (VAR_2, FUNC_0(" Convert addresses into line number/file name pairs.\n"));
  FUNC_2 (VAR_2, FUNC_0(" If no addresses are specified on the command line, they will be read from stdin\n"));
  FUNC_2 (VAR_2, FUNC_0(" The options are:\n  @<file>                Read options from <file>\n  -b --target=<bfdname>  Set the binary file format\n  -e --exe=<executable>  Set the input file name (default is a.out)\n  -i --inlines           Unwind inlined functions\n  -j --section=<name>    Read section-relative offsets instead of addresses\n  -s --basenames         Strip directory names\n  -f --functions         Show function names\n  -C --demangle[=style]  Demangle function names\n  -h --help              Display this information\n  -v --version           Display the program's version\n\n"));
  FUNC_3 (VAR_1, VAR_2);
  if (VAR_0[0] && VAR_3 == 0)
    FUNC_2 (VAR_2, FUNC_0("Report bugs to %s\n"), VAR_0);
  FUNC_1 (VAR_3);
}
