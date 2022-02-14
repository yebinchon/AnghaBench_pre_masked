
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0)
{
    char *VAR_1 = FUNC_3(VAR_0);
    int VAR_2, VAR_3, VAR_4, VAR_5;

    if (VAR_1 != 0) {
 for (VAR_3 = VAR_4 = VAR_5 = 0; VAR_1[VAR_3] != 0; ++VAR_3) {
     VAR_2 = FUNC_0(VAR_1[VAR_3]);
     if (FUNC_2(VAR_2)) {
  if (VAR_5 == '\0') {
      continue;
  } else if (FUNC_1(VAR_5) || VAR_5 == ',') {
      VAR_2 = ',';
  }
     } else if (VAR_2 == ',') {
  ;
     } else {
  if (VAR_5 == ',')
      VAR_1[VAR_4++] = (char) VAR_5;
  VAR_1[VAR_4++] = (char) VAR_2;
     }
     VAR_5 = VAR_2;
 }
 VAR_1[VAR_4] = '\0';
    }
    return VAR_1;
}
