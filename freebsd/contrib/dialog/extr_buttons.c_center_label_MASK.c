__attribute__((used)) static void
FUNC_0(char *VAR_0, int VAR_1, const char *VAR_2)
{
    int VAR_3 = FUNC_0(VAR_2);
    int VAR_4 = 0, VAR_5 = 0;

    *VAR_0 = 0;
    if (VAR_3 < VAR_1) {
 VAR_4 = (VAR_1 - VAR_3) / 2;
 VAR_5 = (VAR_1 - VAR_3 - VAR_4);
 if (VAR_4 > 0)
     sprintf(VAR_0, "%*s", VAR_4, " ");
    }
    strcat(VAR_0, VAR_2);
    if (VAR_5 > 0)
 FUNC_0(VAR_0 + strlen(VAR_0), "%*s", VAR_5, " ");
}
