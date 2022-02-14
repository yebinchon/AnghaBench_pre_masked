__attribute__((used)) static int
FUNC_0(const char *VAR_0, char **VAR_1, int VAR_2,
    int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
 extern int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = VAR_10 = 1;
 VAR_7 = 0;

 *VAR_3 = *VAR_4 = *VAR_6 = *VAR_5 = 0;
 while ((VAR_11 = FUNC_0(VAR_2, VAR_1, "afPpRr")) != -1) {
  switch (VAR_11) {
  case 'a':
   *VAR_3 = 1;
   break;
  case 'f':
   *VAR_4 = 1;
   break;
  case 'p':
  case 'P':
   *VAR_5 = 1;
   break;
  case 'r':
  case 'R':
   *VAR_6 = 1;
   break;
  default:
   FUNC_0("%s: Invalid flag -%c", VAR_0, VAR_9);
   return -1;
  }
 }

 return VAR_8;
}
