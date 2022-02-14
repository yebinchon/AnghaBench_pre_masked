
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
  FUNC_2 (VAR_2, FUNC_0("Usage: %s [option(s)] [input-file]\n"),
    VAR_1);
  FUNC_2 (VAR_2, FUNC_0(" The options are:\n  -a --ascii_in                Read input file as ASCII file\n  -A --ascii_out               Write binary messages as ASCII\n  -b --binprefix               .bin filename is prefixed by .mc filename_ for uniqueness.\n  -c --customflag              Set custom flags for messages\n  -C --codepage_in=<val>       Set codepage when reading mc text file\n  -d --decimal_values          Print values to text files decimal\n  -e --extension=<extension>   Set header extension used on export header file\n  -F --target <target>         Specify output target for endianess.\n  -h --headerdir=<directory>   Set the export directory for headers\n  -u --unicode_in              Read input file as UTF16 file\n  -U --unicode_out             Write binary messages as UFT16\n  -m --maxlength=<val>         Set the maximal allowed message length\n  -n --nullterminate           Automatic add a zero termination to strings\n  -o --hresult_use             Use HRESULT definition instead of status code definition\n  -O --codepage_out=<val>      Set codepage used for writing text file\n  -r --rcdir=<directory>       Set the export directory for rc files\n  -x --xdbg=<directory>        Where to create the .dbg C include file\n                               that maps message ID's to their symbolic name.\n"));
  FUNC_2 (VAR_2, FUNC_0("  -H --help                    Print this help message\n  -v --verbose                 Verbose - tells you what it's doing\n  -V --version                 Print version information\n"));




  FUNC_3 (VAR_1, VAR_2);

  if (VAR_0[0] && VAR_3 == 0)
    FUNC_2 (VAR_2, FUNC_0("Report bugs to %s\n"), VAR_0);

  FUNC_1 (VAR_3);
}
