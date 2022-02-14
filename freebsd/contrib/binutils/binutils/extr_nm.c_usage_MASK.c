
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
  FUNC_2 (VAR_2, FUNC_0("Usage: %s [option(s)] [file(s)]\n"), VAR_1);
  FUNC_2 (VAR_2, FUNC_0(" List symbols in [file(s)] (a.out by default).\n"));
  FUNC_2 (VAR_2, FUNC_0(" The options are:\n  -a, --debug-syms       Display debugger-only symbols\n  -A, --print-file-name  Print name of the input file before every symbol\n  -B                     Same as --format=bsd\n  -C, --demangle[=STYLE] Decode low-level symbol names into user-level names\n                          The STYLE, if specified, can be `auto' (the default),\n                          `gnu', `lucid', `arm', `hp', `edg', `gnu-v3', `java'\n                          or `gnat'\n      --no-demangle      Do not demangle low-level symbol names\n  -D, --dynamic          Display dynamic symbols instead of normal symbols\n      --defined-only     Display only defined symbols\n  -e                     (ignored)\n  -f, --format=FORMAT    Use the output format FORMAT.  FORMAT can be `bsd',\n                           `sysv' or `posix'.  The default is `bsd'\n  -g, --extern-only      Display only external symbols\n  -l, --line-numbers     Use debugging information to find a filename and\n                           line number for each symbol\n  -n, --numeric-sort     Sort symbols numerically by address\n  -o                     Same as -A\n  -p, --no-sort          Do not sort the symbols\n  -P, --portability      Same as --format=posix\n  -r, --reverse-sort     Reverse the sense of the sort\n  -S, --print-size       Print size of defined symbols\n  -s, --print-armap      Include index for symbols from archive members\n      --size-sort        Sort symbols by size\n      --special-syms     Include special symbols in the output\n      --synthetic        Display synthetic symbols as well\n  -t, --radix=RADIX      Use RADIX for printing symbol values\n      --target=BFDNAME   Specify the target object format as BFDNAME\n  -u, --undefined-only   Display only undefined symbols\n  -X 32_64               (ignored)\n  @FILE                  Read options from FILE\n  -h, --help             Display this information\n  -V, --version          Display this program's version number\n\n"));
  FUNC_3 (VAR_1, VAR_2);
  if (VAR_0[0] && VAR_3 == 0)
    FUNC_2 (VAR_2, FUNC_0("Report bugs to %s.\n"), VAR_0);
  FUNC_1 (VAR_3);
}
