
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
  FUNC_2 (VAR_2, FUNC_0(" Displays the sizes of sections inside binary files\n"));
  FUNC_2 (VAR_2, FUNC_0(" If no input file(s) are specified, a.out is assumed\n"));
  FUNC_2 (VAR_2, FUNC_0(" The options are:\n  -A|-B     --format={sysv|berkeley}  Select output style (default is %s)\n  -o|-d|-x  --radix={8|10|16}         Display numbers in octal, decimal or hex\n  -t        --totals                  Display the total sizes (Berkeley only)\n            --target=<bfdname>        Set the binary file format\n            @<file>                   Read options from <file>\n  -h        --help                    Display this information\n  -v        --version                 Display the program's version\n\n"),
  "sysv"

);
  FUNC_3 (VAR_1, VAR_2);
  if (VAR_0[0] && VAR_3 == 0)
    FUNC_2 (VAR_2, FUNC_0("Report bugs to %s\n"), VAR_0);
  FUNC_1 (VAR_3);
}
