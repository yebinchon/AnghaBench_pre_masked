__attribute__((used)) static int
FUNC_0(const char *VAR_0, char **VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
 extern int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = VAR_8 = 1;
 VAR_5 = 0;

 *VAR_3 = *VAR_4 = 0;
 while ((VAR_9 = FUNC_0(VAR_2, VAR_1, "hi")) != -1) {
  switch (VAR_9) {
  case 'h':
   *VAR_3 = 1;
   break;
  case 'i':
   *VAR_4 = 1;
   break;
  default:
   FUNC_0("%s: Invalid flag -%c", VAR_0, VAR_7);
   return -1;
  }
 }

 return VAR_6;
}
