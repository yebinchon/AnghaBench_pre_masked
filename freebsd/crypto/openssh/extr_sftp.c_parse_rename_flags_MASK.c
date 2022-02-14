__attribute__((used)) static int
FUNC_0(const char *VAR_0, char **VAR_1, int VAR_2, int *VAR_3)
{
 extern int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_7 = 1;
 VAR_4 = 0;

 *VAR_3 = 0;
 while ((VAR_8 = FUNC_0(VAR_2, VAR_1, "l")) != -1) {
  switch (VAR_8) {
  case 'l':
   *VAR_3 = 1;
   break;
  default:
   FUNC_0("%s: Invalid flag -%c", VAR_0, VAR_6);
   return -1;
  }
 }

 return VAR_5;
}
