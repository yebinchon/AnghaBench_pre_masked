
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (char const* const*) ;
 char* VAR_1 ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (char const* const,int ) ;
 int FUNC_4 (char,int ) ;
 int VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
    static const char *const VAR_4[] =
    {
 "Options:",
 "  -1         format translation output one capability per line",



 "  -K         translate entries to termcap source form with BSD syntax",
 "  -C         translate entries to termcap source form",
 "  -D         print list of tic's database locations (first must be writable)",
 "  -c         check only, validate input without compiling or translating",
 "  -e<names>  translate/compile only entries named by comma-separated list",
 "  -f         format complex strings for readability",
 "  -G         format %{number} to %'char'",
 "  -g         format %'char' to %{number}",
 "  -I         translate entries to terminfo source form",
 "  -L         translate entries to full terminfo source form",
 "  -N         disable smart defaults for source translation",
 "  -o<dir>    set output directory for compiled entry writes",
 "  -R<name>   restrict translation to given terminfo/termcap version",
 "  -r         force resolution of all use entries in source translation",
 "  -s         print summary statistics",
 "  -T         remove size-restrictions on compiled description",



 "  -U         suppress post-processing of entries",
 "  -V         print version",
 "  -v[n]      set verbosity level",
 "  -w[n]      set format width for translation output",



 "",
 "Parameters:",
 "  <file>     file to translate or compile"
    };
    size_t VAR_5;

    FUNC_2(VAR_2, "Usage: %s %s\n", VAR_1, VAR_3);
    for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_4); VAR_5++) {
 FUNC_3(VAR_4[VAR_5], VAR_2);
 FUNC_4('\n', VAR_2);
    }
    FUNC_0(VAR_0);
}
