__attribute__((used)) static int
FUNC_0(const char *VAR_0, char **VAR_1, int VAR_2)
{
 extern int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_6 = 1;
 VAR_3 = 0;

 while ((VAR_7 = FUNC_0(VAR_2, VAR_1, "")) != -1) {
  switch (VAR_7) {
  default:
   FUNC_0("%s: Invalid flag -%c", VAR_0, VAR_5);
   return -1;
  }
 }

 return VAR_4;
}
