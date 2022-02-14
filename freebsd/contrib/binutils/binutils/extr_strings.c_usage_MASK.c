
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
  FUNC_2 (VAR_2, FUNC_0(" Display printable strings in [file(s)] (stdin by default)\n"));
  FUNC_2 (VAR_2, FUNC_0(" The options are:\n  -a - --all                Scan the entire file, not just the data section\n  -f --print-file-name      Print the name of the file before each string\n  -n --bytes=[number]       Locate & print any NUL-terminated sequence of at\n  -<number>                 least [number] characters (default 4).\n  -t --radix={o,d,x}        Print the location of the string in base 8, 10 or 16\n  -o                        An alias for --radix=o\n  -T --target=<BFDNAME>     Specify the binary file format\n  -e --encoding={s,S,b,l,B,L} Select character size and endianness:\n                            s = 7-bit, S = 8-bit, {b,l} = 16-bit, {B,L} = 32-bit\n  @<file>                   Read options from <file>\n  -h --help                 Display this information\n  -v --version              Print the program's version number\n"));
  FUNC_3 (VAR_1, VAR_2);
  if (VAR_0[0] && VAR_3 == 0)
    FUNC_2 (VAR_2, FUNC_0("Report bugs to %s\n"), VAR_0);
  FUNC_1 (VAR_3);
}
