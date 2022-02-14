
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TERMTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void
FUNC_4(TERMTYPE *VAR_4, const char *VAR_5, char *VAR_6)
{
    int VAR_7 = FUNC_1(VAR_5);
    int VAR_8 = 0;
    int VAR_9;
    bool VAR_10[10];
    char *VAR_11 = VAR_6;







    for (VAR_9 = 0; VAR_9 < 10; VAR_9++)
 VAR_10[VAR_9] = VAR_0;

    while (*VAR_11 != 0) {
 if (*VAR_11 == '%') {
     if (*++VAR_11 == '\0') {
  FUNC_0("expected character after %% in %s", VAR_5);
  break;
     } else if (*VAR_11 == 'p') {
  if (*++VAR_11 == '\0' || !FUNC_2((int) *VAR_11)) {
      FUNC_0("expected digit after %%p in %s", VAR_5);
      return;
  } else {
      VAR_9 = (*VAR_11 - '0');
      if (VAR_9 > VAR_8)
   VAR_8 = VAR_9;
      VAR_10[VAR_9] = VAR_1;
  }
     }
 }
 VAR_11++;
    }

    if (VAR_10[0]) {
 FUNC_0("%s refers to parameter 0 (%%p0), which is not allowed", VAR_5);
    }
    if (VAR_6 == VAR_2 || VAR_7 < 0) {
 ;
    } else if (VAR_7 != VAR_8) {
 FUNC_0("%s uses %d parameters, expected %d", VAR_5,
      VAR_8, VAR_7);
 for (VAR_9 = 1; VAR_9 < VAR_8; VAR_9++) {
     if (!VAR_10[VAR_9])
  FUNC_0("%s omits parameter %d", VAR_5, VAR_9);
 }
    }
}
