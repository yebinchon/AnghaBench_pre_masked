
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
    char *VAR_4, *VAR_5, VAR_6;
    char **VAR_7 = VAR_2;

    VAR_1 = 0;
    VAR_4 = VAR_0;
    if (*VAR_4 == '!') {
 FUNC_1(VAR_3, VAR_0);
 *VAR_7++ = FUNC_2("!");
 VAR_1++;
 VAR_4++;
    }
    while ((VAR_6 = *VAR_4)) {
 int VAR_8 = 0;
 while (FUNC_0(VAR_6))
     VAR_6 = *++VAR_4;
 if (VAR_6 == '\0')
     break;
 *VAR_7++ = VAR_4;
 VAR_1 += 1;
 for (VAR_5 = VAR_4; VAR_6 != '\0'; VAR_6 = *++VAR_4) {
     if (VAR_8) {
  if (VAR_6 == VAR_8) {
      VAR_8 = 0;
      continue;
  }
     } else {
  if (VAR_6 == '\\') {
      if ((VAR_6 = *++VAR_4) == '\0')
   break;
  } else if (VAR_6 == '"') {
      VAR_8 = '"';
      continue;
  } else if (VAR_6 == '\'') {
      VAR_8 = '\'';
      continue;
  } else if (FUNC_0(VAR_6))
      break;
     }
     *VAR_5++ = VAR_6;
 }
 *VAR_5 = '\0';
 if (VAR_6 == '\0')
     break;
 VAR_4++;
    }
    *VAR_7++ = 0;
}
