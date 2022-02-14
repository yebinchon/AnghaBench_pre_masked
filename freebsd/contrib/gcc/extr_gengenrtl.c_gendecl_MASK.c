__attribute__((used)) static void
FUNC_0 (const char *VAR_0)
{
  const char *VAR_1;
  int VAR_2, VAR_3;

  printf ("extern rtx gen_rtx_fmt_%s\t (RTX_CODE, ", VAR_0);
  FUNC_0 ("enum machine_mode mode");



  for (VAR_1 = VAR_0, VAR_2 = 0, VAR_3 = 75; *VAR_1 != 0; VAR_1++)
    if (*VAR_1 != '0')
      {
 int VAR_4 = strlen (FUNC_0 (*VAR_1)) + 6 + (VAR_2 > 9);

 FUNC_0 (",");
 if (VAR_3 + VAR_4 > 76)
   FUNC_0 ("\n\t\t\t\t      "), VAR_3 = 39;

 FUNC_0 (" %darg%d", FUNC_0 (*VAR_1), VAR_2++);
 VAR_3 += VAR_4;
      }

  FUNC_0 (");\n");
}
