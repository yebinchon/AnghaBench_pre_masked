
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const* const) ;
 char** VAR_0 ;
 int FUNC_1 (char*,char*,...) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  char const * const *VAR_2;

  FUNC_1 (FUNC_0("Usage: %s [OPTION]... FILE1 [FILE2 [SKIP1 [SKIP2]]]\n"),
   VAR_1);
  FUNC_1 ("%s\n\n", FUNC_0("Compare two files byte by byte."));
  for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
    FUNC_1 ("  %s\n", FUNC_0(*VAR_2));
  FUNC_1 ("\n%s\n%s\n\n%s\n%s\n\n%s\n",
   FUNC_0("SKIP1 and SKIP2 are the number of bytes to skip in each file."),
   FUNC_0("SKIP values may be followed by the following multiplicative suffixes:\nkB 1000, K 1024, MB 1,000,000, M 1,048,576,\nGB 1,000,000,000, G 1,073,741,824, and so on for T, P, E, Z, Y."),


   FUNC_0("If a FILE is `-' or missing, read standard input."),
   FUNC_0("Exit status is 0 if inputs are the same, 1 if different, 2 if trouble."),
   FUNC_0("Report bugs to <bug-gnu-utils@gnu.org>."));
}
