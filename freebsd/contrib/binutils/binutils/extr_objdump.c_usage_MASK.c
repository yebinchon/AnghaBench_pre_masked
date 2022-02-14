
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int *) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_6 (FILE *VAR_2, int VAR_3)
{
  FUNC_3 (VAR_2, FUNC_0("Usage: %s <option(s)> <file(s)>\n"), VAR_1);
  FUNC_3 (VAR_2, FUNC_0(" Display information from object <file(s)>.\n"));
  FUNC_3 (VAR_2, FUNC_0(" At least one of the following switches must be given:\n"));
  FUNC_3 (VAR_2, FUNC_0("  -a, --archive-headers    Display archive header information\n  -f, --file-headers       Display the contents of the overall file header\n  -p, --private-headers    Display object format specific file header contents\n  -h, --[section-]headers  Display the contents of the section headers\n  -x, --all-headers        Display the contents of all headers\n  -d, --disassemble        Display assembler contents of executable sections\n  -D, --disassemble-all    Display assembler contents of all sections\n  -S, --source             Intermix source code with disassembly\n  -s, --full-contents      Display the full contents of all sections requested\n  -g, --debugging          Display debug information in object file\n  -e, --debugging-tags     Display debug information using ctags style\n  -G, --stabs              Display (in raw form) any STABS info in the file\n  -W, --dwarf              Display DWARF info in the file\n  -t, --syms               Display the contents of the symbol table(s)\n  -T, --dynamic-syms       Display the contents of the dynamic symbol table\n  -r, --reloc              Display the relocation entries in the file\n  -R, --dynamic-reloc      Display the dynamic relocation entries in the file\n  @<file>                  Read options from <file>\n  -v, --version            Display this program's version number\n  -i, --info               List object formats and architectures supported\n  -H, --help               Display this information\n"));
  if (VAR_3 != 2)
    {
      FUNC_3 (VAR_2, FUNC_0("\n The following switches are optional:\n"));
      FUNC_3 (VAR_2, FUNC_0("  -b, --target=BFDNAME           Specify the target object format as BFDNAME\n  -m, --architecture=MACHINE     Specify the target architecture as MACHINE\n  -j, --section=NAME             Only display information for section NAME\n  -M, --disassembler-options=OPT Pass text OPT on to the disassembler\n  -EB --endian=big               Assume big endian format when disassembling\n  -EL --endian=little            Assume little endian format when disassembling\n      --file-start-context       Include context from start of file (with -S)\n  -I, --include=DIR              Add DIR to search list for source files\n  -l, --line-numbers             Include line numbers and filenames in output\n  -C, --demangle[=STYLE]         Decode mangled/processed symbol names\n                                  The STYLE, if specified, can be `auto', `gnu',\n                                  `lucid', `arm', `hp', `edg', `gnu-v3', `java'\n                                  or `gnat'\n  -w, --wide                     Format output for more than 80 columns\n  -z, --disassemble-zeroes       Do not skip blocks of zeroes when disassembling\n      --start-address=ADDR       Only process data whose address is >= ADDR\n      --stop-address=ADDR        Only process data whose address is <= ADDR\n      --prefix-addresses         Print complete address alongside disassembly\n      --[no-]show-raw-insn       Display hex alongside symbolic disassembly\n      --adjust-vma=OFFSET        Add OFFSET to all displayed section addresses\n      --special-syms             Include special symbols in symbol dumps\n\n"));
      FUNC_5 (VAR_1, VAR_2);
      FUNC_4 (VAR_1, VAR_2);

      FUNC_1 (VAR_2);
    }
  if (VAR_0[0] && VAR_3 == 0)
    FUNC_3 (VAR_2, FUNC_0("Report bugs to %s.\n"), VAR_0);
  FUNC_2 (VAR_3);
}
