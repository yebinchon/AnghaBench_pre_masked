__attribute__((used)) static char *
FUNC_0 (int VAR_0)
{
  static char VAR_1[64];

  if (FUNC_0 (VAR_0))
    snprintf (VAR_1, sizeof (VAR_1), "%d (stopped)",
       FUNC_0 (FUNC_0 (VAR_0)));
  else if (FUNC_0 (VAR_0))
    FUNC_0 (VAR_1, sizeof (VAR_1), "%d (terminated)",
       FUNC_0 (FUNC_0 (VAR_0)));
  else
    FUNC_0 (VAR_1, sizeof (VAR_1), "%d (exited)", FUNC_0 (VAR_0));

  return VAR_1;
}
