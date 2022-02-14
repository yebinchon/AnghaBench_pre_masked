
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
  FUNC_2 (VAR_2, FUNC_0("Usage: %s <option(s)> in-file(s)\n"), VAR_1);
  FUNC_2 (VAR_2, FUNC_0(" Removes symbols and sections from files\n"));
  FUNC_2 (VAR_2, FUNC_0(" The options are:\n"));
  FUNC_2 (VAR_2, FUNC_0("  -I --input-target=<bfdname>      Assume input file is in format <bfdname>\n  -O --output-target=<bfdname>     Create an output file in format <bfdname>\n  -F --target=<bfdname>            Set both input and output format to <bfdname>\n  -p --preserve-dates              Copy modified/access timestamps to the output\n  -R --remove-section=<name>       Remove section <name> from the output\n  -s --strip-all                   Remove all symbol and relocation information\n  -g -S -d --strip-debug           Remove all debugging symbols & sections\n     --strip-unneeded              Remove all symbols not needed by relocations\n     --only-keep-debug             Strip everything but the debug information\n  -N --strip-symbol=<name>         Do not copy symbol <name>\n  -K --keep-symbol=<name>          Do not strip symbol <name>\n     --keep-file-symbols           Do not strip file symbol(s)\n  -w --wildcard                    Permit wildcard in symbol comparison\n  -x --discard-all                 Remove all non-global symbols\n  -X --discard-locals              Remove any compiler-generated symbols\n  -v --verbose                     List all object files modified\n  -V --version                     Display this program's version number\n  -h --help                        Display this output\n     --info                        List object formats & architectures supported\n  -o <file>                        Place stripped output into <file>\n"));
  FUNC_3 (VAR_1, VAR_2);
  if (VAR_0[0] && VAR_3 == 0)
    FUNC_2 (VAR_2, FUNC_0("Report bugs to %s\n"), VAR_0);
  FUNC_1 (VAR_3);
}
