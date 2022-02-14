
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const* const) ;
 char** VAR_0 ;
 int FUNC_1 (char*,char*,...) ;
 char* VAR_1 ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  char const * const *VAR_2;

  FUNC_1 (FUNC_0("Usage: %s [OPTION]... FILE1 FILE2\n"), VAR_1);
  FUNC_1 ("%s\n\n", FUNC_0("Side-by-side merge of file differences."));
  for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
    if (**VAR_2)
      FUNC_1 ("  %s\n", FUNC_0(*VAR_2));
    else
      FUNC_2 ('\n');
  FUNC_1 ("\n%s\n%s\n\n%s\n",
   FUNC_0("If a FILE is `-', read standard input."),
   FUNC_0("Exit status is 0 if inputs are the same, 1 if different, 2 if trouble."),
   FUNC_0("Report bugs to <bug-gnu-utils@gnu.org>."));
}
