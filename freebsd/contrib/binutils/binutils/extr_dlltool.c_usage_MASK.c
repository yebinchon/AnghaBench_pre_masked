
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
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_3, int VAR_4)
{

  FUNC_2 (VAR_3, FUNC_0("Usage %s <option(s)> <object-file(s)>\n"), VAR_2);

  FUNC_2 (VAR_3, FUNC_0("   -m --machine <machine>    Create as DLL for <machine>.  [default: %s]\n"), VAR_1);
  FUNC_2 (VAR_3, FUNC_0("        possible <machine>: arm[_interwork], i386, mcore[-elf]{-le|-be}, ppc, thumb\n"));
  FUNC_2 (VAR_3, FUNC_0("   -e --output-exp <outname> Generate an export file.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -l --output-lib <outname> Generate an interface library.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -a --add-indirect         Add dll indirects to export file.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -D --dllname <name>       Name of input dll to put into interface lib.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -d --input-def <deffile>  Name of .def file to be read in.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -z --output-def <deffile> Name of .def file to be created.\n"));
  FUNC_2 (VAR_3, FUNC_0("      --export-all-symbols   Export all symbols to .def\n"));
  FUNC_2 (VAR_3, FUNC_0("      --no-export-all-symbols  Only export listed symbols\n"));
  FUNC_2 (VAR_3, FUNC_0("      --exclude-symbols <list> Don't export <list>\n"));
  FUNC_2 (VAR_3, FUNC_0("      --no-default-excludes  Clear default exclude symbols\n"));
  FUNC_2 (VAR_3, FUNC_0("   -b --base-file <basefile> Read linker generated base file.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -x --no-idata4            Don't generate idata$4 section.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -c --no-idata5            Don't generate idata$5 section.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -U --add-underscore       Add underscores to all symbols in interface library.\n"));
  FUNC_2 (VAR_3, FUNC_0("      --add-stdcall-underscore Add underscores to stdcall symbols in interface library.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -k --kill-at              Kill @<n> from exported names.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -A --add-stdcall-alias    Add aliases without @<n>.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -p --ext-prefix-alias <prefix> Add aliases with <prefix>.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -S --as <name>            Use <name> for assembler.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -f --as-flags <flags>     Pass <flags> to the assembler.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -C --compat-implib        Create backward compatible import library.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -n --no-delete            Keep temp files (repeat for extra preservation).\n"));
  FUNC_2 (VAR_3, FUNC_0("   -t --temp-prefix <prefix> Use <prefix> to construct temp file names.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -v --verbose              Be verbose.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -V --version              Display the program version.\n"));
  FUNC_2 (VAR_3, FUNC_0("   -h --help                 Display this information.\n"));
  FUNC_2 (VAR_3, FUNC_0("   @<file>                   Read options from <file>.\n"));





  if (VAR_0[0] && VAR_4 == 0)
    FUNC_2 (VAR_3, FUNC_0("Report bugs to %s\n"), VAR_0);
  FUNC_1 (VAR_4);
}
