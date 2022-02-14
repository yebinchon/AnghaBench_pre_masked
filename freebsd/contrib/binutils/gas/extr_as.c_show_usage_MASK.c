
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (char*) ;
 TYPE_1__** VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 char* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_5 (FILE * VAR_7)
{
  FUNC_1 (VAR_7, FUNC_0("Usage: %s [option...] [asmfile...]\n"), VAR_4);

  FUNC_1 (VAR_7, FUNC_0("Options:\n  -a[sub-option...]	  turn on listings\n                      	  Sub-options [default hls]:\n                      	  c      omit false conditionals\n                      	  d      omit debugging directives\n                      	  h      include high-level source\n                      	  l      include assembly\n                      	  m      include macro expansions\n                      	  n      omit forms processing\n                      	  s      include symbols\n                      	  =FILE  list to FILE (must be last sub-option)\n"));
  FUNC_1 (VAR_7, FUNC_0("  --alternate             initially turn on alternate macro syntax\n"));

  FUNC_1 (VAR_7, FUNC_0("  -D                      produce assembler debugging messages\n"));

  FUNC_1 (VAR_7, FUNC_0("  --defsym SYM=VAL        define symbol SYM to given value\n"));
  FUNC_1 (VAR_7, FUNC_0("  -f                      skip whitespace and comment preprocessing\n"));

  FUNC_1 (VAR_7, FUNC_0("  -g --gen-debug          generate debugging information\n"));

  FUNC_1 (VAR_7, FUNC_0("  --gstabs                generate STABS debugging information\n"));

  FUNC_1 (VAR_7, FUNC_0("  --gstabs+               generate STABS debug info with GNU extensions\n"));

  FUNC_1 (VAR_7, FUNC_0("  --gdwarf-2              generate DWARF2 debugging information\n"));

  FUNC_1 (VAR_7, FUNC_0("  --hash-size=<value>     set the hash table size close to <value>\n"));

  FUNC_1 (VAR_7, FUNC_0("  --help                  show this message and exit\n"));

  FUNC_1 (VAR_7, FUNC_0("  --target-help           show target specific options\n"));

  FUNC_1 (VAR_7, FUNC_0("  -I DIR                  add DIR to search list for .include directives\n"));

  FUNC_1 (VAR_7, FUNC_0("  -J                      don't warn about signed overflow\n"));

  FUNC_1 (VAR_7, FUNC_0("  -K                      warn when differences altered for long displacements\n"));

  FUNC_1 (VAR_7, FUNC_0("  -L,--keep-locals        keep local symbols (e.g. starting with `L')\n"));

  FUNC_1 (VAR_7, FUNC_0("  -M,--mri                assemble in MRI compatibility mode\n"));

  FUNC_1 (VAR_7, FUNC_0("  --MD FILE               write dependency information in FILE (default none)\n"));

  FUNC_1 (VAR_7, FUNC_0("  -nocpp                  ignored\n"));

  FUNC_1 (VAR_7, FUNC_0("  -o OBJFILE              name the object-file output OBJFILE (default a.out)\n"));

  FUNC_1 (VAR_7, FUNC_0("  -R                      fold data section into text section\n"));

  FUNC_1 (VAR_7, FUNC_0("  --reduce-memory-overheads \n                          prefer smaller memory use at the cost of longer\n                          assembly times\n"));



  FUNC_1 (VAR_7, FUNC_0("  --statistics            print various measured statistics from execution\n"));

  FUNC_1 (VAR_7, FUNC_0("  --strip-local-absolute  strip local absolute symbols\n"));

  FUNC_1 (VAR_7, FUNC_0("  --traditional-format    Use same format as native assembler when possible\n"));

  FUNC_1 (VAR_7, FUNC_0("  --version               print assembler version number and exit\n"));

  FUNC_1 (VAR_7, FUNC_0("  -W  --no-warn           suppress warnings\n"));

  FUNC_1 (VAR_7, FUNC_0("  --warn                  don't suppress warnings\n"));

  FUNC_1 (VAR_7, FUNC_0("  --fatal-warnings        treat warnings as errors\n"));

  FUNC_1 (VAR_7, FUNC_0("  --itbl INSTTBL          extend instruction set to include instructions\n                          matching the specifications defined in file INSTTBL\n"));


  FUNC_1 (VAR_7, FUNC_0("  -w                      ignored\n"));

  FUNC_1 (VAR_7, FUNC_0("  -X                      ignored\n"));

  FUNC_1 (VAR_7, FUNC_0("  -Z                      generate object file even after errors\n"));

  FUNC_1 (VAR_7, FUNC_0("  --listing-lhs-width     set the width in words of the output data column of\n                          the listing\n"));


  FUNC_1 (VAR_7, FUNC_0("  --listing-lhs-width2    set the width in words of the continuation lines\n                          of the output data column; ignored if smaller than\n                          the width of the first line\n"));



  FUNC_1 (VAR_7, FUNC_0("  --listing-rhs-width     set the max width in characters of the lines from\n                          the source file\n"));


  FUNC_1 (VAR_7, FUNC_0("  --listing-cont-lines    set the maximum number of continuation lines used\n                          for the output data column of the listing\n"));


  FUNC_1 (VAR_7, FUNC_0("  @FILE                   read options from FILE\n"));


  FUNC_4 (VAR_7);

  FUNC_2 ('\n', VAR_7);

  if (VAR_2[0] && VAR_7 == VAR_6)
    FUNC_1 (VAR_7, FUNC_0("Report bugs to %s\n"), VAR_2);
}
