
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_2 (FUNC_0("Usage: %s [options] file...\n"), VAR_0);
  FUNC_1 (FUNC_0("Options:\n"), VAR_1);

  FUNC_1 (FUNC_0("  -pass-exit-codes         Exit with highest error code from a phase\n"), VAR_1);
  FUNC_1 (FUNC_0("  --help                   Display this information\n"), VAR_1);
  FUNC_1 (FUNC_0("  --target-help            Display target specific command line options\n"), VAR_1);
  if (! VAR_2)
    FUNC_1 (FUNC_0("  (Use '-v --help' to display command line options of sub-processes)\n"), VAR_1);
  FUNC_1 (FUNC_0("  -dumpspecs               Display all of the built in spec strings\n"), VAR_1);
  FUNC_1 (FUNC_0("  -dumpversion             Display the version of the compiler\n"), VAR_1);
  FUNC_1 (FUNC_0("  -dumpmachine             Display the compiler's target processor\n"), VAR_1);
  FUNC_1 (FUNC_0("  -print-search-dirs       Display the directories in the compiler's search path\n"), VAR_1);
  FUNC_1 (FUNC_0("  -print-libgcc-file-name  Display the name of the compiler's companion library\n"), VAR_1);
  FUNC_1 (FUNC_0("  -print-file-name=<lib>   Display the full path to library <lib>\n"), VAR_1);
  FUNC_1 (FUNC_0("  -print-prog-name=<prog>  Display the full path to compiler component <prog>\n"), VAR_1);
  FUNC_1 (FUNC_0("  -print-multi-directory   Display the root directory for versions of libgcc\n"), VAR_1);
  FUNC_1 (FUNC_0("  -print-multi-lib         Display the mapping between command line options and\n                           multiple library search directories\n"), VAR_1);


  FUNC_1 (FUNC_0("  -print-multi-os-directory Display the relative path to OS libraries\n"), VAR_1);
  FUNC_1 (FUNC_0("  -Wa,<options>            Pass comma-separated <options> on to the assembler\n"), VAR_1);
  FUNC_1 (FUNC_0("  -Wp,<options>            Pass comma-separated <options> on to the preprocessor\n"), VAR_1);
  FUNC_1 (FUNC_0("  -Wl,<options>            Pass comma-separated <options> on to the linker\n"), VAR_1);
  FUNC_1 (FUNC_0("  -Xassembler <arg>        Pass <arg> on to the assembler\n"), VAR_1);
  FUNC_1 (FUNC_0("  -Xpreprocessor <arg>     Pass <arg> on to the preprocessor\n"), VAR_1);
  FUNC_1 (FUNC_0("  -Xlinker <arg>           Pass <arg> on to the linker\n"), VAR_1);
  FUNC_1 (FUNC_0("  -combine                 Pass multiple source files to compiler at once\n"), VAR_1);
  FUNC_1 (FUNC_0("  -save-temps              Do not delete intermediate files\n"), VAR_1);
  FUNC_1 (FUNC_0("  -pipe                    Use pipes rather than intermediate files\n"), VAR_1);
  FUNC_1 (FUNC_0("  -time                    Time the execution of each subprocess\n"), VAR_1);
  FUNC_1 (FUNC_0("  -specs=<file>            Override built-in specs with the contents of <file>\n"), VAR_1);
  FUNC_1 (FUNC_0("  -std=<standard>          Assume that the input sources are for <standard>\n"), VAR_1);
  FUNC_1 (FUNC_0("  --sysroot=<directory>    Use <directory> as the root directory for headers\n                           and libraries\n"), VAR_1);


  FUNC_1 (FUNC_0("  -B <directory>           Add <directory> to the compiler's search paths\n"), VAR_1);
  FUNC_1 (FUNC_0("  -b <machine>             Run gcc for target <machine>, if installed\n"), VAR_1);
  FUNC_1 (FUNC_0("  -V <version>             Run gcc version number <version>, if installed\n"), VAR_1);
  FUNC_1 (FUNC_0("  -v                       Display the programs invoked by the compiler\n"), VAR_1);
  FUNC_1 (FUNC_0("  -###                     Like -v but options quoted and commands not executed\n"), VAR_1);
  FUNC_1 (FUNC_0("  -E                       Preprocess only; do not compile, assemble or link\n"), VAR_1);
  FUNC_1 (FUNC_0("  -S                       Compile only; do not assemble or link\n"), VAR_1);
  FUNC_1 (FUNC_0("  -c                       Compile and assemble, but do not link\n"), VAR_1);
  FUNC_1 (FUNC_0("  -o <file>                Place the output into <file>\n"), VAR_1);
  FUNC_1 (FUNC_0("  -x <language>            Specify the language of the following input files\n                           Permissible languages include: c c++ assembler none\n                           'none' means revert to the default behavior of\n                           guessing the language based on the file's extension\n"), VAR_1);






  FUNC_2 (FUNC_0("\nOptions starting with -g, -f, -m, -O, -W, or --param are automatically\n passed on to the various sub-processes invoked by %s.  In order to pass\n other options on to these processes the -W<letter> options must be used.\n"), VAR_0);







}
