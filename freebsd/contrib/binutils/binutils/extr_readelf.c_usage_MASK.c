
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_2)
{
  FUNC_2 (VAR_2, FUNC_0("Usage: readelf <option(s)> elf-file(s)\n"));
  FUNC_2 (VAR_2, FUNC_0(" Display information about the contents of ELF format files\n"));
  FUNC_2 (VAR_2, FUNC_0(" Options are:\n  -a --all               Equivalent to: -h -l -S -s -r -d -V -A -I\n  -h --file-header       Display the ELF file header\n  -l --program-headers   Display the program headers\n     --segments          An alias for --program-headers\n  -S --section-headers   Display the sections' header\n     --sections          An alias for --section-headers\n  -g --section-groups    Display the section groups\n  -t --section-details   Display the section details\n  -e --headers           Equivalent to: -h -l -S\n  -s --syms              Display the symbol table\n      --symbols          An alias for --syms\n  -n --notes             Display the core notes (if present)\n  -r --relocs            Display the relocations (if present)\n  -u --unwind            Display the unwind info (if present)\n  -d --dynamic           Display the dynamic section (if present)\n  -V --version-info      Display the version sections (if present)\n  -A --arch-specific     Display architecture specific information (if any).\n  -D --use-dynamic       Use the dynamic section info when displaying symbols\n  -x --hex-dump=<number> Dump the contents of section <number>\n  -w[liaprmfFsoR] or\n  --debug-dump[=line,=info,=abbrev,=pubnames,=aranges,=macro,=frames,=str,=loc,=Ranges]\n                         Display the contents of DWARF2 debug sections\n"));
  FUNC_2 (VAR_2, FUNC_0("  -I --histogram         Display histogram of bucket list lengths\n  -W --wide              Allow output width to exceed 80 characters\n  @<file>                Read options from <file>\n  -H --help              Display this information\n  -v --version           Display the version number of readelf\n"));






  if (VAR_0[0] && VAR_2 == VAR_1)
    FUNC_2 (VAR_1, FUNC_0("Report bugs to %s\n"), VAR_0);

  FUNC_1 (VAR_2 == VAR_1 ? 0 : 1);
}
